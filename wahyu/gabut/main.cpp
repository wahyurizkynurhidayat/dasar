#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    string bapak;
    int umur;
    string jk;

    cout << "Siapakah Namamu ?" << endl;
    cout << "Jawab    :" ;
    //cin >>nama;
    getline (cin, nama);

    cout << "Siapakah Bapakmu ?" << endl;
    cout << "Jawab    :" ;
    //cin >>bapak;
    getline(cin, bapak);

    cout << "Berapakah Umurmu ?" << endl;
    cout << "Jawab    :";
    cin >>umur;

    cout << "Kelaminmu apa ?" << endl;
    cout << "Jawab    :";
    cin >>jk;
    cout << "" << endl;

    //output
    cout << "Salam Kenal " << nama  << " !!" << endl;
    cout << "Bapakmu Bernama :"<< bapak  << endl;
    cout << "umurmu :"<< umur <<  endl;
    cout << "Dan anda berjenis kelamin :" << jk << endl;

    return 0;

}
