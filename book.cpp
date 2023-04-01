#include <string>
using namespace std;

class book{
private:
    string name;
    string title;
    int publicationYear;
    int pages;
public:
    book(string a, string b, int c, int d){
        name = a;
        title = b;
        publicationYear = c;
        pages = d;
    }
    int getPages(){
        return pages;
    }
    int getYear(){
        return publicationYear;
    }
    string toString(){
        return "The book "+title+" was published in " + to_string(publicationYear)+" and had "+ to_string(pages)+" pages.\n           "+name;
    }
};