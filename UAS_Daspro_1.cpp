#include <iostream>
using namespace std;
void tampilkan(int value_1, int value_2, int value_3) {
    cout << "Data ke-1 = " << value_1 << "\n";
    cout << "Data ke-2 = " << value_2 << "\n";
    cout << "Data ke-3 = " << value_3 << "\n";
}
int main() {
    int val_1, val_2, val_3;
    cout << "Masukkan Nilai ke-1 : "; cin >> val_1;
    cout << "Masukkan Nilai ke-2 : "; cin >> val_2;
    cout << "Masukkan Nilai ke-3 : "; cin >> val_3;
    tampilkan(val_1, val_2, val_3);
    return 0;
}