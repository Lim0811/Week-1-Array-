#include <stdio.h>

int main() 
{
    int n, num, pos = 0, neg = 0;

    printf("How many numbers: ");
    scanf("%d", &n);

    while(n > 0) 
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if(num > 0)
            pos++;
        else if(num < 0)
            neg++;

        n--;
    }

    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}
