#include <stdio.h>

struct book
{
      char title[100];
      char genre[100];
      char author[100];
};

struct book book_input()
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
    return b1;
}

void book_print(struct book book){

    printf("Book : %s %s %s\n", book.author, book.genre, book.title);

}

int main(){

// Collection of books => array of book structures
struct book books[10];

int i;

for(i=0;i<3;i++){
    books[i] = book_input();

}

for(i=0;i<3;i++){
    book_print(books[i]);

}



}
