#include <stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    unsigned total = 0;
    // sizeof() returns `size_t` which is unsigned integer.
    // sizeof(a) --> sizeof(a)/sizeof(a[0])
    int size = sizeof(a)/sizeof(a[0]);
    for (int j = 0; j < size; j++) {
        total += a[j];
    }
    printf("sum of array is %d\n", total);
}