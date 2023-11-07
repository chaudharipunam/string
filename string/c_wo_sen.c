/*
//......count the word in the sentence............
#include <stdio.h>
int main(){
   char str[]="My name is punam. i'm pretty";
   int c=0;
   for(int i=0; str[i]!='\0'; i++){
     if(str[i]==' '){
       c++;
     }
   }
   printf("%d\n",c+1);
   return 0;
}

*/

/*
//......or....count the word in the sentence............
#include <stdio.h>
#include <string.h>
int countWords(const char *sentence) {
    int wordCount = 0;
    int inWord = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            inWord = 0;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }
    }
    return wordCount;
}
int main() {
    const char *sentence = "This is a sample sentence.";
    int wordCount = countWords(sentence);
    printf("Number of words: %d\n", wordCount);
    return 0;
}
*/

 /*
 //.......uppercase to lowercase........
#include <stdio.h>
#include <ctype.h>
int main(){
   char str[]="Hello WORLD";
   for(int i=0; str[i]!='\0'; i++){
     if(isupper(str[i])){
        str[i]=tolower(str[i]);
     }
   }
   printf("%s\n",str);
   return 0;
}
/*

/*
//.......lowercase to uppercase........
#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[] = "suraj Madhham";
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]); 
        }
    }
    printf("%s\n", str);
    return 0;
}
*/
