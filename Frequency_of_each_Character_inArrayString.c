#include<stdio.h>
int main(){
  char ch[100];
  int freq[256]={0}; // #1
  int i;
  
  //user input string
    fgets(ch,sizeof(ch),stdin);
  printf("Character occurrences:\n");

  for(int i=0;ch[i]!='\0';i++){
    freq[(unsigned char)ch[i]]++; //#2
  }
  
  //now printing each character corresponding to its 
  //frequency if its frequency is greater than 0
  
  for(int i=0;i<256;i++){
    if(freq[i]!=0){         //#3
    printf("%c: %d\n",i,freq[i]);
    }
  }
  return 0;
  
}
