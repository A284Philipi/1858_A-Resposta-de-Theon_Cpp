#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int cont = 1, casos, teste = 99999999, num, valor;
    cin >> casos;
    while (cont <= casos){
        cin >> num;
        if (num < teste){
            valor = cont;
            teste = num;
        }
        cont++;
    }
    cout << valor <<endl;
    return 0;
}
