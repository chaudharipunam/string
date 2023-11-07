/*
//......remove space from the string............
#include <stdio.h>
int main(){
   char str[]="Punam is Great girl!";
   for(int i=0; str[i]!='\0'; i++){
     if(str[i]!=' '){
       printf("%c",str[i]);
     }
   }
   printf("\n");
   return 0;
}
*/

/*
//count occcurence of char of string...........
#include <stdio.h>
int main(){
    char str[]="Mina Di is best";
    char i;
    int c;
    for(int i=0; str[i]!='\0'; i++){
       if(str[i]=='i'){
         c++;
       }
    }
    printf("count is: %d",c);
    return 0;
}




#include <stdio.h>
#include <string.h>
int main(){
    char s1[]="listen";
    char s2[]="silent";
    for(int i=0; s1[i]!='\0'; i++){
      for(int j=0; s2[j]!='\0'; j++){
        if(s1[i]==s2[j]){
          int found=1;
        }
      }
      if(found){
        printf("anagrams\n");
      }
      else{
        printf("not anagrams\n");
      }
    }
    return 0;
}
/*

#include <stdio.h>
#include <string.h> 
int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    int yes = 1;
    if (strlen(s1) != strlen(s2)) {
        yes = 0;
    } else {
        int char_count[26] = {0}; 
        for (int i = 0; s1[i] != '\0'; i++) {
            char_count[s1[i] - 'a']++;
        }
        for (int i = 0; s2[i] != '\0'; i++) {
            char_count[s2[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (char_count[i] != 0) {
                yes = 0;
                break;
            }
        }
    }
    if (yes) {
        printf("Anagrams\n");
    } else {
        printf("Not Anagrams\n");
    }
    return 0;
}
*/


/*
// .............remove input char ('l')..& print string...
#include <stdio.h>
int main(){
    char str[]="Hello World!";
    char l;
    for(int i=0; str[i]!='\0'; i++){
       if(str[i]!='l'){
         printf("%c",str[i]);
       }
    }
    return 0;
}

*/


#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    int yes = 0;

    for (int i = 0; s1[i] != '\0'; i++) {
        int found = 0;  // Initialize 'found' inside the loop for each character in s1

        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                found = 1;
                break;  // Exit the inner loop as soon as a matching character is found
            }
        }

        if (!found) {
            yes = 0;  // If a character in s1 is not found in s2, they are not anagrams
            break;    // Exit the outer loop as no need to continue checking
        } else {
            yes = 1;  // Set 'yes' to 1 if character in s1 is found in s2
        }
    }

    if (yes) {
        printf("anagrams\n");
    } else {
        printf("not anagrams\n");
    }

    return 0;
}















