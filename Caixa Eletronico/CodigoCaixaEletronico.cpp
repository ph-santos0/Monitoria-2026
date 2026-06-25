#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int opcao;
  float saldo = 1000;
  float valor;

  do
  {
    system("cls");
    cout << "Saldo atual: R$ " << saldo;
    cout << "\n1 - Depositar dinheiro";
    cout << "\n2 - Sacar dinheiro";
    cout << "\n3 - Sair";
    cout << "\n\nDigite a opcao desejada: ";

    cin >> opcao;

    switch (opcao)
    {
    case 1:
      cout << "Digite o valor do deposito: ";
      cin >> valor;
      if (valor > 0)
      {
        saldo = saldo + valor;
      }
      else
      {
        cout << "ERRO: Digite um valor positivo.";
      }

      break;
    case 2:
      cout << "Digite o valor do saque: ";
      cin >> valor;
      if (valor > 0)
      {
        if (valor <= saldo)
        {
          saldo = saldo - valor;
        }
        else
        {
          cout << "Saldo insuficiente";
        }
      }
      else
      {
        cout << "ERRO: Digite um valor positivo.";
      }
      break;
    case 3:
      return 0;
      break;
    default:
      cout << "ERRO: Digite uma opcao valida.\n";
      break;
    }
    system("pause");
  } while (opcao != 3);

  cout << endl
       << endl;
  return 0;
}