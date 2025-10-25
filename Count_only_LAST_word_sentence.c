#include<stdio.h>
#include<string.h>

int main(){
    char str[101];
    int count=0;
    
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    
    int len=strlen(str);
    
    int i=len-1;
    while(i>=0 && str[i]==' '){ //moving backward to ignore trailing spaces
        i--;
    }
    
    while(i>=0 && str[i]!=' '){
        count++;
        i--;
    }
    
    printf("%d",count);
    return 0;
    
    
}
