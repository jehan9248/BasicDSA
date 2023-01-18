#include "stdio.h"
#include "stdlib.h"
int main()
{
    int *ptr=(int *) malloc(2* sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not available");
        exit(1);
    }
    printf("Enter two number:");
    for (int i = 0; i < 2; ++i) {
        scanf("%d",(ptr+i));
    }
    ptr=(int *) realloc(ptr,4* sizeof(int ));
    if(ptr==NULL)
    {
        printf("Memory is not available");
        exit(1);
    }
    printf("Enter two more number:");
    for (int i = 2; i < 4; ++i) {
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i < 4; ++i) {
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    ptr=NULL;
    return 0;

}