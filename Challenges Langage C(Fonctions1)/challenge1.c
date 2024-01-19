#include <stdio.h>
int add(int a , int b){
    int somme = a + b;
    return somme;
}
int main(){
    int a = 1;
    int b = 100;
    printf("somme de a et b est : %d",add(a,b));
}