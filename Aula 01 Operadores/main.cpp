#include <iostream>

using namespace std;

int main()
{
    int numa, numb, numc, soma, subtrair, multiplicar, dividir, mod;

    numa = 15;
    numb = 3;

    soma = numa + numb;
    subtrair = numa - numb;
    multiplicar = numa * numb;
    dividir = numa / numb;
    mod = numa % numb;
    cout << "Resultado Soma: " << soma << endl;
    cout << "Resultado Subtracao: " << subtrair << endl;
    cout << "Resultado Multipicacao: " << multiplicar << endl;
    cout << "Resultado Divisao: " << dividir << endl;
    cout << "Resultado Resto: " << mod << endl;
    return 0;
}
