#include <iostream>
using namespace std;

//Program untuk menghitung BMI mahasiswa
//Prosedur untuk memasukkan berat dan tinggi badan
void inputData(float &berat, float &tinggi){
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

//Fungsi untuk menghitung nilai BMI
float hitungBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}

//Fungsi menentukan status berat badan berdasarkan BMI
string statusBMI(float bmi){
    if(bmi < 18.5)
        return "Berat Badan Kurang";
    else if(bmi < 25)
        return "Berat Badan Normal";
    else if(bmi < 30)
        return "Berat Badan Kelebihan";
    else 
        return "Obesitas";
}
//Program utama
int main(){
    float berat, tinggi, bmi;
    string status;
    cout << "--- Selamat Datang Mahasiswa Kelas B 2025 ---" <<endl;

    inputData(berat, tinggi);
    cout <<endl << "--- Hasil ---" <<endl;
//Menghitung BMI dari berat dan tinggi
    bmi = hitungBMI(berat, tinggi);
    status = statusBMI(bmi);
//Menampilkan hasil BMI    
    cout << "BMI Anda : " <<bmi <<endl;
    cout << "Status   : " <<status <<endl;
    return 0;
}