# 0x06. C - More pointers, arrays and strings


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
  - [Task 7](#task-7)
- [Advanced tasks](#advanced-tasks)
  - [Task 8](#task-8)
  - [Task 9](#task-9)
  - [Task 10](#task-10)
  - [Task 11](#task-11)
  - [Task 12](#task-12)
- [My process](#my-process)
  - [Built with](#built-with)
  - [What I learned](#what-i-learned)
- [Author](#author)
- [Acknowledgments](#acknowledgements)
- [Credits](#credits)
- [Link to template](#link-to-template)

## Overview

### Completed tasks

- [x] task 0
- [x] task 1
- [x] task 2
- [x] task 3
- [x] task 4
- [x] task 5
- [x] task 6
- [x] task 7
- [ ] task 8
- [ ] task 9
- [ ] task 10
- [ ] task 11
- [ ] task 12

### Links to task files

- **Mandatory tasks**
  - [Task 0][Task 0]
  - [Task 1][Task 1]
  - [Task 2][Task 2]
  - [Task 3][Task 3]
  - [Task 4][Task 4]
  - [Task 5][Task 5]
  - [Task 6][Task 6]
  - [Task 7][Task 7]

- **Advanced tasks**
  - [Task 8][Task 8]
  - [Task 9][Task 9]
  - [Task 10][Task 10]
  - [Task 11][Task 11]
  - [Task 12][Task 12]

[Task 0]: ./0-strcat.c
[Task 1]: ./1-strncat.c
[Task 2]: ./2-strncpy.c
[Task 3]: ./3-strcmp.c
[Task 4]: ./4-rev_array.c
[Task 5]: ./5-string_toupper.c
[Task 6]: ./6-cap_string.c
[Task 7]: ./7-leet.c
[Task 8]: ./
[Task 9]: ./
[Task 10]: ./
[Task 11]: ./
[Task 12]: ./


## Mandatory tasks

### Task 0
Function that concatenates two strings.

- Prototype: char \*\_strcat(char \*dest, char \*src);
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest

**Task file:** [0-strcat.c][Task 0]

### Task 1
Function that concatenates two strings.

- Prototype: char \*\_strncat(char \*dest, char \*src, int n);
- The \_strncat function is similar to the \_strcat function, except that it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string dest

**Task file:** [1-strncat.c][Task 1]

### Task 2
Function that copies a string.

- Prototype: char \*\_strncpy(char \*dest, char \*src, int n);

**Task file:** [2-strncpy.c][Task 2]

### Task 3
Function that compares two strings.

- Prototype: int \_strcmp(char \*s1, char \*s2);

**Task file:** [3-strcmp.c][Task 3]

### Task 4
Function that reverses the content of an array of integers.

- Prototype: void reverse\_array(int \*a, int n);
- Where n is the number of elements of the array

**Task file:** [4-rev\_array.c][Task 4]

### Task 5
Function that changes all lowercase letters of a string to uppercase.

Prototype: char \*string\_toupper(char \*);

**Task file:** [5-string\_toupper.c][Task 5]

### Task 6
Function that capitalizes all words of a string.

- Prototype: char \*cap\_string(char \*);
- Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

**Task file:** [6-cap\_string.c][Task 6]

### Task 7
Function that encodes a string into 1337.

- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1
- Prototype: char \*leet(char \*);
- You can only use one if in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operation

**Task file:** [7-leet.c][Task 7]

## Advanced tasks

### Task 8


**Task file:** [][Task 8]

### Task 9


**Task file:** [][Task 9]

### Task 10


**Task file:** [][Task 10]

### Task 11


**Task file:** [][Task 11]

### Task 12


**Task file:** [][Task 12]


## My process

### Built with

- C

### What I learned

I learned
- How to compare a string
- The importance of pseudocode before writing your code


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
