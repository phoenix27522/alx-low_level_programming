####### ------->task 0 0-preprocessor
ans ---> -E
gcc -E $CFILE -o c

 -E
Stop after the preprocessing stage; do not run the compiler proper. The output is in the form of preprocessed source code, which is sent to the standard output.Input files that don’t require preprocessing are ignored.

-o file
Place the primary output in file file. This applies to whatever sort of output is being produced, whether it be an executable file, an object filean assembler file or preprocessed C code.

####### ------->task 1 1. Compiler
gcc -c $CFILE 

-c
Compile or assemble the source files, but do not link. The linking stage simply is not done. The ultimate output is in the form of an object file for each source file.
By default, the object file name for a source file is made by replacing the suffix ‘.c’, ‘.i’, ‘.s’, etc., with ‘.o’.
Unrecognized input files, not requiring compilation or assembly, are ignored.

####### -------->task 2 2. Assembler
gcc -S $CFILE
 
-S
Stop after the stage of compilation proper; do not assemble. The output is in the form of an assembler code file for each non-assembler input filespecified.
By default, the assembler file name for a source file is made by replacing the suffix ‘.c’, ‘.i’, etc., with ‘.s’. Input files that don’t require compilation are ignored
