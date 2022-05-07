//
// Created by yPhysicist on 07.05.2022.
//

#include "peregruzka.h"
double* create(double* mas, int size) {
    mas = new double[size];
    return mas;
}
int* create(int* mas, int size) {
    return new int[size];;
}
void full(double* mas, int size) {
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 200 - 100.45;
    }
}
void full(int* mas, int size) {
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 200 - 100;
    }
}
void print(double* mas, int size) {
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}
void print(int* mas, int size) {
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int* mas, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (mas[j] > mas[j + 1]) {
                int x = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = x;
            }
        }
    }
}

void bubbleSort(double* mas, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (mas[j] > mas[j + 1]) {
                double x = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = x;
            }
        }
    }
}