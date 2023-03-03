#include <iostream>

using namespace std;

int main()
{
    string xiirpl[] = {"Rega", "saiful", "umam", "fajar", "iqbalCKP"};
    int i;
    //mengambil data dari array
    cout << "Yang Paling Cakep Di XII RPL 1 Adalah : " << xiirpl [3] << endl;
    cout << "Diantara " ;
     for (i=0 ; i<5; i++){
        cout << xiirpl[i]<< " " << endl;
    }
    return 0;
}
