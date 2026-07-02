#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int a1, a2, a3;

    do
    {
        system("cls");
        cout << "Digite o primeiro angulo: ";
        cin >> a1;
        cout << "Digite o segundo angulo: ";
        cin >> a2;
        cout << "Digite o terceiro angulo: ";
        cin >> a3;

        if (a1 + a2 + a3 != 180)
        {
            cout << "ERRO: A soma dos angulos precisa ser igual a 180 graus.\n";
            system("pause");
        }

    } while (a1 + a2 + a3 != 180);

    if (a1 == 90 || a2 == 90 || a3 == 90)
    {
        cout << "Triangulo retangulo.";
    }
    else if (a1 > 90 || a2 > 90 || a3 > 90)
    {
        cout << "Triangulo obtusangulo.";
    }
    else if (a1 < 90 && a2 < 90 && a3 < 90)
    {
        cout << "Triangulo Acutangulo.";
    }

    cout << endl
         << endl;
    return 0;
}