#include <iostream>

using namespace std;

int main()
{
    int n;
    int resultado;
    resultado = 0;
    cout << "Teste While \n";
    cout << "Digite o numero \n";
    cin >> n;
    while (n>0){
        resultado = resultado + n;
        n = n-1;
     }
    cout << "Resultado: " << resultado;

    return 0;
}
