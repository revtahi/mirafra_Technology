/*Explain the different Stages of compilation */
1.Pre-Processing stage  ( .c ->.i )

Header files expanded
Macros will get replaced
Specific code will be included based on conditional macro’s
Comments will be removed

2.Compilation/Translation stage ( .i  ->.s )

Syntax and semantics analyses will be done
Reports errors if any which will help programmer to fix it.
Generates assembly code
 
3.Assembly stage  ( .s  ->.o )
Assembly code converted into machine readable code.

4.Linking stage ( .o ->.exe/.out )

Internal/External functions linkage will be done .
Generates the architecture dependent executable file to execute.
