#include<stdio.h>
int main(){
    printf("Enter a string\n");
    char str[100] = "";
    scanf("%[^\n]c",str);
    int spaces = 0;
    int rotation;
    printf("Enter rotation\n");
    scanf("%d",&rotation);
    int i = 0;
    while(spaces != rotation){
        if(str[i] == ' '){
            spaces++;
        }
        i++;
    }
    for(int j = i; str[j] != '\0'; j++){
        printf("%c",str[j]);
    }
    printf(" ");
    for(int j = 0 ; j<i ; j++){
        printf("%c",str[j]);
    }
}

// #include<stdio.h>
// int main()
// {
//     char str1[100],str2[100];
//     int n,num;
//     printf("Enter a string:");
//     scanf(" %[^\n]s",str1);
//     printf("Input number of rotation:");
//     scanf("%d",&num);
//     int j=0,word=1;
//     while(str1[j]!='\0')
//     {
//         if(str1[j]==32)
//         {
//             word++;
//         }
//         j++;
//     }
//     if(num>word)
//     {
//         n=num%word;
//     }
//     else
//     {
//         n=num;
//     }
//     //int left_words=word-n;//number of words to be stored
//     //printf("%d\n%d",j,word);
//     int count=0,stop=0;
//     for(int i=0;str1[i]!='\0';i++ )
//     {
//         if(0<n)
//         {
//             str2[stop]=str1[i];
//             //printf("%c",str1[i]);
//             if(str1[i]==32)
//             {
//                 n--;
//             }
//             stop++;
//         }
//         else
//         {
//             printf("%c",str1[i]);
//             count++;
//         }
//     }
//     str2[stop]='\0';
//     //printf("\nstr2=%s",str2);
//     //printf("%d",count);
//     int m=count;
//     for(int i=0;str2[i]!='\0';i++)
//     {
//         if(i==0)
//         {
//             printf(" ");
//         }
//         str1[m]=str2[i];
//         printf("%c",str1[i]);
        
//     }
// }
