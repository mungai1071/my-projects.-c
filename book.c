// book
#include <stdio.h>
#include <string.h> //strcpy()
struct book{
  char title[30];
   char author[30];
   int Publication_year;
  char ISBN[30];
   float Price;
   
}book; 

int main() {
    // struct book book
   printf("Enter Book title: ");
  strcpy(book.title, "C programming");
  strcpy(book.author, "John Mungai");
  book.Publication_year= 8/9/2024;
  strcpy(book.ISBN, "56rg45hk");
  book.Price= 900.45;
   scanf("%s", book.title);
    printf("Enter Author name: ");
    scanf("%s \n", book.author);
    printf("Enter book Publication year: ");
  // strcpy(book.Publication_year= 8/9/2024;
    scanf("%d \n", book.Publication_year);
    printf("Enter ISBN: ");
    scanf("%s \n", book.ISBN);
    printf("Enter price: ");
  //  book.Price=900;
    scanf("%f \n", book.Price);
    /*
    printf("Title: %s \n",book.title);
    printf("Author: %s \n", book.author);
    printf("Publication_year: %d \n", book.Publication_year);
    printf("ISBN: %s \n", book.ISBN);
    printf("Price: %f \n", book.Price);
*/
    return 0;
}