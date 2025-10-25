#include<stdio.h>
#include<string.h>

int main(){
    int freq[26]={0};
    char str[101];
    
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0'; //removing new line character
    
    char len=strlen(str);
    
    //increasing the value from 0 to the no of times 
    
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]-'a']++;
    }
    
    //finding the index whos freq[i] is zero and the smallest
    
    for(int i=0;i<len;i++){
        
        /* 0 means that the alphabet is not
        present in sring but 1 means that
        alphabet is present and occured only once*/
        
        if(freq[str[i]-'a']==1){ 
        printf("%d",i); 
        return 0; //if any index occured then end code there only.
        
        }
        
    }
    printf("-1\n");
    return 0;
}
