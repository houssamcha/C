#include <stdio.h>
#include <stdbool.h>
bool estImpair(int nb){
    if (nb % 2 != 0)
    {
        return true;
    }
    else
    return false;
}
int main(){
    int a;
    printf("ecrit un nombre ici :");
    scanf("%d",&a);
    printf("%d",estImpair(a));
}