#include <stdio.h>
void bubblesort(int array[],int length){
    int temp,i,j;
    for (i = 0; i < length - 1;i++)
    {
        for ( j = 0; j < length - i - 1 ; j++)
        {
            if (array[j]>array[j+1])
            {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1]= temp ;
            }
        }
    }
}
int main(){
    int length = 5;
    int i;
    int array[] = {9,1,3,2,8};
    bubblesort(array,length);
    for (i = 0; i < length; i++)
    {
            printf("%d",array[i]);
    }
    return 0;
}