#include <stdio.h>
int carre(int nb){
    return nb * nb;
}
void affiche_carre(int T[], int n){
    for(int i=0;i<n;i++){
        printf("T[%d]= %d\n",i,carre(T[i]));
    }    
}
int main(){
    int T[]={2,7,8};
    int n=3;
    affiche_carre(T, n);
}