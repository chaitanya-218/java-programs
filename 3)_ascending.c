#include <stdio.h>
#include <stdlib.h>
#include <pic18f4550.h>

void main(void) {
    int i, j, temp;
    int num_asc[] = {10, 2, 5, 1, 6};
    
    for (i = 0; i <= 4; i++) { // point to LHS number
        for (j = i + 1; j <= 4; j++) { // point to RHS number
            if (num_asc[i] > num_asc[j]) { // if LHS > RHS, change the position
                temp = num_asc[i];
                num_asc[i] = num_asc[j];
                num_asc[j] = temp;
            }
        }
    }
    
    // Rest of the code goes here...
}





/*

The given code uses a simple sorting algorithm called bubble sort to arrange the elements in the `num_asc` array in ascending order. Here's the logic of the code:

1. Declare variables `i`, `j`, and `temp` to be used in the loops and for temporary storage during swapping.
2. Initialize an integer array `num_asc` with the initial values {10, 2, 5, 1, 6}.
3. Use a nested `for` loop structure to compare adjacent elements and swap them if necessary.
   - The outer loop (`i`) iterates from 0 to 4, representing the left-hand side (LHS) element to be compared.
   - The inner loop (`j`) iterates from `i+1` to 4, representing the right-hand side (RHS) element to be compared.
4. Within the nested loops, compare `num_asc[i]` with `num_asc[j]`. If `num_asc[i]` is greater than `num_asc[j]`, perform the following steps to swap the elements:
   - Assign the value of `num_asc[i]` to the temporary variable `temp`.
   - Assign the value of `num_asc[j]` to `num_asc[i]`.
   - Assign the value of `temp` to `num_asc[j]`.
   This swapping ensures that the smaller element moves towards the left side of the array.
5. Repeat the comparisons and swapping until the entire array is sorted in ascending order.
6. The code provided represents the sorting logic, and the "Rest of the code goes here..." comment suggests that there might be additional code to follow, but it is not provided.

After the sorting algorithm is executed, the `num_asc` array will contain the values {1, 2, 5, 6, 10}, arranged in ascending order.

Please note that the code you provided includes the `pic18f4550.h` header, which is specific to the PIC18F4550 microcontroller. The additional code that follows the sorting logic would typically involve utilizing the sorted array for further processing or output.


Theory:-

Certainly! The given code implements a sorting algorithm called bubble sort to arrange the elements in the `num_asc` array in ascending order. Here's the theory behind the code:

1. Bubble Sort: Bubble sort is a simple comparison-based sorting algorithm. It repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process is repeated until the entire array is sorted.

2. Initialization: The code begins by declaring variables `i`, `j`, and `temp`. `i` and `j` are loop counters, and `temp` is used for temporary storage during element swapping.

3. Array Initialization: An integer array named `num_asc` is declared and initialized with the initial values {10, 2, 5, 1, 6}.

4. Sorting Algorithm:
   - The outer loop (`i`) iterates from 0 to 4, representing the left-hand side (LHS) element to be compared.
   - The inner loop (`j`) iterates from `i+1` to 4, representing the right-hand side (RHS) element to be compared.
   - Within the nested loops, the code compares `num_asc[i]` with `num_asc[j]`. If `num_asc[i]` is greater than `num_asc[j]`, it means the elements are in the wrong order.
   - In such cases, the code performs swapping using the temporary variable `temp`. The value of `num_asc[i]` is assigned to `temp`, `num_asc[j]` is assigned to `num_asc[i]`, and `temp` is assigned to `num_asc[j]`. This swapping operation ensures that the smaller element moves towards the left side of the array.
   - The swapping operation is performed as many times as needed until the entire array is sorted.

5. Result and Output: After the sorting algorithm completes execution, the array `num_asc` contains the values {1, 2, 5, 6, 10}, arranged in ascending order.

6. Additional Code: The code you provided only includes the sorting logic. The comment "Rest of the code goes here..." suggests that there might be additional code following the sorting algorithm, but it is not provided in the given code snippet.

Bubble sort is a simple and intuitive sorting algorithm, but it is not very efficient for large arrays. It has a time complexity of O(n^2), where n is the number of elements in the array. Other sorting algorithms, such as quicksort or mergesort, offer better performance for larger datasets.


*/
