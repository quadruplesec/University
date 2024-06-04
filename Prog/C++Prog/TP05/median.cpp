#include <algorithm>

int median(const int a[], int n) {
    int *tmp = new int[n];
    int med;

    for (int i = 0; i < n; i++) {
        tmp[i] = a[i];
    }

    std::sort(tmp, tmp+n);

    if (n % 2 == 0) {
        med = (tmp[n / 2 - 1] + tmp[n / 2]) / 2;
    }
    else {
        med = tmp[n / 2];
    }

    delete[] tmp;
    return med;
}