//
// Created by htf on 2020/9/23.
//

#include <stdio.h>

struct Book {
    unsigned int id: 16; // 位域
    char title[50];
    char author[50];
};

void printBook(struct Book book);
void printBookByPointer(struct Book *book);

int main() {
    struct Book book = {1, "Le Petit Prince", "ANTOINE DE SAINT-EXUPÉRY"};
    printBook(book);
    printf("\n");
    printBookByPointer(&book);
    return 0;
}

void printBook(struct Book book) {
    printf("id: %d\ntitle: %s\nauthor: %s\n", book.id, book.title, book.author);
}

void printBookByPointer(struct Book *book) {
    printf("id: %d\ntitle: %s\nauthor: %s\n", book -> id, book -> title, book -> author);
}