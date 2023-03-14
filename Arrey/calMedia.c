#include<stdio.h>

int main(){

  float n1[4], med=0;
  int i;
  for(i=0; i<4; i++){
    printf("%d --> ",i+1);
    scanf("%f",&n1[i]);
  }
  for(i=0; i<4; i++)
    med+=n1[i];

   med/=4;

  for(i=0; i<4; i++){
   if(n1[i]>=med)
    printf("--> %0.2f\n",n1[i]);
  }
  printf("A media total foi = %0.2f\n",med);
  return 0;
}
