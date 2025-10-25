#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isvowel(char ch){
  ch=tolower(ch);
  return(ch=='a'||ch=='u'||ch=='e'||ch=='o'||ch=='i');
}
int main(){
char str[101];
int left=0,right;//left is strating from 0 index..USING TWO-POINTER FORMULA
fgets(str,sizeof(str),stdin);

str[strcspn(str,"\n")]='\0'; //removal of newline character 

right=strlen(str)-1;//RIGHT is starting form end point

while(left<right){
  //move left pointer to next isvowel
  if(!isvowel(str[left])){
    left++;
    continue;
  }
  if(!isvowel(str[right])){
      right--;
      continue;
  }
  
  char temp = str[left];
  str[left]=str[right];
  str[right]=temp;
  
  left++;
  right--;
  
}
printf("%s",str);
return 0;

  
}
