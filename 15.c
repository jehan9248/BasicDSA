#include "stdio.h"
struct point{
    int x;
    int y;
};
void print(struct point arr[])       //passing array of struct as argument (call by value)
{
    for (int i = 0; i < 2; ++i) {
        printf("%d %d\n",arr[i].x,arr[i].y);
    }
}
int main()
{
    struct point arr[2]={{1,2},{3,4}};
    print(arr);
}