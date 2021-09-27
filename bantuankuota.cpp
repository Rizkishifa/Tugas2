#include <iostream>
using namespace std;
int main () {
string penerima;
int jumlah1;
int jumlah2;
long int hasil = 0;
int pilih_menu;
cout << "--------------------" << endl;
cout << "Bantuan Kuota Belajar" << endl;
cout << "--------------------" << endl;
cout << endl;
cout << "Masukkan jumlah siswa : "; cin >> jumlah1;
cout << "Masukkan jumlah pengajar : "; cin >> jumlah2;
cout << endl;
cout << "- Tingkat Pendidikan -" << endl;

cout << " 1. Paud " << endl;
cout << " 2. SD " << endl;
cout << " 3. SMP " << endl;
cout << " 4. SMA " << endl;
cout << " 5. Perguruan tinggi " << endl;
cout << " 6. Pengajar SD " << endl;
cout << " 7. Pengajar SMP " << endl;
cout << " 8. Pengajar SMA " << endl;
cout << " 9. Pengajar Pendidikan tinggi " << endl;
cout <<endl;

cout <<"Pilih Tingkat Pendidikan : "; cin >> pilih_menu;
if ( pilih_menu == 1 ) {
hasil = 20 * jumlah1 * 6000;
cout << " Biaya " << " = " << hasil << endl;
}
else if ( pilih_menu == 2 ) {
hasil = (35 * jumlah1 * 6000) + (42 * jumlah2 * 6000);
cout << " Biaya " << " = " << hasil << endl;
}
else if ( pilih_menu == 3 ) {
hasil = (35 * jumlah1 * 6000) + (42 * jumlah2 * 6000);
cout << " Biaya " << " = " << hasil << endl;
}
else if ( pilih_menu == 4 ) {
hasil = (35 * jumlah1 * 6000) + (42 * jumlah2 * 6000);
cout << " Biaya " << " = " << hasil << endl;
}
else if ( pilih_menu == 5 ) {
hasil = (50 * jumlah1 * 6000) + (50 * jumlah2 * 6000);
cout << " Biaya " << " = " << hasil << endl;
}
else {
cout << "Maaf kuota tidak tersedia, silahkan pilih data 1-9" <<
endl;
}

return 0;

}
