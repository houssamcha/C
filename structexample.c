#include <stdio.h>
#include <string.h> //this library is important to make strcpy works! 
struct person
{
    int age;
    char name[50];
};
int main(){
    struct person p1;
    p1.age = 24;
    strcpy(p1.name,"houssam"); //only very short way to display string of characters !
    printf("my age is %d",p1.age);
    printf(" and my name is %s",p1.name);
}
