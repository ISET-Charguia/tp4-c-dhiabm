#include <stdio.h>
#include <stdlib.h>

int main()
{
int t[20],t1[20],t2[20],i,n;
printf("donner la taille de tableau");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    scanf("%d",&t1[i]);
}
printf("donner le deuxieme tab");
for (i=1;i<=n;i++)
{
    scanf("%d",&t2[i]);
}
for(i=1;i<=n;i++){
    t[i]=t1[i];
    t1[i]=t2[i];
    t2[i]=t[i];
}
printf("le tab 1\n");
for(i=1;i<=n;i++){
printf("%d\n",t1[i]);}
printf("le tab 2\n");
for(i=1;i<=n;i++){
printf("%d\n",t2[i]);}
    return 0;
}
