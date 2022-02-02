#include <iostream>
using namespace std;
int factorial(int num) {
    if (num <= 1) return num;
    return num * factorial(num - 1);
}
int main() {
    int num;
    cout << "Masukkan Angka : "; cin >> num;
    cout << "Hasil faktorial : " << factorial(num);
    return 0;
}