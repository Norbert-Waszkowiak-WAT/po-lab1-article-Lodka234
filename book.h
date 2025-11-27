#ifndef BOOK
#define BOOK
 
#include<iostream>
#include <vector>
#include"author.h"
#include"chapter.h"
#include"article.h"
using namespace std;
 
class Book{
    private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter> chapters;
    public:
    Book();
    Book(string bookTitle, Author bookAuthor, int year, const vector<Chapter> &bookChapters);
    void addChapter(const Chapter &chapter);
    void displayInfo ();
    string getTitle();
    Author getAuthor();
    int getPublicationYear();
    vector<Chapter> &getChapters();
};
#endif
 