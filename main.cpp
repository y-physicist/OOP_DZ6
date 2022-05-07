#include "peregruzka.h"
int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int n;
    cin >> n;
    double* arr = new double[n];
    arr = create(arr, n);
    int* arr1 = new int[n];
    full(arr1, n);
    print(arr1, n);
    full(arr, n);
    print(arr, n);
    bubbleSort(arr1, n);
    bubbleSort(arr, n);
    print(arr1, n);
    print(arr, n);
    return 0;
}
