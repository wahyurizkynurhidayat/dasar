#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;
    char nama[20][20],tgl[20];
    int jml,lama[10],tot,menu;


    void header (){
    cout << "************************" << endl;
    cout << "       RENTAL PS        " << endl;
    cout << "************************" << endl;
    }

    int main (){
    header ();
    cout << "Masukan Jumlah Penyewa : ";
    cin >> jml;

    for (int i=0;  i < jml; i++){
        cout << "Masukan Nama : " ;
        cin >> nama[i];
        cout << "Lama Penyewaan : " ;
        cin >> lama[i];
        cout << "Tanggal Sewa (dd/mm/yy) : " ;
        cin >> tgl[i];
    }

    cout << endl;
    header();
    cout << "#1 Lihat Daftar Pembooking" << endl;
    cout << "#2 Keluar" << endl;
    cout << "Pilih Menu : " ;
    cin >> menu;

    if(menu==1){
        for (int j=0; j<jml; j++){
            cout << "" <<endl;
            cout << "Nama Pembooking : " << nama[j] << endl;
            cout << "Lama Sewa       : " << lama[j] << endl;
            cout << "Tanggal Sewa    : " << tgl[j] << endl;
            tot=10000*lama[j];
            cout << " Total Bayar    : " << tot << endl;
            cout << "=================================" << endl;
        }
    }
    else if (menu==2){
            exit(0);
    }else{
        cout << "Menu Tidak Tersedia!" ;
    }
    }


