#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    printf("Enter the word:");
    gets(word);
    int len = strlen(word);
     int i ,count=0;
    for(i=0;i<len/2;i++)
    {
        if(word[i] != word[len -1-i])  //since string indexing start from zero so, string indexing is from zero to (string length -1)
          {
              count++;
              break;
          }
    }
    if (count == 0)
        printf("THE STRING IS A PALLINDROME ");
    else
        printf("STRING IS NOT A PALLINDROME ");

}
