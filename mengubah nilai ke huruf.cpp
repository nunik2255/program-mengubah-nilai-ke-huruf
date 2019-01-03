#include <iostream>
using namespace std;
int main ()
{
    int nilai;
    cout<<"Program Untuk Mengubah Nilai ke Huruf"<<endl;
    cout<<"Masukan Nilai : " ;
    cin>>nilai;
    if (nilai>=85 && nilai<100) {
        cout<<"Nilai Huruf = A "<<endl;
        cout<<"Bobot Nilai = 4 "<<endl;
    }else if (nilai>=70 && nilai<85) {
        cout<<"Nilai Huruf = B "<<endl;
        cout<<"Bobot Nilai = 3 "<<endl;
    }else if (nilai>=50 && nilai<70) {
        cout<<"Nilai Huruf = C "<<endl;
        cout<<"Bobot Nilai = 2 "<<endl;
    }else if (nilai>=0 && nilai<50) {
        cout<<"Nilai Huruf = D "<<endl;
        cout<<"Bobot Nilai = 1 "<<endl;
    }return 0;
}
