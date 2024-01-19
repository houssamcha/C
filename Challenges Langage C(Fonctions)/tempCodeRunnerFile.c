#include <stdio.h>
int max_2(int a,int b){
    if (a > b)
    {
        return a;
    }
    else
    return b;
}
int max_4(int a,int b,int c,int d){
    int max1 = max_2(a,b);
    int max2 = max_2(c,d);
    int final = max_2(max1,max2);
    return final;
}
int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    printf("the max is  : %d",max_4(a,b,c,d));
}