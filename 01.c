#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
