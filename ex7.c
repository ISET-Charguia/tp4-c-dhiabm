#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t[20][20];
   int l,c,s,moy,i,j;
   printf("donner nbre de lignes");
   scanf("%d",&l);
   printf("donner nbre de colones");
   scanf("%d",&c);

   for(i=1;i<=l;i++){
      for(j=1;j<=c;j++){
    printf("donner case : %d,%d \n",i,j);
    scanf("%d",&t[i][j]);}}
   s=0;
   for(i=1;i<=l;i++){
      for(j=1;j<=c;j++){
       s=s+t[i][j];
      }}
        moy=s/(l*c);
   printf("le somme est : %d \n"
          "la moyenne : %d",s,moy);
    return 0;
}
