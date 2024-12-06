#include <iostream>
using namespace std;

int main()
{
    int num1, num2, totalsuma, totalresta;

    cout << "Ingrese el primer numero --> ";
    cin >> num1;
    cout << "Ingrese el segundo numero --> ";
    cin >> num2;

    totalsuma = num1 + num2;
    totalresta = num1 - num2;

    cout << "RESULTADO ES: \n";
    cout << "Suma --> " << totalsuma << "\n";
    cout << "Resta --> " << totalresta << "\n";


	//ANDREA >> MULTIPLICACION, DIVISION

    int totalmultiplicacion, totaldivision;

    totalmultiplicacion = num1 * num2;
    totaldivision = num1 / num2;

    cout << "Multiplicacion --> " << totalmultiplicacion << "\n";
    cout << "Division --> " << totaldivision << "\n";

    return 0; 
	//EFRAIN >> POTENCIACION - RAIZ
}