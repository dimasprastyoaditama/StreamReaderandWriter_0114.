#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;
    cout << "Masukan Nama File : ";
    cin >> NamaFile;
    // membuka file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    // unlimited loop untuk menulis
    while (true) {
        cout << "-";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin,baris);
        // loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalamm file
        outfile << baris << endl; 
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    // Membuka file dalam mode membaca 
    ifstream infile;
    // menunjuk ke sebuah file 
    infile.open(NamaFile + ".txt", ios::in);
    cout << ">= membuka dan membaca file " << endl;
    // Jika file ada maka
    if (infile.is_open())
   
}