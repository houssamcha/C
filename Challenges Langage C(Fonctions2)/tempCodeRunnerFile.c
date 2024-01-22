#include<stdio.h>
void inserer(int taille,int nbi,int pos,int T[]){
    for (int i = taille ; i >= pos; i--){
            T[i] = T[i - 1];
        }
    T[pos - 1] = nbi;
    taille++;
}
int main(){
    int taille,n,nbi,pos;
    printf("inserer la taille du tableau:");
    scanf("%d",&taille);
    int T[taille];
    printf("inserer les nombres :");
    for (int i = 0; i < taille; i++)
    {
        scanf("%d",&T[i]);
    }
    printf("entrer le nombre que tu veux inserer:");
    scanf("%d",&nbi);
    printf("inserer sa position:");
    scanf("%d",&pos);
    inserer(taille,nbi,pos,T);
    for ( int i = 0; i < taille + 1; i++)
    {
        printf("%d \t",T[i]);
    }
    return 0;
}