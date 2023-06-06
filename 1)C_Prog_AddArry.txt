#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, sum = 0;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}






/*1. The code starts by including the necessary header file `stdio.h`, which provides input/output functionality.

2. The `#define` directive is used to define a constant called `MAX_SIZE` with a value of 100. This constant is used to determine the maximum size of the array.

3. The `main()` function serves as the entry point for the program.

4. Inside the `main()` function, the following variables are declared:
   - `arr[MAX_SIZE]`: An array of integers with a maximum size of `MAX_SIZE`.
   - `n`, `i`, `sum`: Integer variables used for input, iteration, and storing the sum of array elements.

5. The program prompts the user to enter the number of elements (`n`) using `printf()` and accepts the input using `scanf()`.

6. After that, the program prompts the user to enter the elements of the array one by one using another `printf()` statement inside a `for` loop. The loop iterates `n` times, and for each iteration, it accepts an element from the user using `scanf()` and stores it in the `arr[i]` location. Additionally, it adds the entered element to the `sum` variable.

7. Once the loop finishes, the program prints the sum of the array elements using `printf()`.

8. Finally, the `return 0;` statement indicates the successful execution of the program.
*/
