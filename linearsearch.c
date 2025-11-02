#include <stdio.h>

void linearSearch(int arr[], int n, int key) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element not found.\n");
}

int main() {
    int arr[100], n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    linearSearch(arr, n, key);
    return 0;
}
