####### ------->task 0 0-preprocessor
ans ---> -E
gcc -E $CFILE -o c

 -E
Stop after the preprocessing stage; do not run the compiler proper. The output is in the form of preprocessed source code, which is sent to the standard output.Input files that don’t require preprocessing are ignored.

-o file
Place the primary output in file file. This applies to whatever sort of output is being produced, whether it be an executable file, an object filean assembler file or preprocessed C code.
