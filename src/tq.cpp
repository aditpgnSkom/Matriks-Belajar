#include <iostream>
using namespace std;

int barisA, barisB, kolomA, kolomB, i, j;

int main () {
	do {
		cout << "Masukkan baris A\t: "; cin >> barisA;
		cout << "Masukkan kolom A\t: "; cin >> kolomA;
    cout << "Masukkan baris B\t: "; cin >> barisB;
		cout << "Masukkan kolom B\t: "; cin >> kolomB;
	}while((kolomA != barisB) && (barisA != kolomB)); // ketika kolom A tidak sama dengan baris B dan baris A tidak sama dengan kolom B maka akan mengulang terus sampai keduanya bernilai sama. PENJELASAN PRIK BENAKANO NEH
	
	float A[barisA][kolomA]; //deklarasi matriksA
	
	for(i = 0; i < barisA; i++) {
		for(j = 0; j < kolomA; j++) {
			cout << "Masukkan elemen A[" << i+1 << "][" << j+1 << "]\t: "; // i+1 dan j+1 karena indeks array dimulai dari 0
			cin >> A[i][j];
    } 
  }

  cout << "Matriks A :\n";
  for(i = 0; i < barisA; i++) { 
    for(j = 0; j < kolomA; j++)
      cout << A[i][j] << " "; 
    cout << endl;
  }

   float B[barisB][kolomB]; //Deklarasi MatriksB

	for(i = 0; i < barisB; i++) {
		for(j = 0; j < kolomB; j++) {
			cout << "Masukkan elemen B[" << i+1 << "][" << j+1 <<"]\t: ";
			cin >> B[i][j];
    } 
  } 

  cout << "Matriks B :\n";
  for(i = 0; i < barisB; i++) { 
    for(j = 0; j < kolomB; j++)
      cout << B[i][j] << " "; 
  cout << endl;
  }

  float hasil[barisB][kolomB]; //Deklarasi array hasil perkalian

  cout << "Hasil perkalian :\n";
  for(i = 0; i < barisA; i++) {
    for(j = 0; j < kolomB; j++) {
      hasil[i][j]=A[i][j]*B[i][j]+A[i][j+1]*B[i+1][j];
      {
        cout<<hasil[i][j]<<" ";
      }
    }
 	cout<<endl;  // untuk enter
  }

  return 0;
}