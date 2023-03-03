#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "                                       =====Grade Nilai====="<< endl;
    cout << "" << endl;
    cout<<"Masukkan Nilai Anda : "; cin>>nilai;

  //Untuk nilai 0-60
  if((nilai>=0)&&(nilai<=60)){
    cout<<"Nilai Anda E"<<endl;
  }

  //Untuk nilai 61-70
  else if((nilai>=61)&&(nilai<=70)){
    cout<<"Nilai Anda D"<<endl;
  }

 //Untuk nilai 71-80
  else if((nilai>=71)&&(nilai<=80)){
    cout<<"Nilai Anda C"<<endl;
  }

  //Untuk nilai 81-90
  else if((nilai>=81)&&(nilai<=90)){
    cout<<"Nilai Anda B"<<endl;
  }

  //Untuk nilai 91-100
  else if((nilai>=91)&&(nilai<=100)){
    cout<<"Nilai Siswa A"<<endl;
  }

  //Inputan salah
 else{
  cout << "" << endl;
  cout<<"Inputlah Yang Benar !!";
  }
    return 0;
}
