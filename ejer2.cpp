#include <iostream>
using namespace std;

int main(){
    int num, no;
    cout << "ingrese un numero: ";
    cin >> num;
    no = num%2;
    
    if (no==0){
        cout << "su numero es par";
    }
    else {
        cout << "su numero es impar";
    }

    return 0;
}