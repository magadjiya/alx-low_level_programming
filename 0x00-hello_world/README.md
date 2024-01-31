# 0x00. C - Hello, World

This is an introduction to C, we create a couple shell scripts with the gcc compiler. Then we write some basic C programs with built-in functions.

## Table of contents

- [Overview](#overview)
  - [Completed tasks](#completed-tasks)
  - [Links to task files](#links-to-task-files)
    - [Links to other files](#links-to-other-files)
- [Mandatory tasks](#mandatory-tasks)
  - [Task 0](#task-0)
  - [Task 1](#task-1)
  - [Task 2](#task-2)
  - [Task 3](#task-3)
  - [Task 4](#task-4)
  - [Task 5](#task-5)
  - [Task 6](#task-6)
- [Advanced tasks](#advanced-tasks)
  - [Task 7](#task-7)
  - [Task 8](#task-8)
- [My process](#my-process)
  - [Built with](#built-with)
  - [What I learned](#what-i-learned)
- [Author](#author)
- [Acknowledgments](#acknowledgements)
- [Credits](#credits)
- [Link to template](#link-to-template)


### Completed tasks

- [x] task 0
- [x] task 1
- [x] task 2
- [x] task 3
- [x] task 4
- [x] task 5
- [x] task 6
- [x] task 7
- [x] task 8

### Links to task files

- **Mandatory tasks**
  - [Task 0][Task 0]
  - [Task 1][Task 1]
  - [Task 2][Task 2]
  - [Task 3][Task 3]
  - [Task 4][Task 4]
  - [Task 5][Task 5]
  - [Task 6][Task 6]

- **Advanced tasks**
  - [Task 7][Task 7]
  - [Task 8][Task 8]

#### Links to other files
  - [Header file][Header file]

[Task 0]: ./0-preprocessor
[Task 1]: ./1-compiler
[Task 2]: ./2-assembler
[Task 3]: ./3-name
[Task 4]: ./4-puts.c
[Task 5]: ./5-printf.c
[Task 6]: ./6-size.c
[Task 7]: ./100-intel
[Task 8]: ./101-quote.c

## Mandatory tasks

### Task 0
A script that runs a C file (found in $CFILE) through a preprocessor and saves the output in a file named c.

**Task file:** [0-preprocessor][Task 0]

### Task 1
A script that compiles a C file (found in $CFILE) but does not link, the output has a .o extension.

**Task file:** [1-compiler][Task 0]

### Task 2
A script that generates the assembly code of a C file (found in $CFILE) and has an output with a .s extension.

**Task file:** [2-assembler][Task 0]

### Task 3
Script that compiles a C file (found in $CFILE) and creates an executable called cisfun.

**Task file:** [3-name][Task 0]

### Task 4
With the puts() function, write a C program that prints the exact sentence: "Programming is like building a multilingual puzzle." End with a new line. Return 0.

**Task file:** [4-puts.c][Task 0]

### Task 5
Using C and printf(), print "with proper grammar, but the outcome is a piece of art,", end with new line to standard output. Return (0).

**Task file:** [5-printf.c][Task 0]

### Task 6
Print the sizes of the various data types in C using C (-m32, -m64), warnings are allowed.

**Task file:** [6-size.c][Task 0]

## Advanced tasks

### Task 7
A script that generates the assembly code (Intel syntax) of a C program (found in $CFILE) With a .s extention.

**Task file:** [100-intel][Task 0]

### Task 8
Print the sentence, and that piece of art is useful" - Dora Korpar, 2015-10-19 followed by a new line to standard error. Return 1. Don't use any functions listed on the man pages for printf() and puts().

**Task file:** [101-quote.c][Task 0]


## My process

### Built with

- Shell
- C

### What I learned

- I learned about fwrite(), it can be used to write to standard error. You simply input the sentence, the space to be allocated, and the number of standard error (i.e 1).
- I learned how to set the "mode" when generating assembly code for C. Using the -masm= tag, then you input whatever mode you'd like (e.g -masm=intel).

## Author

- ALX - [ALX Africa](https://www.alxafrica.com)
- Twitter - [@k\_danhassan](https://twitter.com/k_danhassan)

## Acknowledgements

- Twitter - [@Evil\_Ghost\_\_](https://www.twitter.com/evil_ghost__)

## Credits

This template is made possible and written by:
- GitHub - [Evil-Ghost](https://github.com/Evil-Ghost)
- Twitter - [@Evil\_Ghost\_\_](https://www.twitter.com/evil_ghost__)
- Medium - [Evil Ghost](https://medium.com/@evilghost)
- Website - [Coming soon...](#)

## Link to template

- GitHub Repository - [alx-readme-template](https://github.com/Evil-Ghost/alx-readme-template)
