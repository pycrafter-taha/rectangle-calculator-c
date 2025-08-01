# Rectangle Area Calculator in C

This is a simple C program that calculates the area of a rectangle based on user input for length and width.

---

## 📋 Features

- Takes input from the user
- Calculates area using the formula `length * width`

---

## ✅ Requirements

- A C compiler (like GCC)
- Basic terminal or command line usage
- Works on Windows, Linux, or macOS

> 💡 To run this, make sure you have `gcc` or any C compiler installed.  
> You can install GCC via:
> - **Windows**: [MinGW](http://www.mingw.org/)
> - **Linux**: `sudo apt install build-essential`
> - **macOS**: Install Xcode Command Line Tools with `xcode-select --install`

---

## 📌 Code Preview

```c
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
