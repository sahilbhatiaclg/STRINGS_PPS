#include <stdio.h>
int main(){
  char ch[100],next[100];
  int i,j=0;
  fgets(ch,sizeof(ch),stdin);
  for(i=0;ch[i]!='\0';i++){
    if((ch[i]>='a'&& ch[i]<='z')|| (ch[i]>='A'&&ch[i]<='Z')){
     next[j]=ch[i];
     j++;
    }
  }
  next[j]='\0';
  printf("Modified String: %s",next);
  return 0;
  
}