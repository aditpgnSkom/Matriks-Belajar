#include <iostream>
using namespace std;

int main() {
  int col,row;

  // Matriks A Start
  cout<<"Masukkan Jumlah Baris Matriks : "; cin>>row;
  cout<<"Masukkan Jumlah Kolom Matriks : "; cin>>col;

  float matriksA[row][col];

  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
    cout<<"Masukkan Elemen Matriks A["<<i+1<<"]["<<j+1<<"] : "; cin>>matriksA[i][j];
    }
  }

  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++)
      cout<<matriksA[i][j]<<" ";
    cout<<endl;
  }
  // Matriks A End

  // Matriks B Start
  float matriksB[row][col];

  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
    cout<<"Masukkan Elemen Matriks B["<<i+1<<"]["<<j+1<<"] : "; cin>>matriksB[i][j];
    }
  }

  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++)
      cout<<matriksB[i][j]<<" ";
    cout<<endl;
  }
  // Matriks B End

  // Penjumlahan Start
  cout<<"Penjumlahan\n";
  float jumlah[row][col];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++)
      jumlah[i][j] = matriksA[i][j] + matriksB[i][j];
  }

  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) 
      cout<<jumlah[i][j]<<" ";
    cout<<endl;
  }
  // Penjumlahan End

  // Pengurangan Start
  cout<<"Pengurangan\n";
  float kurang[row][col];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++)
      kurang[i][j] = matriksA[i][j] - matriksB[i][j];
  }

  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) 
      cout<<kurang[i][j]<<" ";
    cout<<endl;
  }
  // Pengurangan End

  return 0;
}