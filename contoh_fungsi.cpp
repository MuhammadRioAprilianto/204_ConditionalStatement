#include <iostream>
using namespace std;

double luas, alas, tinggi;
double hitungLuas(){
    return 0.5*(alas*tinggi);
}

void procedureInput()
{
    cout << "masukkan alasnya = ";
    cin >> alas;
    cout << "masukkan tingginya = ";
    cin >> tinggi;
}

void procedureOutput()
{
    cout << "luas segitiga = " << hitungLuas() << endl;
}
int main(){
    procedureInput();
    procedureOutput();
}