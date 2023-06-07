#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int a[] = {10, 20, 30, 40, 50};
    int b[] = {11, 22, 33, 44, 55};

    printf("\n\t Before:");
    printf("\n\t a=");
    for (i = 0; i <= 4; i++) {
        printf("%d,", a[i]);
    }

    printf("\n\t b=");
    for (i = 0; i <= 4; i++) {
        printf("%d,", b[i]);
    }

    for (i = 0; i <= 4; i++) {
        a[i] = b[i];
    }

    printf("\n\t After:");
    printf("\n\t a=");
    for (i = 0; i <= 4; i++) {
        printf("%d,", a[i]);
    }

    printf("\n\t b=");
    for (i = 0; i <= 4; i++) {
        printf("%d,", b[i]);
    }

    getch();
    return 0;
}


/*

 Here's a brief explanation of the code:

1. The code includes the necessary header files `stdio.h` and `stdlib.h`.

2. The `main()` function is declared, indicating the starting point of the program.

3. Two integer arrays, `a` and `b`, are declared and initialized with values.

4. The program prints the initial values of array `a` and array `b` using `printf()` statements.

5. A `for` loop is used to copy the elements from array `b` to array `a` element by element.

6. After copying, the program prints the updated values of array `a` and array `b` using `printf()` statements.

7. The `getch()` function is used to wait for user input before the program terminates.

8. The `main()` function returns an integer value of 0 to indicate successful program execution.

In summary, the code initializes two arrays, `a` and `b`, with values and demonstrates the process of copying elements from `b` to `a`. It then prints the initial and updated values of both arrays. The program waits for user input before exiting.


 Here's the logic of the code:

1. The code declares two integer arrays, `a` and `b`, and initializes them with values.

2. It then proceeds to print the initial values of both arrays using `printf()` statements and a loop that iterates over the elements of the arrays.

3. Next, a loop is used to copy the elements from array `b` to array `a` element by element. This is done by assigning the value of `b[i]` to `a[i]` for each index `i`.

4. After the copying process, the code prints the updated values of array `a` and array `b` using `printf()` statements and the same loop structure as before.

5. Finally, the `getch()` function is used to pause the program and wait for user input before it exits.

In summary, the code demonstrates a simple element-wise copying of values from one array (`b`) to another array (`a`). It provides a visual representation of the initial and updated values of the arrays to showcase the result of the copying process. The `getch()` function is included to ensure that the output is visible to the user before the program terminates.
