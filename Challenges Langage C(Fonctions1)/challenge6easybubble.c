#include <stdio.h>
void bubblesort(int array[],int length){
    int temp;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;   
            }
        }
    }
}
int main(){
    int array[] = {5,1,3,2,4};
    int length = 5;
    bubblesort(array,length);
    for (int i = 0; i < length; i++)
    {
        printf("%d",array[i]);   
    }
}