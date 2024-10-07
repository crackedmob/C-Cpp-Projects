#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){

int initial = 0; //denoting ground floor as 0 and initially the elevator is at ground floor 
int floor;// the floor we want to get to

while(1){

    printf("Enter the floor you want to get to (0,1,2,3,4,5): \n");
    if(scanf("%d",&floor) != 1){// tsking input and validating it 
        while(getchar() != '\n');
        continue;
        }
  
    if (floor == -1){// checking for exit condition
        printf("Exiting elevator\n");
        break;
    }
    if (floor < 0 || floor > 5){// validating the input
        printf("Enter a valid floor number\n");
        continue;
    }
    if (floor == initial){// checking if already at the destination
        printf("You're at your destination\n");
        continue;
    }
//moving the elevator 
while (initial != floor){
    if(initial < floor){
     initial++;// incrementing the floors 
     printf ("Going up, floor %d\n",initial);
       }
    else{ 
     initial--;// decrementing the floors
     printf("Going down, floor %d\n",initial);
      }
      sleep(1);// waits 1 second between floors
    }
    printf("Arrived at your floor\n");// final destination or floor we wanted to get to

    }
return 0;
}
