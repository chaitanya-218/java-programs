#include <stdio.h>
#include <stdlib.h>

void main() {
    int temp, i;
    int a[] = {10, 20, 30, 40, 50, 60};
    int b[] = {11, 22, 33, 44, 55, 66};
    
    for (i = 0; i <= 5; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("\n\tFilter Transfer:\n");
    printf("\n\ta=");
    for (i = 0; i <= 5; i++) {
        printf("%d, ", a[i]);
    }

    printf("\n\tb=");
    for (i = 0; i <= 5; i++) {
        printf("%d, ", b[i]);
    }

    getch();
}


/*



The logic of the code can be explained as follows:

1. Two integer arrays, `a` and `b`, are declared and initialized with values.

2. A loop is used to iterate over the elements of the arrays. The loop variable `i` starts from 0 and goes up to 5 because the arrays have 6 elements (indices 0 to 5).

3. Inside the loop, the current values of `a[i]` and `b[i]` are swapped using a temporary variable `temp`. This swapping operation ensures that the values in array `a` are exchanged with the corresponding values in array `b`.

4. After the swapping process, the code proceeds to print the updated values of arrays `a` and `b`. The `printf()` statements and loops are used to display the values of the arrays in a formatted manner.

5. Finally, the `getch()` function is used to pause the program and wait for user input before it exits. This allows you to see the output on the console before the program terminates.

In summary, this code performs a pairwise swap between corresponding elements in two arrays `a` and `b`. It demonstrates the concept of swapping values using a temporary variable and provides a visual representation of the swapped arrays on the console.


 Here's the theory behind the code:

1. The code starts by including the necessary header files `stdio.h` and `stdlib.h` which provide functions for input/output operations and memory management, respectively.

2. The `main()` function is the entry point of the program and serves as the starting point of execution.

3. Two integer arrays `a` and `b` are declared and initialized with values. These arrays store the elements that will be swapped.

4. A loop is used to iterate over the elements of the arrays. The loop variable `i` starts from 0 and goes up to 5 because the arrays have 6 elements.

5. Inside the loop, the values of `a[i]` and `b[i]` are swapped using a temporary variable `temp`. This swapping operation ensures that the values in array `a` are exchanged with the corresponding values in array `b`.

6. After the swapping process is completed, the code proceeds to print the updated values of arrays `a` and `b`. The `printf()` statements and loops are used to display the values in a formatted manner.

7. The `getch()` function is used to pause the program and wait for user input before it exits. This allows you to see the output on the console before the program terminates.

In summary, the code performs a pairwise swap between corresponding elements in two arrays `a` and `b`. It demonstrates the concept of swapping values using a temporary variable and provides a visual representation of the swapped arrays on the console.


*/
