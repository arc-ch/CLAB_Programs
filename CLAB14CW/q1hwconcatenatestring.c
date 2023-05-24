#include <stdio.h>
int main() {
   char str1[] = "ABC";
   char str2[] = "XYZ";
   char str3[7];
   int i, j;
   for (i = 0; str1[i] != '\0'; i++) {
      str3[i] = str1[i];
   }
   for (j = 0; str2[j] != '\0'; j++) {
      str3[i+j] = str2[j];
   }
   str3[i+j] = '\0'; 
   printf("%s", str3); 
   
   return 0;
}
