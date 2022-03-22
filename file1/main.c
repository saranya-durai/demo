#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter the num");
    scanf("%d", &num);
    switch(num)
    {

    case 1:
        printf("entered num is 1");
        break;

    case 2:
        printf(" entered num is 2");
         break;

    default:
        printf("entered num is invalid");
        break;

    }
}
