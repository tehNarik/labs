#include "mylib.h"
#include <iostream>
using namespace std;
book* createArr(){
    book obj1("Remark", "Three comrades", 1936, 416);
    book obj2("Glukhovskyi", "Metro", 2005, 616);
    book obj3("Khvylovy", "I(romance)", 1924, 348);
    book obj4("Orwell", "Animal farm", 1945, 120);
    book obj5("Kotlyarevskyi", "Eneyida", 1798, 440);
    book obj6("Bagryanyi", "Tiger Trappers", 1955, 300);
    book obj7("Kulish", "Black council", 1845, 330);
    return new book[7]{obj1, obj2, obj3, obj4, obj5, obj6, obj7};
}
Range setRange(){
    int firstYear, secondYear;
    cout<<"Enter the first year of the range: "<<endl;
    cin>>firstYear;
    cout<<"Enter the second year of the range: "<<endl;
    cin>>secondYear;
    Range result;
    result.start = firstYear;
    result.finish = secondYear;
    return result;
}
string defineBook(Range range, book* ptrarray){
    int maxPages=0;
    string res="";
    for(int i=0; i<7; i++){
        int y = ptrarray[i].getYear();
        if((ptrarray[i].getPages()>maxPages)&&(y<range.finish)&&(y>range.start)){
            maxPages = ptrarray[i].getPages();
            res = ptrarray[i].toString();
        }
    }
    if(res==""){
        return "Books are absent in this range";
    }else {
        return res;
    }
}