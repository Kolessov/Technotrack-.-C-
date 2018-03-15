#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
// Конец мантры

class Time{
  public:
   int hour;
   int min;
};

  Time add(Time &a, int &min){


    a.hour = a.hour + (a.min + min)/60 - 24*((a.hour*60 + min + a.min)/1440);

    a.min = a.min + min - 60*((min + a.min)/60);
    Time c = a;
    return c;
}


int main() {
    Time a,newtime;
    int min;

    // Получить a  из консоли


    cin>>a.hour>>a.min;
   // Получить min  из консоли

    cin>>min;
    newtime = add(a,min);
    if(not(newtime.min  < 10) and not(newtime.hour < 10)){
            cout << newtime.hour << ":" << newtime.min << endl;

    }
    if(newtime.min < 10 and not(newtime.hour < 10)){
    cout << newtime.hour << ":0"<< newtime.min << endl;
    }

    if((newtime.min < 10) and (newtime.hour < 10)){
        cout << "0" << newtime.hour << ":0" << newtime.min << endl;
    }
    if ((newtime.hour < 10) and not(newtime.min < 10)){
        cout << "0" << newtime.hour << ":" << newtime.min << endl;
    }
}
