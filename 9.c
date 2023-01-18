#include "stdio.h"
struct student{
    char name[100];
    int age;
    int rollNo;
    float marks;
};
void print(char name[],int age,int roll,float marks)  //passing struct member as argument (call by value)
{
    printf("%s %d %d %.2f",name,age,roll,marks);
}
int main()
{
    struct student s1={"Jehan",23,186,91.3};
    print(s1.name,s1.age,s1.rollNo,s1.marks);

}