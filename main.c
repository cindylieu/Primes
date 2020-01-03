#include <stdio.h>

int main() {

    int n, num = 3, count, c;

    printf("Please enter a positive number N\n"
           "and I will list the first N prime numbers: ");
    scanf("%d", &n);

    if (n >= 1){
        printf("2\n");
    }

    for(count = 2; count <= n; num++)
    {
        for(c = 2; c < num; c++)
        {
            if(num%c == 0)
                break;
        }
        if(c == num)
        {
            printf("%d\n", num);
            count++;
        }
    }

}