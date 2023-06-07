#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, temp;
    int num_des[] = {10, 2, 5, 1, 6};
    
    for (i = 0; i <= 4; i++) { // point to LHS number
        for (j = i + 1; j <= 4; j++) { // point to RHS number
            if (num_des[i] < num_des[j]) { // if LHS < RHS, change the position
                temp = num_des[i];
                num_des[i] = num_des[j];
                num_des[j] = temp;
            }
        }
    }
    
    printf("\n\tDescending Order:\n");
    printf("\n\tnum_des=");
    for (i = 0; i <= 4; i++) {
        printf("%d, ", num_des[i]);
    }
    
    return 0;
}



/*

Explaination:-


Let's go through the explanation of the provided code step by step:

1. Include necessary headers:
```c
#include <stdio.h>
#include <stdlib.h>
```
These directives include the necessary header files for input/output operations (`stdio.h`) and standard library functions (`stdlib.h`).

2. Define the `main` function:
```c
int main(void) {
    // Code goes here
    return 0;
}
```
This is the entry point of the program. The `main` function returns an integer (`int`) and takes no command-line arguments (`void`).

3. Declare variables:
```c
int i, j, temp;
int num_des[] = {10, 2, 5, 1, 6};
```
Declare variables `i` and `j` for loop iterations, `temp` for temporary storage during swapping, and `num_des` as an array of integers to store the numbers to be sorted in descending order.

4. Perform the sorting:
```c
for (i = 0; i <= 4; i++) {
    for (j = i + 1; j <= 4; j++) {
        if (num_des[i] < num_des[j]) {
            temp = num_des[i];
            num_des[i] = num_des[j];
            num_des[j] = temp;
        }
    }
}
```
These nested loops implement the bubble sort algorithm to sort the `num_des` array in descending order. The outer loop iterates over each element of the array, and the inner loop compares the current element with the subsequent elements. If the current element is less than the subsequent element, they are swapped.

5. Print the sorted array:
```c
printf("\n\tDescending Order:\n");
printf("\n\tnum_des=");
for (i = 0; i <= 4; i++) {
    printf("%d, ", num_des[i]);
}
```
This code segment prints the heading "Descending Order" and then displays the sorted array elements using a loop. The elements are printed with a comma separator.

6. Return from `main` function:
```c
return 0;
```
The `return 0;` statement indicates the successful execution of the program and returns the value `0` to the operating system.

Overall, the code implements the bubble sort algorithm to sort the `num_des` array in descending order and then prints the sorted array.


Logic:-
Here's an explanation of the logic behind the corrected code:

1. Declare variables:
   - `int i, j, temp;`: These variables are used for loop iterations and temporary storage during swapping.
   - `int num_des[] = {10, 2, 5, 1, 6};`: This declares an integer array named `num_des` and initializes it with the values 10, 2, 5, 1, and 6.

2. Perform the sorting using the Bubble Sort algorithm:
   - The outer loop `for (i = 0; i <= 4; i++)` iterates over each element of the array.
   - The inner loop `for (j = i + 1; j <= 4; j++)` compares the current element with the subsequent elements.
   - Inside the inner loop, an `if` statement `if (num_des[i] < num_des[j])` checks if the current element is less than the subsequent element.
   - If the condition is true, the elements are swapped using a temporary variable `temp`:
     ```
     temp = num_des[i];
     num_des[i] = num_des[j];
     num_des[j] = temp;
     ```

3. Print the sorted array:
   - `printf("\n\tDescending Order:\n");`: This line prints the heading "Descending Order" as a message.
   - `printf("\n\tnum_des=");`: This line prints the label "num_des=" as a message.
   - The subsequent `for` loop `for (i = 0; i <= 4; i++)` iterates over each element of the sorted array.
   - Inside the loop, `printf("%d, ", num_des[i])` prints each element followed by a comma and a space.

The logic behind the Bubble Sort algorithm is as follows:
- The algorithm compares adjacent elements and swaps them if they are in the wrong order.
- In each iteration of the outer loop, the largest element "bubbles up" to its correct position at the end of the array.
- By repeating this process for each element, the array becomes sorted in ascending order.

In this code, the sorting is performed in descending order. The algorithm checks if the current element is less than the subsequent element, and if so, swaps them. This process is repeated until all elements are in the correct order. Finally, the sorted array is printed on the console.
