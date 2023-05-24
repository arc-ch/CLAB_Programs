#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int n,num;
    printf("Enter a string:");
    scanf(" %[^\n]s",str1);
    printf("Input number of rotation:");
    scanf("%d",&num);
    int j=0,word=1;
    while(str1[j]!='\0')
    {
        if(str1[j]==32)
        {
            word++;
        }
        j++;
    }
    if(num>word)
    {
        n=num%word;
    }
    else
    {
        n=num;
    }
    //int left_words=word-n;//number of words to be stored
    //printf("%d\n%d",j,word);
    int count=0,stop=0;
    for(int i=0;str1[i]!='\0';i++ )
    {
        if(0<n)
        {
            str2[stop]=str1[i];
            //printf("%c",str1[i]);
            if(str1[i]==32)
            {
                n--;
            }
            stop++;
        }
        else
        {
            printf("%c",str1[i]);
            count++;
        }
    }
    str2[stop]='\0';
    //printf("\nstr2=%s",str2);
    //printf("%d",count);
    int m=count;
    for(int i=0;str2[i]!='\0';i++)
    {
        if(i==0)
        {
            printf(" ");
        }
        str1[m]=str2[i];
        printf("%c",str1[i]);
        
    }
}

// #include <stdio.h>
// #include <string.h>

// #define MAX_STRING_LENGTH 100
// #define MAX_WORDS 10

// int main() {
//     char input_string[MAX_STRING_LENGTH];
//     char words[MAX_WORDS][MAX_STRING_LENGTH];
//     int word_count = 0;
//     int rotation;
//     int i, j;

//     printf("Enter a string: ");
//     fgets(input_string, MAX_STRING_LENGTH, stdin);
//     input_string[strcspn(input_string, "\n")] = 0; // remove the newline character

//     printf("Enter the rotation value: ");
//     scanf("%d", &rotation);

//     // parse the input string and store each word in the words array
//     char* word = strtok(input_string, " ");
//     while (word != NULL && word_count < MAX_WORDS) {
//         strcpy(words[word_count], word);
//         word_count++;
//         word = strtok(NULL, " ");
//     }

//     // rotate the words in the array
//     if (rotation > 0 && word_count > 1) {
//         rotation = rotation % word_count;
//         for (i = 0; i < rotation; i++) {
//             // save the first word in a temporary variable
//             char temp[MAX_STRING_LENGTH];
//             strcpy(temp, words[0]);

//             // shift all the other words by one position
//             for (j = 1; j < word_count; j++) {
//                 strcpy(words[j-1], words[j]);
//             }

//             // copy the first word to the last position
//             strcpy(words[word_count-1], temp);
//         }
//     }

//     // print the rotated words
//     printf("Rotated string: ");
//     for (i = 0; i < word_count; i++) {
//         printf("%s ", words[i]);
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// #define MAX_STRING_LENGTH 100
// #define MAX_WORDS 10

// int main() {
//     char input_string[MAX_STRING_LENGTH];
//     char words[MAX_WORDS][MAX_STRING_LENGTH];
//     int word_count = 0;
//     int rotation;
//     int i, j, k;

//     printf("Enter a string: ");
//     gets(input_string);

//     printf("Enter the rotation value: ");
//     scanf("%d", &rotation);

//     // parse the input string and store each word in the words array
//     for (i = 0, j = 0; input_string[i] != '\0'; i++) {
//         if (input_string[i] == ' ' || input_string[i] == '\t' || input_string[i] == '\n') {
//             words[word_count][j] = '\0';
//             word_count++;
//             j = 0;
//         }
//         else {
//             words[word_count][j] = input_string[i];
//             j++;
//         }
//     }
//     words[word_count][j] = '\0';
//     word_count++;

//     // rotate the words in the array
//     if (rotation > 0 && word_count > 1) {
//         rotation = rotation % word_count;
//         for (i = 0; i < rotation; i++) {
//             // save the first word in a temporary variable
//             char temp[MAX_STRING_LENGTH];
//             strcpy(temp, words[0]);

//             // shift all the other words by one position
//             for (j = 1; j < word_count; j++) {
//                 strcpy(words[j-1], words[j]);
//             }

//             // copy the first word to the last position
//             strcpy(words[word_count-1], temp);
//         }
//     }

//     // print the rotated words
//     printf("Rotated string: ");
//     for (k = 0; k < word_count; k++) {
//         printf("%s ", words[k]);
//     }
//     printf("\n");

//     return 0;
// }

