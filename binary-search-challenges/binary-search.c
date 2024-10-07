#include <stdio.h>

typedef struct
{
    int* items;
    int length;
} Array;

int binary_search(Array array, int value) {
    int start = 0;
    int end = array.length;
    int limit = 0;

    while (start < end)
    {
        int middle = (start + end) / 2;

        if(array.items[middle] == value) {
            return middle;
        }
        else if(array.items[middle] < value) {
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
    int result = binary_search(array, 2);
    
    printf("resultado da busca eh: %d\n", result);
    return 0;
}