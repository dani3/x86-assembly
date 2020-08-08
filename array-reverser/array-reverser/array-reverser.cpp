#include <iostream>
#include <stdlib.h>

extern "C" void reverse(int* dst, const int* src, int n);

int main() {
    const int n = 10;

    int dst[n];
    int src[n];

    for (int i = 0; i < n; i++) {
        src[i] = i;
    }

    reverse(dst, src, n);

    for (int i = 0; i < n; i++) {
        printf("i:      %5d      dst: %5d, src: %5d\n", i, dst[i], src[i]);
    }

    return 0;
}
