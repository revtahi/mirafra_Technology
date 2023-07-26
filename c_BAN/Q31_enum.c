/*What will happen if you try to print a ENUM by using %s? */

#include <stdio.h>

enum Days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main() {
    enum Days today = Tuesday;
    printf("Today is %s\n", today);
    return 0;
}

// result : Segmentation fault bcz enum days is integral type


#include <stdio.h>

enum Days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

const char* dayNames[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};

int main() {
    enum Days today = Tuesday;
    printf("Today is %s\n", dayNames[today]);
    return 0;
}


result:tuesday
