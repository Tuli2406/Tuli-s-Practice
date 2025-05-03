#include <stdio.h>
int compute_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i <= size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    int sum = compute_sum(numbers, 5);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}