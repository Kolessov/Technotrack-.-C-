#include <iostream>
#include <math.h>

using namespace std;

class Lin{// definition of class
public:
    int cm;
    int mm;
    bool ok() {return (!(mm < 0) and !(cm < 0));};// this thing check , so our object of this class will be normal. it's necessary.
};

Lin convertToLin(const int &kletki){ // this function accept link
    Lin c; // we construct object of class with help default construct

    c.cm =  (kletki * 5) / 10;
    c.mm =  (kletki * 5) % 10;
    //Lin c = Lin.lineyka ;
    return c;// we have to return object , which has type - Lin.
}

void printLin(const Lin &a){
    cout << a.cm << " " << a.mm;
}

int main(){
    int kletki;

    cin >> kletki;

    Lin newsize = convertToLin(kletki);
    if(!(newsize.ok())){
        cout << "Error\n";

    }
    printLin(newsize);
}






