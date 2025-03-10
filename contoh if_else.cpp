#include <iostream>
using namespace std;
double alas, tinggi, luas;


void procedureInput(){
    cout << "masukkan alasnya = ";
    cin >> alas;
    
    cout << "masukkan tingginya = ";
    cin >> tinggi;
}

double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}

string ukuranSegitiga(double l){
    if(l > 60){
        return "besar";
    }
    else{
        return "kecil";
    }
}

void procedureOutput2(){
    cout << "luas segitiga 2 = " << ukuranSegitiga(hitungLuas2(alas, tinggi)) << endl;
}
int main(){
    procedureInput();
    procedureOutput2();
}