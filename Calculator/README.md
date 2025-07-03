# 🧮 Command-Line Calculator in C++

This is a simple command-line calculator built using C++. It supports basic arithmetic operations and stores the result of the most recent calculation, which can be viewed on demand.

## 📌 Features

- Supports:
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
  - Modulus (`%`) for integers
- Handles invalid inputs and division by zero
- Keeps history of the last valid calculation
- User-friendly input with space-separated expressions
- Interactive loop with `quit` and `history` options

## 🛠️ How to Run

### 1. Compile the program
```bash
g++ -o calculator calculator.cpp
```

### 2. Run the program
```bash
./calculator
```

## 📖 Usage

After starting the calculator, you can enter expressions in the format:

```
<number> <operator> <number>
```

Example inputs:
```
5 + 3
10 / 2
15 % 4
```

Special commands:
- `h` or `H` → Show previous calculation
- `q` or `Q` → Quit the program

## 🧪 Sample Output

```
Enter the calculation you want to perform or input 'h' to show previous history and 'q' to quit: 5 + 7
Result: 12
Debug: Stored calculation - 5 + 7 = 12

Enter the calculation you want to perform or input 'h' to show previous history and 'q' to quit: h
Debug: History requested
Previous calculation: 5 + 7 = 12

Enter the calculation you want to perform or input 'h' to show previous history and 'q' to quit: q
Calculator closed.
```

## 🔒 Error Handling

- Invalid format: `Invalid input, Please try again.`
- Division by zero: `Error: Division by zero!`
- Unknown operator: `Error: Unknown operation`

## 📂 File Structure

```
calculator.cpp      # Main source code
README.md           # You're here!
```

## 👩‍💻 Author

Shipra Sharma  
Made with ❤️ in C++

---
