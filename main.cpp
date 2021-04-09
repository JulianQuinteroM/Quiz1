
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Programa para arrojar el resultado de la suma de todos los dijitos en pontencia de ellos mismos" << endl;

    int num=0, opr=0, total=0;

    cout << "Ingrese el numero" << endl;
    cin >> num;

    while(num>0){
        opr=num%10; //saco el último dígito
        total+= pow(opr,opr); //en total guardo la potencia del dígito que saqué
        num/=10; //le quito un dígito al numero inicial para sacar el que sigue y elevarlo
    }

    cout << "El resultado de la suma es: " << total << endl;

    return 0;
}


