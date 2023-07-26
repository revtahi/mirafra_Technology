/*Infinite loops often arise in embedded systems. How do you write an infinite loop in C?  */

Using for loop:

#include <stdio.h>

int main() {
    for (;;) {
        
    }
    return 0;
}

using while loop:

#include <stdio.h>

int main() {
    while (1) {
        // Your code here
    }
    return 0;
}

