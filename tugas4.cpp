#include <iostream>
using namespace std;

int main ()
{
    string Nama_Siswa;
    float a, b, c;
    float nilai_rata;


    cout<<" PROGRAM HITUNG NILAI RATA-RATA "<<endl;

    cout<<" Nama Siswa : ";
    cin>>Nama_Siswa;
    cout<<" Nilai Pertandingan I    : ";
    cin>>a;
    cout<<" Nilai Pertandingan II   : ";
    cin>>b;
    cout<<" Nilai Pertandingan III  : ";
    cin>>c;

    nilai_rata = (a + b + c)/3;

    cout<<" Siswa yang bernama "<<Nama_Siswa<<endl;
    cout<<" Memperoleh nilai rata-rata "<<nilai_rata;
    cout<<" dari hasil perlombaan yang diikutinya"<<endl;
    cout<<" Hadiah yang didapat adalah ";

    if (nilai_rata >= 85 && nilai_rata <=100)
    {
        cout<<"Komputer core i5";
    }
    else if (nilai_rata >=70 && nilai_rata <85)
    {
        cout<<"Uang sebesar Rp. 2.500,000";
    }
    else if (nilai_rata <70 && nilai_rata >=0 )
    {
        cout<<"Hadiah Hiburan";
    }
    getchar();
}