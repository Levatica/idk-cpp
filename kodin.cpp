#include <iostream>
using namespace std;

int main(){
  string nama;
  char gender;
  int umur;

  cout << "Masukkan nama mu : ";
  getline(cin,nama);
  cout << "Masukkan Gender mu (L/P) : ";
  cin >> gender;
  cout << "Masukkan Umur mu : ";
  cin >> umur;

  cout << " " << endl;
  
  cout << "Halo Nama saya adalah " << nama << endl;
  cout << "Umur saya adalah : " << umur << endl;
  
  switch(gender){
    case 'L':
      cout << "Saya adalah seorang Laki laki " << endl;
    break;
    
    case 'P':
      cout << "Saya adalah seorang perempuan " << endl;
    break;
    
    default:
      cout << "Gak tau" << endl;
    break;

  }
  
  if(umur > 18){
    cout << "dan saya sudah dewasa" << endl;
  }else{
    cout << "dan saya belum dewasa" << endl;
  }

  cin.get();
  return 0;

}
