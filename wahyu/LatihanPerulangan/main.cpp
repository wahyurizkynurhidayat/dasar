#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "========FOR========" << endl;
    for (i=0 ; i<10; i++){
        cout << "perulangan ke" << i << endl;
    }
    int j=0;
    char tambah ='y';
    cout << "=======WHILE=======" << endl;
    while(tambah == 'y'){
        cout << "Perulangan Ke" << j << endl;
        cout << "Apakah Anda Ingin Nambah (y/n) ?" << endl;
        cin >> tambah;
        j++;
    }

    return 0;
}
