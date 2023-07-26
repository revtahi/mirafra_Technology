/*What happens if we use float as a part of switch case */

Switch case allows only integer and character constants in case expression. We can't use float values. It executes case only if input value matches otherwise default case executes. Break keyword can be used to break the control and take out control from the switch.


Example:

#include <stdio.h>

int main() {
    float value = 3.14;
switch (value) {
    case 1.0:
        printf("%f",value);
        break;
    case 2.0:
        printf("%f",value);
        break;
    default:
        printf("%f",value);
        break;
}

}
