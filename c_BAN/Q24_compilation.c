/*What happens if the same external variable is declared in multiple c file  */
In C, if the same external variable is declared in multiple files, it will result in multiple instances of that variable with the same name, but separate storage in memory.
However, if you define the external variable as "extern" in one file and then define it as a normal variable in another file, the latter definition will override the "extern" declaration and effectively eliminate the link to the original definition.
It is important to note that if you modify the value of the external variable in one file, the changes will not reflect in other files unless you use pointers or other means of sharing the data between.


