#include <iostream>

using namespace std;

int main() {

  int valor = 12;
  char letra = 'B';
  double decimal = 2.5;
  float decimal2 = 5.2;
  bool vivo = true;
  string nome = "Leonardo";

  cout << "Digite um valor: ";
  cin >> valor;
  cout << "Digite uma letra: ";
  cin >> letra;
  cout << "Digite um decimal: ";
  cin >> decimal;
  cout << "Digite um nome: ";
  cin >> nome;

  cout << valor << endl
       << letra << endl
       << decimal << endl
       << decimal2 << endl
       << vivo << endl
       << nome << endl;

  return 0;
}
