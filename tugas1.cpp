#include <iostream> 
// Nilai array sudah ditentukan
using namespace std;
	void display(int n[5]){
cout << "Tampilkan nilai: " << endl;
	for (int i = 0; i < 5; ++i){
		cout << "Mahasiswa " << i + 1 << ": " << n[i] << endl;
	}
}

int main(){
	
	cout << "                PROGRAM MENCARI NILAI TERTINGGI                 " << endl;
  	cout << "================================================================" << endl;
  	
  	int nilai[5] = {100, 77, 99, 81, 85};
  	int nilaiTertinggi, index;
	display(nilai);
	
	for (int i=0; i<5; i++){
		if (nilai[i] > nilaiTertinggi){
			nilaiTertinggi = nilai[i];
			index=i;
		}  
	}
	cout << "Nilai tertinggi adalah : " << nilaiTertinggi<< endl;
	cout << "Nilai " << nilaiTertinggi<< " terdapat pada array di index ke-"<< index;
	cout << ", Milik mahasiswa ke-"<<index+1<<endl<<endl;
	cout << "================================================================"<<endl<<endl<<endl;

return 0;
}
