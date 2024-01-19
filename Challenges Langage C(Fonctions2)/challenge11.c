#include <stdio.h>
void Permuter(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 2;
    int b = 3;
    Permuter(&a,&b);
    printf("a = %d et b = %d",a,b);
}