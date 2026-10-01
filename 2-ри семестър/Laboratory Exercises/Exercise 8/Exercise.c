#include <stdio.h>
#include <locale.h>
#include <Windows.h>


struct Books{
    char title[40];
    char author[30];
    char tema[20];
    int id_book;
};

//За указатели
void Funct(struct Books *book);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, " ");

    //struct //име- идентификация
    //{
        // тип идентиф. елем.
    //};

    
    struct Books book1;
    struct Books book2;
     
    strcpy(book1.title, "Title1");
    strcpy(book1.author, "Author1");
    strcpy(book1.tema, "primer");
    book1.id_book = 1;

    strcpy(book2.title, "Title2");
    strcpy(book2.author, "Author2");
    strcpy(book2.tema, "primer2");
    book2.id_book = 2;

    // printf("Title book-%s\n", book1.title);
    // printf("Book author - %s\n", book1.author);
    // printf("Tema na kniga - %s\n", book1.tema);
    // printf("Id na kniga - %d\n", book1.id_book);
    
    // Funct(book1);
    // Funct(book2);

    struct Books *struct_pointer;
    struct_pointer = &book1;
    struct_pointer -> title;
    struct_pointer -> author;
    struct_pointer -> tema;
    struct_pointer -> id_book;

    Funct(struct_pointer);

}

// void Funct(struct Books book){
//     printf("Title book-%s\n", book.title);
//     printf("Book author - %s\n", book.author);
//     printf("Tema na kniga - %s\n", book.tema);
//     printf("Id na kniga - %d\n", book.id_book);
// }

//За указатели
void Funct(struct Books *book){
    printf("Title book-%s\n", book-> title);
    printf("Book author - %s\n", book-> author);
    printf("Tema na kniga - %s\n", book-> tema);
    printf("Id na kniga - %d\n", book-> id_book);
}
