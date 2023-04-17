#include "mylib.h"
BoolMatrix createFirstMatrix(){
    double **M;
    M = new double*[3];
    for(int i=0; i<3;i++){
        M[i]=new double[3];
    }
    M[0][0]=0;
    M[0][1]=0;
    M[0][2]=0;
    M[1][0]=0;
    M[1][1]=1;
    M[1][2]=1;
    M[2][0]=1;
    M[2][1]=0;
    M[2][2]=0;
    BoolMatrix M0(M, 3);
    for(int i=0; i<3; i++) {
        delete[] M[i];
    }
    delete[] M;
    return M0;
}
BoolMatrix createSecondMatrix(){
    double **M;
    M = new double*[3];
    for(int i=0; i<3;i++){
        M[i]=new double[3];
    }
    M[0][0]=1;
    M[0][1]=0;
    M[0][2]=1;
    M[1][0]=0;
    M[1][1]=0;
    M[1][2]=1;
    M[2][0]=1;
    M[2][1]=1;
    M[2][2]=0;
    BoolMatrix M0(M, 3);
    for(int i=0; i<3; i++) {
        delete[] M[i];
    }
    delete[] M;
    return M0;
}
BoolMatrix createMatrix0(){
    double **M;
    M = new double*[3];
    for(int i=0; i<3;i++){
        M[i]=new double[3];
    }
    M[0][0]=2;
    M[0][1]=0;
    M[0][2]=-1;
    M[1][0]=1;
    M[1][1]=5;
    M[1][2]=-4;
    M[2][0]=-1;
    M[2][1]=1;
    M[2][2]=0;
    /*M[0][0]=1;
    M[0][1]=0;
    M[0][2]=1;
    M[1][0]=0;
    M[1][1]=1;
    M[1][2]=1;
    M[2][0]=1;
    M[2][1]=1;
    M[2][2]=0;*/
    BoolMatrix M0(M, 3);

    for(int i=0; i<3; i++) {
        delete[] M[i];
    }
    delete[] M;
    return M0;
}
BoolMatrix createMatrixRandom(){
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 1;
    int range_;
    cout<<"Enter quantity rows and columns:";
    cin>>range_;
    double **M = new double*[range_];
    for(int i=0; i<range_; i++){
        M[i]=new double[range_];
    }
    srand(time(NULL));
    for(int i=0; i<range_; i++)
        for (int j=0; j<range_; j++){
            M[i][j] = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
        }
    BoolMatrix M0(M, range_);
    for(int i=0; i<range_; i++) {
        delete[] M[i];
    }
    delete[] M;
    return M0;
}
