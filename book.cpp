#include "book.h"
#include vector
Book::Book():title(""), author(Author()),publicationYear(0){}
Book::Book (string bookTitle, Author bookAuthor, int year, vector <Chapter> &bookChapters);
void Book::addChapter(const Chaper &chapter){
    chapters.push_back(chapter)
}
void Book::displayInfo(){

}
string Book::getTitle(){
    return title;
}
Author Book::getAuthor(){
    return author;
}
int Book::getPublicationYear(){
return publicationYear;
}
vector<Chapter> Book::getChapters(){
    return chapters;
}