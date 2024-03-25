# 0x18. C - Dynamic libraries

This repository contains the source code for a dynamic library (libdynamic.so) written in C, along with a header file and a build script.

## Files:

- [libdynamic.so](libdynamic.so): The compiled dynamic library file. (You'll find this after building the project)
- [main.h](main.h): Header file containing function prototypes and declarations for the dynamic library.
- [1-create\_dynamic\_lib.sh](1-create_dynamic_lib.sh): Script to automate building the dynamic library called `liball.so`.


## Building the Library:

To build the dynamic library, run the following command in your terminal within the project directory:

### Bash

```bash
	sh 1-create_dynamic_lib.sh
```
Use code with caution.
This script will compile the source code and link it to create the libdynamic.so file.

Note: You might need to adjust permissions for the script to execute it (use `chmod +x 1-create\_dynamic\_lib.sh`).

## Using the Library:

Once built, you can link your application with libdynamic.so to use the functions defined in the library.  The header file main.h provides the necessary declarations for these functions.
