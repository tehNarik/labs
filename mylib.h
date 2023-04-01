//
// Created by aidan on 28.03.2023.
//

#ifndef UNTITLED12_MYLIB_H
#define UNTITLED12_MYLIB_H

#include <string>
#include "book.cpp"
struct Range {
    int start;
    int finish;
};
using namespace std;
book* createArr();
Range setRange();
string defineBook(Range, book*);


#endif //UNTITLED12_MYLIB_H
