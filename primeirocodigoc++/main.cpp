#include <iostream>
#include <tchar.h>
using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese"));
    int NumVidas = 5;
    int Score = 1350;

    cout << "********INICIO DO JOGO********" << endl;
    cout << "Vidas Jogador: " << NumVidas <<  endl;
    cout << "Pontua��o: " << Score << endl;
    cout << "Endere�o que Numvidas ocupa na mem�ria ram: " << &NumVidas << endl;
    cout << "Endere�o que Score ocupa na mem�ria ram: " << &Score << endl;
    cout << "******************************" << endl;

    cout << "********DURANTE O JOGO********" << endl;
    Score = Score + 150;
    NumVidas = NumVidas - 1;
    cout << "A pontua��o agora �: " << Score << endl;
    cout << "O seu numero de vidas agora �: " << NumVidas << endl;
    cout << "******************************" << endl;




    return 0;
}
