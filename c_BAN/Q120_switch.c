/*What is the significance of Break and Continue. */

BREAK:it is used in the loops&switch staments.

when the break condition satisfiy the loop is immediately terminated and program control resumes the next statement following the loop.


Example:
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break; 
        }
        printf("%d ", i);
    }
    return 0;
}

continue: it is used in loops.

when the continue condition satisfy that line skip.and jumps back to the loop condition.

in for loop it will jum back to increment/decrement.

Example:

#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; 
        }
        printf("%d ", i);
    }
    return 0;
}



