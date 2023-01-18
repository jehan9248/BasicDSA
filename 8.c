#include "stdlib.h"
#include "stdio.h"
int* input()
{
    int *ptr=(int *) malloc(5* sizeof(int));
    printf("Insert 5 number:");
    for (int i = 0; i < 5; ++i) {
        scanf("%d",ptr+i);
    }
    return ptr;

}
int main()
{
    int sum=0;
    int *ptr=input();
    for (int i = 0; i < 5; ++i) {
        sum+=*(ptr+i);
    }
    printf("Sum of the number: %d",sum);
    free(ptr);
    ptr=NULL;
    return 0;
}
