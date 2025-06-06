#include <iostream>
using namespace std;

int main(){
    int num1, num2, t;
    cout << "ingrese un numero ";
    cin >> num1;
    cout << "ingrese otro numero ";
    cin >> num2;
    
    if (num1>num2){
        cout << "su primer numero " << num1 << " es mayor que el segundo " << num2;
    }
     else if (num1<num2){
        cout << "el segundo numero " << num2 << " es mayor que el primer numero " <<num1;
    }
    else if (num1==num2){
        cout << "ambos numeros son iguales " << num1 << "=" << num2;
    }
    return 0;
}
