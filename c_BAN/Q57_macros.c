/*How Macros work. What are the standard macros available as a part of standard C library.
How macros are taken into consideration during compilation.*/

Macros in C are a form of preprocessor directive that allows you to define a constant value or a short piece of code that can be expanded into a larger piece of code at compile time. Macros are typically defined using the #define directive and are identified by a unique name.
To use a macro, you simply refer to its name in your code. The preprocessor replaces all occurrences of the macro with its defined value or code before the code is compiled. This allows you to reuse a common piece of code or value without having to copy and paste it multiple times.
The standard C library provides a number of macros for various purposes, such as:
NULL: A macro that represents a null pointer constant.
EOF: A macro that represents the end-of-file value.
sizeof: A macro that calculates the size in bytes of a data type or expression.
offsetof: A macro that calculates the offset of a member within a structure.
__FILE__: A macro that represents the current file name.
__LINE__: A macro that represents the current line number.
__DATE__: A macro that represents the current date.
__TIME__: A macro that represents the current time.

