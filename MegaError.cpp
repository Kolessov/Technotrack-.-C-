#ifndef MEGAERROR_H_INCLUDED
#define MEGAERROR_H_INCLUDED
using namespace std;

class Megaerror {

private:
    int ernum;
    int linenum;
    std::string wtf;
    std::string funname;
    std::string exename;
    Megaerror &megaer;
public:
    Megaerror(int usernum, int uslinenum, std::string uswtf, std::string usfunname, std::string usexename, Megaerror &usmegaer);
    void printMegaerror();
};

Megaerror::Megaerror(int usernum, int uslinenum, std::string uswtf, std::string usfunname, std::string usexename, Megaerror &usmegaer): ernum(usernum),linenum(uslinenum), wtf(uswtf), funname(usfunname), exename(usexename), megaer(usmegaer)
{

}

void Megaerror::printMegaerror()
{
    cout << "Error number:" << ernum << endl << "Line:" << linenum << " maybe this will help you:" << wtf << endl << funname << endl << exename << endl << &megaer << endl;
}

#endif // MEGAERROR_H_INCLUDED
