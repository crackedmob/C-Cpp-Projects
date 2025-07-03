# Elevator Simulation in C

A simple command-line based elevator simulation written in C. This project simulates an elevator system that moves between floors based on user input. It demonstrates basic control structures, loops, input validation, and real-time delays.

---

## Features

* Simulates floor-by-floor elevator movement from a starting position
* Allows configuration of maximum floor range at runtime
* Handles upward and downward movement with delays
* Validates user input for valid floor range and exit condition
* Provides continuous operation until manually exited

---

## Technologies Used

* C Programming Language
* Standard C Libraries:

  * stdio.h
  * stdlib.h
  * unistd.h (for sleep functionality)

---

## How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/crackedmob/elevator-simulation-c.git
cd elevator-simulation-c
```

### 2. Compile the Program

```bash
gcc -o elevator elevator.c
```

### 3. Run the Program

```bash
./elevator
```

---

## Sample Output

```plaintext
Enter the maximum floor number (e.g., 5): 5
Enter the floor you want to get to (0 to 5, or -1 to exit): 3
Going up, floor 1
Going up, floor 2
Going up, floor 3
Arrived at your floor
Doors opening...
Doors closing...

Enter the floor you want to get to (0 to 5, or -1 to exit): -1
Exiting elevator
```

---

