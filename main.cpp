#include <iostream>

using namespace std;

class arbin
{
private:
    string emri;
    string mbiemri;
    int mosha;
public:
    arbin()
    {
        this->emri = "pashk";
        this->mbiemri = "marku";
        this->mosha = 23;
    }
    arbin(string emri,string mbiemri,int mosha)
    {
        this->emri = emri;
        this->mbiemri = mbiemri;
        this->mosha = mosha;

    }
    string print_details();

};

string arbin::print_details()
{
    return "Emri: " + this->emri + "\nMbiemri: " + this->mbiemri + "\nMosha: " + to_string(this->mosha);
}

int main()
{
    arbin arbin2("Arbin","Bici",22);
    arbin armando;
    cout << arbin2.print_details()<<endl;
    cout<< "\r\n"<<endl;
    cout << armando.print_details()<<endl;


    return 0;
}

