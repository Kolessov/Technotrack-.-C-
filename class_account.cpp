#include <iostream>//including libraries
#include <math.h> // including libraries

using namespace std;

class Account{ //found of class

private:// identificator of approach

    int current_balance;// current balance
    int balance_limit;// limit of balance

 // sum and limit are global variables.
public:

    Account(int limit){
        current_balance = (limit > 0) ? limit : 0;// we use ternary operator.
        balance_limit = limit; // we make it, so limit doesn't belong to our class.
    }

    int get_balance(){
        return current_balance;// we simply return our current balance
    }

    void change_balance(int sum){
        current_balance += sum;
        current_balance = (current_balance < balance_limit) ? balance_limit : current_balance;
    }
};

