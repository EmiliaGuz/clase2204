#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    int inver;

    while(num>0){//1234,123,12,1,0->termina
        num= num/10;//123,12,1,0
        inver= num%10;//4,3,2,1

        cout << inver;
        cout << " ";
        }
    return 0;
}
