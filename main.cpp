#include "mylib.h"
using namespace std;
int main() {
    BoolMatrix M1 = createFirstMatrix();
    BoolMatrix M2 = createSecondMatrix();
    BoolMatrix M3 = M1|M2;
    M3.printMatrix();
    ~M3;
    M3.printMatrix();
    return 0;
}
