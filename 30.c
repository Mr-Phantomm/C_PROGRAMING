#include <stdio.h>

int main() {
    int a, b, c, d, e, f = 0, q, g;
    printf("Enter the number of elements you want to put in the array: ");
    scanf("%d", &a);

    int arr[a], rev[a], updtd[a];

    while (1) {
        printf("\nPress 1 to make an array\n");
        printf("Press 2 to display the array\n");
        printf("Press 3 to reverse the array\n");
        printf("Press 4 to add elements to the array\n");
        printf("Press 5 to search for an element in the array\n");
        printf("Press 6 to delete an element\n");
        printf("Press any other number to exit\n");
        scanf("%d", &c);

        if (c == 1) {
            for (int i = 0; i < a; i++) {
                printf("Enter element %d: ", i + 1);
                scanf("%d", &b);
                arr[i] = b;
            }
        } else if (c == 2) {
            for (int i = 0; i < a; i++) {
                printf("%d ", arr[i]);
            }
        } else if (c == 3) {
            for (int i = 0; i < a; i++) {
                rev[i] = arr[a - i - 1];
            }
            for (int i = 0; i < a; i++) {
                printf("%d ", rev[i]);
            }
        } else if (c == 4) {
            printf("How many elements do you want to add? ");
            scanf("%d", &d);
            for (int j = 1; j <= d; j++) {
                scanf("%d", &e);
                arr[a + j - 1] = e;
                f = a + j;
            }
        } else if (c == 5) {
            printf("Enter the number you want to search: ");
            scanf("%d", &q);
            for (int l = 0; l < f; l++) {
                if (arr[l] == q) {
                    printf("The number %d is at position %d\n", q, l + 1);
                }
            }
        } else if (c == 6) {
            printf("Enter the number you want to delete: ");
            scanf("%d", &g);
            for (int k = 0; k < a; k++) {
                if (arr[k] == g) {
                    updtd[k] = arr[k];
                } else {
                    continue;
                }
            }
        } else {
            break;
        }
    }

    return 0;
}
