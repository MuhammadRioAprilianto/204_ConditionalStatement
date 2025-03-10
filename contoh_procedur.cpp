#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedureInput()
{
    cout << "masukkan alasnya = ";
    cin >> alas;
    cout << "masukkan tingginya = ";
    cin >> tinggi;
}

void procedureHitungLuas()
{
    luas = (alas*tinggi)*1/2;
}

void procedureOutput()
{
    cout << "luas segitiga = " << luas << endl;
}
int main(){
    procedureInput();
    procedureHitungLuas();
    procedureOutput();
}