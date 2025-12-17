#include <iostream>
using namespace std;

int main() {
	int n; // agar pengguna dapat memasukkan angka sesuka hati

	cout << "Masukkan jumlah baris Segitiga Pascal : ";
	cin >> n;

	for (int e = 0; e < n; e++) {

		// spasi agar bentuknya segitiga
		for (int m = 0; m < n - e; m++) {
			cout << " ";
		}

		int val = 1; // nilai pertama setiap baris selalu satu
		for (int a = 0; a <= e; a++) {
			cout << val << " ";

			// rumus kombinasi Segitiga Pascal
			val = val * (e - a) / (a + 1);
		}
		cout << endl;
	}
	
	return 0;
}