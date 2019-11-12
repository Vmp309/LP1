#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0


int main()
{

int a, maior;

maior = INT_MIN;

  while (1){
    cin >> a;

    if (a == 0){
      break;
    }

    if (a > maior){
        maior = a;
    }

  }

  cout << maior;

  return 0;
}

