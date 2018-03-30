#include<string.h>
#include<iostream>
#include<cassert>

using namespace std;


class Matrix{

public :

    int rows;
    int columns;
    double *data;

public:

    Matrix(int row,int column){
        rows = row;
        columns = column;
        data = new double[rows*columns];
        assert(rows > 0 && columns > 0 && data != 0);



    }


    Matrix(const Matrix &m){

        rows = m.rows;
        columns = m.columns;
        data = new double[rows * columns];
        memcpy(data, m.data, rows * columns * sizeof(double));
        assert(rows > 0 && columns > 0 && data != 0);

    }


    ~Matrix(){
        delete data;
    }



};

ostream &operator << (ostream &os,Matrix const &m){
    for(int i = 0; i < m.rows ; i++){
        for(int j = 0 ; j < m.columns ; j++){
            os << m.data[i * m.columns + j] << ' ';

        }
        os << endl;
    }
    return os;
}

int main(){
    return 0;
}
