No worries, I've got you covered! Here's a C program to find the minimum number from a given set of numbers:

```c
#include <stdio.h>

int main() {
    int num1, num2, num3, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    min = num1;

    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    printf("The minimum number is: %d\n", min);

    return 0;
}
```

You can input three numbers, and the program will output the minimum number among them. Let me know if you have any other questions!
