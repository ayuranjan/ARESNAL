 #include<stdio.h>
struct book{
      char title[100];
      char genre[100];
      char author[100];
};
 input();
int main()
{
    struct book b1;
    input(b1);





}
 input()
{
    struct book b1;
    printf("ENTER THE NAME OF THE BOOK:");
    gets(b1.title);
    printf("ENTER THE AUTHOR OF BOOK:");
    gets(b1.author);
    printf("ENTER THE GENRE OF BOOK:");
     gets(b1.genre);
    puts(b1.title);
    puts(b1.author);
    puts(b1.genre);

}
