#include <stdio.h>
void bonjour(char prenom[])
{
    printf("bonjour  %s !",prenom);
}
int main(){
    char prenom[20];
    printf("ecrit ton prenom :");
    scanf("%s",&prenom);
    bonjour(prenom);
}