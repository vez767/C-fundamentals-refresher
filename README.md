# C Programming Fundamentals & Memory Management
This project is a refactored implementation of a core C utility library. Originally a standard assignment, it has been rewritten to reflect low-level memory mapping techniques used in STM32 microcontroller development.

Instead of standard array indexing, this version leverages pointer arithmetic and base-address offsets to emulate how hardware registers are accessed in an embedded environment.

## Key Low-Level Features
* **Memory-Mapped Logic:** Uses ***(base + offset)** pointer arithmetic to manage data structures, simulating bare-metal memory access.
* **Embedded Types:** Use of `uint16_t`, `uint8_t`, and `uint32_t` to mirror the register widths of an ARM Cortex-M architecture.
* **Bitwise Suite:** Implementation of AND, OR, XOR, and NOT operations, essential for bitmasking and peripheral configuration.
* **Dynamic Allocation:** Safe `malloc` and `free` cycles with manual boundary checking (`check_memory`).

## Project Structure
- header_file.h: Defines the structs and function prototypes with header guards.
- c_functions.c: Implementation of arithmetic, bitwise logic, and pointer-based data handling.
- main.c: The test harness used to validate the memory logic.

## Compilation & Execution
This project was developed and tested using Git Bash. Use the following commands to build and run the application:
1. Build the Executable
- `gcc main.c c_functions.c -o main.exe`

2. Run the Application
- `./main.exe`
