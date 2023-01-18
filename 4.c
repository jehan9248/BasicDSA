#include "stdio.h"
#include "stdlib.h"
int main()
{
    int var=10;
    int *ptr;
    ptr=&var;
    printf("%d ",*ptr);

    int *ptr2=(int *)malloc(sizeof(int));
    *ptr2=20;
    printf("%d",*ptr2);
    free(ptr2);
    return 0;
}
