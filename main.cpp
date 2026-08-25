#include <iostream>

using namespace std ;


int main () {
    
    double a,b;
    string c ;

    cout << "angka awal : " ;
    cin >> a ;
    cout << "operasi : ";
    cin >> c ;


    while (c != "=") {

        cout << "angka : ";
        cin >> b ;

        if (c == "+") {
            a += b ;
            cout << "= " << a << endl  ;
        } else if (c == "-" ) {
            a -= b ;
            cout << "= " << a << endl  ;
        } else if (c == "/" ) {
            a /= b ;
            cout << "= " << a << endl  ;
        } else if (c == "*" ) {
            a *= b ;
            cout << "= " << a << endl  ;
        } else {
            cout << "operasi invalid" << endl ;
        }       
        cout << "operasi : ";
        cin >> c ;
    }
    cout << "hasil akhir : " << a ;

    return 0 ;

}