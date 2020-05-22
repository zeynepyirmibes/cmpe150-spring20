// taken from https://www.programiz.com/c-programming/examples/remove-characters-string
#include <stdio.h>
int main() {
   char line[150];
   fgets(line, 150, stdin);   
   int i,j;
   
   for(i = 0; line[i] != '\0'; ++i){

      // we do not want characters other than letters!
      while(!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')){
         for(j = i; line[j] != '\0'; ++j){
            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
   
   printf("%s\n", line);
   return 0;
}