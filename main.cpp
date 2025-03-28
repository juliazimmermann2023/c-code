#include <iostream>

using namespace std;

int main()
{
    int n;
    int tab;
    cout << "teste do-while \n";
    cout << "informe o numero \n";
    cin >> n;
    do{
        cout << n*tab;
        tab++;
        cout << "\n";

    }
    while (tab<11);
    return 0;
}
