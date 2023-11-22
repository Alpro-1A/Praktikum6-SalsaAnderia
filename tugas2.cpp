#include <iostream>
//nilai array dimsukkan melalui inputan
using namespace std;

int main() {
	
	cout << "                PROGRAM MENCARI NILAI TERTINGGI                 " << endl;
  	cout << "================================================================" << endl;
  	
  int nilaiTertinggi, jumlah, i, index;
  cout << "Masukkan jumlah mahasiswa: ";
  cin >> jumlah;

  int nilai[jumlah];

  cout << "Masukkan " << jumlah << " nilai\n";

  for (i = 0; i < jumlah; i ++) {
    cout << "Nilai Mahasiswa ke-" <<(i+1) <<": ";
    cin >> nilai[i];  
  }
  
  nilaiTertinggi = nilai[0];
  for(i = 0; i < jumlah; i++) {
    if (nilai[i] > nilaiTertinggi)  {
      nilaiTertinggi = nilai[i];
      index=i;
    }
  }
  
	cout << "Nilai tertinggi adalah : " << nilaiTertinggi<< endl;
	cout << "Nilai " << nilaiTertinggi<< " terdapat pada array di index ke-"<< index;
	cout << ", Milik mahasiswa ke-"<<index+1;
}