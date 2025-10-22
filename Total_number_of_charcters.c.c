#include<stdio.h>
int main(){
  char ch[100];
  int sum=0;
  fgets(ch,sizeof(ch),stdin);
  for(int i=0;ch[i]!='\0';i++){
    sum++;
  }
  printf("Total number of characters: %d",sum);
  return 0;
  
}