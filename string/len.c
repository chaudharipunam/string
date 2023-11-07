/*
//length  of string........
#include <stdio.h>
int main(){
     char str[]="Hello World!";
     int i=0,len=0;
     while(str[i]!='\0'){
       len++;
       i++;
     }
     printf("length of string:  %d\n",len);
     return 0;
}

*/

/*
//reverse the string...........
#include <stdio.h>
int main(){
  char str[]="Punam";
  int i=0,s=0;
  while(str[i]!='\0'){
    s++;
    i++;
  }
  for(int i=0,j=s-1; i<=j; j--,i++){
     int t=str[i];
     str[i]=str[j];
     str[j]=t;
  }
  printf("%s\n",str);
  return 0;
}



#include <stdio.h>
int main(){
   char str[]="radar";
   int i=0,s=0;
   while(str[i]!='\0'){
     s++;
     i++;
   }
   while(s>0){
     d=s%10;
     su=su*10+d;
     s/=10;
   }
    
}

*/

/*
(palindrome string).........by using (stdbool.h)..library....
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    char str[] = "madam";
    int length = strlen(str);
    bool Palindrome = true;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            Palindrome = false;
            break;
        }
    }
    if (Palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}





//.........or.....(palindrome string).........
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="radar";
    int length=strlen(str);
    int palindrome=1;
    for(int i=0; i<length/2; i++){
      if(str[i]!=str[length-i-1]){
         palindrome =0;
         break;
      }
    }
    if(palindrome){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}

*/


