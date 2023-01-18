#include "stdio.h"
struct point{
    int x;
    int y;
};
void valTake(int *x,int *y)
{
    scanf("%d %d",x,y);
}
void print(struct point *ptr)
{
    printf("%d %d\n",ptr->x,ptr->y);
}
int main()
{
    struct point p1,p2;
    valTake(&p1.x,&p1.y);
    valTake(&p2.x,&p2.y);
    print(&p1);
    print(&p2);

}