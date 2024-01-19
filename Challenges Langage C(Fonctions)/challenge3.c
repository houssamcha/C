#include <stdio.h>
void permuter(int a,int b){
    int tmp;
    tmp = a;
    a   = b;
    b   = tmp;
    printf("a = %d and b = %d",a,b);
}
int main(){
    int a = 2;
    int b = 3;
    permuter(a,b);
}