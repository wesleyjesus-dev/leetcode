#include <stdio.h>

typedef struct
{
    int* array;
    int length;
} Array;

int busca_binaria(Array array, int valor) {
    int start = 0;
    int end = array.length;
    int limit = 0;

    while (start < end)
    {
        int middle = (start + end) / 2;

        if(array.array[middle] == valor) {
            return middle;
        }
        else if(array.array[middle] < valor) {
            start = middle + 1;
        }
        else {
            end = middle - 1;
        }
    }
    return -1;
}

int main() {

    int param[] = {1, 2, 3, 4, 5};
    Array array = {
        param, 
        (sizeof(array) / sizeof(param[0])) - 1};
    int result = busca_binaria(array, 2);
    
    printf("resultado da busca eh: %d\n", result);
    return 0;
}