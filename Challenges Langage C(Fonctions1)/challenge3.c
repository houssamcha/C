#include <stdio.h>
#include <stdbool.h>
bool isPremier(int n){
    int i,nbDiviseur = 0;
    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
            nbDiviseur++; //bach diviseur ibqa hta yweli 2(so 'n' est premier) awla foq 2(so 'n' n'est premier)
    }
    if(nbDiviseur == 2){
        return true;
    }
    else 
    return false;
}
int main(){
    int a = 9;
    if( isPremier(a) == true)
    printf("isPremier");
    else
    printf("not premier");
}