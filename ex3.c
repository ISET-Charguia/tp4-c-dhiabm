#include <stdio.h>
#include <stdlib.h>

int main()
{
int tab[20],n,nb,i;
printf("donner un entier");
scanf("%d",&n);
nb=0;
do {
    tab[nb]=n%2;
    nb++;
    n=n/2;
}while(n>0);
for(i=0;i<nb;i++)
{
    printf("%d",tab[i]);
}
    return 0;
}
