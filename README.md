# COMP0002 – C Programming

This repository contains my C programming work for the first half of the **COMP0002** module at **UCL**.  
It includes a mix of assignment code, practice exercises, and general experimentation as I learn the language and test different ideas.

---

## About
This repository holds my C programming code — covering core concepts like:
- Pointers and memory management  
- Arrays, strings, and structs  
- File I/O and error handling  
- Recursion and modular program design  
- Compilation and debugging with `gcc` / `gdb`

---

## How to Compile
Most files can be compiled from the terminal using `gcc`:
```bash
gcc filename.c -o filename
./filename
```
Drawing programs require the `java drawapp` files and `graphics.c` needs to be compiled as well as piping the output to java using:
```bash
./filename | java -jar drawapp-4.5.jar
```