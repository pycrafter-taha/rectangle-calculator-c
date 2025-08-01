#include <stdio.h>

int main() {
    int length, width;
    printf("Enter the length of the rectangle\n: ");
    scanf("%d", &length);

    printf("Enter the Width of the rectangle\n: ");
    scanf("%d", &width);

    printf("The area of the rectangle is: %d\n", length * width);
    return 0;
}