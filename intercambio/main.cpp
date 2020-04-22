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

/*
int main()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int tam=sizeof(num);
    int inver;
    //cout << tam;
    while((tam-1)>0){//123
        inver= num%10;
        num= num/10;
        --tam;
        cout << inver;
        cout << " "
        cout << num;
        ///cout << tam;}
    return 0;
}*/
