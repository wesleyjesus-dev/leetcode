#include <stdio.h>

typedef struct
{
    int* items;
    int length;
} Array;

typedef struct
{
    int firstOccurrence;
    int lastOccurrence;
} Result;

Result binary_search(Array array, int value) {
    int start = 0;
    int end = array.length;
    Result result = { -1, -1 };

    while (start <= end)
    {
        int middle = (start + end) / 2;

        if(array.items[middle] == value) { 
            // Encontrou o valor, agora verifica a primeira e última ocorrência
            
            // Encontrar a primeira ocorrência
            int temp = middle;
            while (temp > 0 && array.items[temp - 1] == value) {  // Ajuste: previne acessar fora dos limites
                temp--;
            }
            result.firstOccurrence = temp;

            // Encontrar a última ocorrência
            temp = middle;
            while (temp < array.length - 1 && array.items[temp + 1] == value) {  // Ajuste: previne acessar fora dos limites
                temp++;
            }
            result.lastOccurrence = temp;
            
            return result;
        }
        else if(array.items[middle] < value) {
            start = middle + 1;
        }
        else {
            end = middle - 1;
        }
    }
    return result;
}

int main() {

    int param[] = {1, 2, 3, 4, 4, 4, 4, 4, 5};
    int tamanho = (sizeof(param) / sizeof(param[0])) - 1;
    Array array = {
        param, 
        tamanho};
    Result result = binary_search(array, 4);
    
    printf("primeira ocorrencia %d\n", result.firstOccurrence);
    printf("ultima ocorrencia: %d\n", result.lastOccurrence);
    return 0;
}