#include <iostream>
#include <iomanip>
using namespace std;
class BoolMatrix{
private:
    int range;
    double **Matrix;
public:
    BoolMatrix(double **M, int R){
        range = R;
        Matrix = new double*[R];
        for(int i=0; i<R; i++){
            Matrix[i] = new double[R];
            for(int j=0; j<R; j++){
                Matrix[i][j]=M[i][j];
            }
        }
    }
    BoolMatrix(int range) {
        this->range = range;
        this->Matrix = new double*[range];
        for (int i=0; i<range; i++) {
            this->Matrix[i] = new double[range];
        }
    }
    //диз'юнкція
    BoolMatrix operator|(const BoolMatrix& m) const{
        if(m.range!=this->range) throw invalid_argument("Matrix dimensions must match");
        BoolMatrix res(this->range);
        for(int i=0; i<range; i++){
            for(int j=0; j<range; j++){
                res.Matrix[i][j]=(this->Matrix[i][j]==1 || m.Matrix[i][j]==1) ? 1 : 0;
            }
        }
        return res;
    }
    void operator~(){
        inversion(this->Matrix, this->range);
    }
    BoolMatrix(){}
    void printMatrix(){
        cout<<"Your matrix:"<<endl;
        for(int i=0; i<range; i++){
            for(int j=0; j<range; j++){
                cout << setw(3);
                cout << Matrix[i][j]<<" ";
            }
            cout << endl;
        }
    }

    int getRange() const {
        return range;
    }

    double **getMatrix() const {
        return Matrix;
    }
    void inversion(double **A, int N){
        double temp;
        double **E = new double *[N];
        for (int i=0; i<N; i++)
            E[i] = new double [N];
        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
            {
                E[i][j] = 0.0;
                if (i == j)
                    E[i][j] = 1.0;
            }

        for (int k=0; k<N; k++){
            temp = A[k][k];
            for (int j=0; j<N; j++){
                A[k][j] /= temp;
                E[k][j] /= temp;
            }
            for (int i=k+1; i<N; i++){
                temp = A[i][k];
                for (int j=0; j<N; j++){
                    A[i][j] -= A[k][j] * temp;
                    E[i][j] -= E[k][j] * temp;
                }
            }
        }
        for (int k=N-1; k>0; k--){
            for (int i=k-1; i>=0; i--){
                temp = A[i][k];
                for (int j=0; j<N; j++){
                    A[i][j] -= A[k][j] * temp;
                    E[i][j] -= E[k][j] * temp;
                }
            }
        }
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                A[i][j] = E[i][j];
        for (int i = 0; i < N; i++)
            delete [] E[i];
        delete [] E;
    }
};