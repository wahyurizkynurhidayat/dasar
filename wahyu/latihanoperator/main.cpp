#include <iostream>

using namespace std;

int main()
{
    int kl;
    int r, a, t;
    float rumus, lj;
    float Phi = 3.14;


    cout << "                                              ============================" << endl;
    cout << "                                              APLIKASI PENGHITUNG SEGITIGA" << endl;
    cout << "                                              ============================" << endl;

    cout << "Masukan Alas :" ;
    cin >> a;

    cout << "Masukan Tinggi :" ;
    cin >> t;

            rumus = 0.5 *a *t;
            cout << "Jawab :" << rumus << endl;

    cout << "" << endl;

    cout << "                                             =============================" << endl;
    cout << "                                             APLIKASI PENGHITUNG LINGKARAN" << endl;
    cout << "                                             =============================" << endl;

    cout << "Masukan Jari Jari Lingkaran :" << endl ;
    cout << "Angka :" ;
    cin >> r;

            lj = Phi *r *r;
            cout << "hasil :"<<lj <<endl;
    cin >> kl;

    return 0;
}
