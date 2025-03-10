#include <iostream>
using namespace std;

double luas, alas, tinggi;

double hitungLuas(){
    return 0.5*(alas*tinggi);
}

double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}
void procedureInput()
{
    cout << "masukkan alasnya = ";
    cin >> alas;
    cout << "masukkan tingginya = ";
    cin >> tinggi;
}

void procedureOutput(){
    cout << "luas segitiga = " << hitungLuas() << endl;
}

void procedureOutput2(){
    cout << "luas segitiga 2 = " << hitungLuas2(alas, tinggi) << endl;
}
int main(){
    procedureInput();
    procedureOutput();
    procedureOutput2();
}