#ifndef AUTHOR_H
#define AUTHOR_H
 
#include<iostream>
using namespace std;
class Author{
    private:
    string name;
    string surname;
 
    public:
    Author(string name, string surname);
    Author();
    void print();
    string toString();
    string getName();
    string getSurname();
   
};
#endif
 