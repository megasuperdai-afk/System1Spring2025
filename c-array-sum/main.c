#include <stdio.h>

int sum_array(const int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main(void) {
    int nums[] = {1, 2, 3, 4, 5};
    int n = (int)(sizeof(nums) / sizeof(nums[0]));

    printf("Sum = %d\n", sum_array(nums, n));
    return 0;
}
