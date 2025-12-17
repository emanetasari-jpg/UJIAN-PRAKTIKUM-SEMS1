#include <iostream>
using namespace std;

int main() {
	int n = 6; //agar simbol "'" dapat membentuk 6 baris

	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++) {
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "'";
		}
		cout << endl;
	}
}
