#include <iostream>
#include <conio.h>
using namespace std;

int n;

void tukar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. Masukan data"<<"\n";            
cout<<"2. Tampilkan data"<<"\n";            
cout<<"3. Sorting asc"<<"\n";           
cout<<"4. Sorting dsc"<<"\n";            
cout<<"5. Exit"<<"\n"; 
cout<<"Masukan angka :";        

}

void mPertama(string pesan, int data[]){
system("cls");
    if (pesan == "pertama") {
        cout << "Masukkan jumlah data: ";
        cin >> n; 
        for (int i = 0; i < n; i++) {
            cout << "Masukkan data ke-" << (i + 1) << ": ";
            cin >> data[i]; 
        }
    }
    getch();
}



int main() {

int data[100];

n = 10;
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    mPertama("pertama", data);
    break;
   case '2':
    mPertama("ke- dua", data);
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga", data);
    /* code */
    break;  
   case '4':
    mPertama("ke- empat", data);
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}