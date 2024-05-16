/*Alternate printing two words*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *display(char word1[10],char word2[10]){
    char *wor1=word1;
    char *wor2=word2;
    char *res=(char *)malloc((strlen(word1)+strlen(word2)+1)*sizeof(char));
    char *result=res;
    while(*wor1!='\0' || *wor2!='\0'){
        if(*wor1!='\0' && *wor2!='\0'){
            *result++ = *wor1++;
            *result++ = *wor2++;
        }
        else if(*wor1!='\0'){
            *result++ = *wor1++;
        }
        else{
            *result++ = *wor2++;
        }
    }
    *result='\0';
    return res;
}
int main(){
    char word1[10]="abc";
    char word2[10]="pqrs";
    char *result=display(word1,word2);
    printf("%s\n",result);
    free(result);
    return 0;
}