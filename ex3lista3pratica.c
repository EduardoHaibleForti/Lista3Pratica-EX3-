#include <stdio.h>
#include <stdlib.h>

void gnomeSort(int arr[], int n) {
    int index = 0;
    int temp;

    while (index < n) {

        if (index == 0 || arr[index] >= arr[index - 1]) {
            index++;
        } else {

            temp = arr[index];
            arr[index] = arr[index - 1];
            arr[index - 1] = temp;
            index--;
        }
    }
}

int main() {
    int n;


    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    gnomeSort(arr, n);


    printf("Array após a ordenação:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

