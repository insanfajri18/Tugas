
#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
  char kalimat[100];
  int a, spasi=0;
  
  cout << "Masukan Kalimatnya : ";
  cin.getline(kalimat, sizeof(kalimat));
  cout<<""<<std::endl;
  cout << "kata yang anda masukkan adalah: \n";
  
  for(a=0; kalimat[a]; a++)
  {
    if(isspace (kalimat[a]) || ispunct (kalimat[a]))
    {
      spasi++;
      }
    }
  cout << "dalam kalimat terdapat " << spasi +1 <<" kata" << "\n\n";
  }
