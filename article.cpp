#include <iostream>
#include "article.h"
using namespace std;
Article();
    Article::Article(string articleTitle,Author articleAuthor,int year, string journalName)
    Article::Article(Article &other);
    void displayInfo();
    string Article::getTitle();
    Author Article::getAuthor();
    int getPublicatinYear();
    string Article::getJournal();