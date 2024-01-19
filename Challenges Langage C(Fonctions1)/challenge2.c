#include <stdio.h>
void echanger(int *a, int *b){
    int tmp;
    tmp = *a;
    *a   = *b;
    *b   = tmp;
}
int main(){
    int a = 1;
    int b = 2;
    echanger(&a,&b);
    printf("a = %d and b = %d",a,b);
}