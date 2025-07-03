#include<iostream>
#include<string>
#include<sstream>
#include<stdexcept>
using namespace std;

int main(){
double num1,num2,result = 0;
char operation;
string input,expression;
//for storing previous calculation.
string previousExpression = "";
double previousResult = 0;
bool hasPreviousCalculation = false;


while(true){
cout<<"Enter the calculation you want to perform or input 'h' to show previous history and 'q' to quit: ";
getline(cin,input);//getline is function in cpp which is used to read a
// line of text from an input stream, particularly useful when we are 
//reading a line which contain spaces i.e, "5 + 3"
// input: is a string variable,the read line is stored here.
//this function basically reads input from keyboard until it encounters
//a newline character \n , it stores all the characters except the newline
//into the input string, though it is extracted from the input.
//created a string named expression to store the expression input user performs 

if(input=="q"|| input=="Q"){
break;
}
//to display previous calculation
if (input == "h" || input == "H") {
    cout << "Debug: History requested" << endl; // Debug output
    if (hasPreviousCalculation) {
    cout << "Previous calculation: " << previousExpression << " = " << previousResult << "\n";
    } else {
      cout << "No previous calculation available.\n";
      }
    continue;  // Skip to next iteration
}
expression = input;//making expression equal to the input.

istringstream iss(input);//it is a class in cpp defined in the sstram header
 //it stands for input string stream, we are using iss as the object for our class
 //and the input is the string we read using getline function
 //the purpose of using it is that it treats our string(input data) as a stream of data
 //which allows us to easily extract formatted data from it.
 
if(!(iss >> num1 >> operation >> num2)){// here we are basically taking input from iss string
 //and storing them in the variables num1, operation and num2.
 //if the extraction of any variable fails it gets executed in if block 
 // we are using ! symbol to check the provided condition , initially we want the extraction to be true 
 //but by using ! we check the condition for true or false , cuz if the condition doesnt extract all the 
 //variables from the string that means it enters the if block.
 
cout<< "Invalid input, Please try again.\n";
continue;// continue is part of the while loop , so if the input enters the if block 
 //we want to get the new user input and for that we have to start over from while 
 //loop and forget about the rest of the code, its basically used for error handling.
}

try{
 switch(operation){
 case '+':
    result = num1 + num2;
    break;
 case '-':
    result = num1 - num2;
    break;
 case '*':
    result = num1 * num2;
    break;
 case '%':
    result = (int)num1 % (int)num2;// the % operator is only for integer data type in c++,
    //this is why here we are typecasting the input taken in double to integer to get the result.
    break;
 case '/':
    if(num2 == 0){
    throw runtime_error("Division by zero!");
    }
    result = num1 / num2;
    break;
 default:
    throw runtime_error("Unknown operation");
}

cout<<"Result: "<<result<<"\n";
//to check if the input is not h
 if (input != "h" && input != "H") {
previousExpression = expression;
previousResult = result;
hasPreviousCalculation = true;
cout << "Debug: Stored calculation - " << previousExpression << " = " << previousResult << endl; // Debug output
}

} catch(const exception& e) {
  cout << "Error: " << e.what() << "\n";
  }
   }
cout << "Calculator closed.\n";
return 0;
}
    