#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[50],t1[50],t2[50];
int i,j,k,n,nb1,nb2,l;
nb1=0;nb2=0;
printf("donner la taille de tableau");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    scanf("%d",&t[i]);
}
for (j=1;j<=n;j++)
{
    if(t[j]<0){t1[nb1]=t[j];
    nb1++;}
    else if (t[j]>=0){t2[nb2]=t[j];
    nb2++;}
}
printf(" pesitifs \n");
for (k=0;k<nb2;k++){
printf("%d \n",t2[k]);}
printf("negatifs \n ");
for (l=0;l<nb1;l++){
printf("%d \n  ",t1[l]);}

    return 0;
}
