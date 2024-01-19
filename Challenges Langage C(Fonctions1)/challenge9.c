#include <stdio.h>
int linear(int array[],int length,int a){
    for (int i = 0; i < length;i++){
        if (array[i] == a)
        {
            return i;
        }
    }
            return -1;
}
int main(){
    int array[] = {2,3,4,1};
    int length = 4;
    int a;
    printf("search here:");
    scanf("%d",&a);
    if (linear(array,length,a) != -1)
    {
    printf("the %d found at %d.",a,linear(array,length,a));
    }
    else
    {
    printf("the value %d not found !",a);
    }
}