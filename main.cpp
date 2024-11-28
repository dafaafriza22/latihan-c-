//
//  main.cpp
//  LATIHAN
//
//  Created by Dafa Afriza Hidayat on 17/11/24.
//

#include <iostream>
using namespace std;

int main() {

    
    // insert code here...
    char JenisKodeHotel;
    int HariMenginap;
    double TotalHarga, discount, HargaFinal, Kembalian, JumlahYgDibayarkan, Change;
    
    cout << "Masukan Jenis Kode Hotel: ";
    cin >> JenisKodeHotel;
    cout << "Masukan Hari Menginap: ";
    cin >> HariMenginap;
    
    if ((JenisKodeHotel == 'P' || JenisKodeHotel == 'p') && HariMenginap >0){
        if (HariMenginap <=3)
            TotalHarga = HariMenginap * 150000;
        else if (HariMenginap <= 6)
            TotalHarga = HariMenginap * 300000;
        else
            TotalHarga = HariMenginap * 500000;
    } else if ((JenisKodeHotel == 'E' || JenisKodeHotel == 'e') && HariMenginap >0){
        if (HariMenginap <=3)
            TotalHarga = HariMenginap * 200000;
        else if (HariMenginap <=6)
            TotalHarga = HariMenginap * 400000;
        else
            TotalHarga = HariMenginap * 700000;
    } else {
        cout << "Harga yang Harus diBayarkan = Rp 0,- " << endl;
        cout << "Uang yang diBayarkan = Rp 0 " << endl;
        cout << " Kembalian = Rp. 0-" << endl;
    }
    
    if (TotalHarga >= 1000000) {
        discount = TotalHarga * 10 / 100;
    } else if (TotalHarga >= 500000) {
        discount = TotalHarga * 5 / 100;
    }

    // Harga akhir setelah diskon
    HargaFinal = TotalHarga - discount;

    // Output harga yang harus dibayar
    cout << "Harga yang harus dibayar = Rp " << HargaFinal << ",-" << endl;

    // Input jumlah uang yang dibayarkan
    cout << "Uang yang dibayarkan = Rp ";
    cin >> JumlahYgDibayarkan;

    // Hitung kembalian
    Change = JenisKodeHotel - TotalHarga;

    // Output kembalian
    cout << "Kembalian = Rp " << Change << ",-" << endl;
    
    int i, j, baris;
    
    cout << "Masukan Jumlah Baris: ";
    cin >> baris;
    
    for ( i=1; i<=baris; i++){
        if (i==1 || i==baris || i==(baris+1) / 2){
            for ( j=1; j<=baris; j++){
                cout << " * ";
            }
        }else{
            cout << " * ";
        }
        cout << endl;
    }
    
        
    return 0;
}
