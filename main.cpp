#include <iostream>
#include "mylib.h"
using namespace std;
int main() {
    book* ptrarray = createArr();
    Range range = setRange();
    string result = defineBook(range, ptrarray);
    cout<<result<<endl;
    delete [] ptrarray;
    return 0;
}