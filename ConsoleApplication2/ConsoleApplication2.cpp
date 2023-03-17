#include <iostream>
using namespace std;

int a[20];     // Deklarasi array a dengan ukuran 20 
int n;			// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array 

void input() {					// procedur untuk input
	while (true) {				// Looping
		cout << "masukan banyaknya elemen pada array : ";  // Output ke layar
		cin >> n;		// Input dari pengguna
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20 
			break;		// Keluar dari loop
		else {			// Jika n lebih dari 20 
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar 
		}
	}
	cout << endl;							// Output baris kosong 
	cout << "===================" << endl;	// Output ke layar
	cout << "masukan Elemen Array" << endl;	// Output ke layar
	cout << "===================" << endl;	// Output ke layar

	for (int i = 0; 1 < n; i++) {			// looping dengan 1 di mulai dari 0 hingga n-1
		cout << "data ke-" << (1 + 1) << ": ";			// Output ke layar
		cin >> a[1];						// Input dari pengguna 
	}
}
void bubbleSortArray() {			//procedur untuk menggurutkan Array dengan metode bubblesort
	for (int i = 1; i < n; i++) {	//Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - 1; j++) {	//Looping dengan j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {			//jika nilai pada a[j] lebih besar dari a[j + 1]
				int temp = a[j];			//simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			//assign  nilai a[j + 1] ke a[j]
				a[j + 1] = temp;			//assign nilai temp ke a[j +1]
			}
		}
	}

}

void unsorted() {
	cout << endl;											//output baris kosong
	cout << "=================================" << endl;	//output ke layar
	cout << "Element Array yang belum tersusun" << endl;	// output kel layar
	cout << "=================================" << endl;	// output ke layar
	for (int j = 0; j < n; j++) {							//looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;								//output ke layar
		cout << a[j] << endl;								//output ke layar 
	}
	cout << endl;
}

void display() {				// procedur untuk menampilkan hasil 
	cout << endl;									//output baris  kosong 
	cout << "================================" << endl;	// output ke layar
	cout << "Elemnt Array yang telah tersusun" << endl;	// output ke layar
	cout << "================================" << endl;	// output ke layar
	for (int j = 0; j < n; j++) {			//looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;				//output ke layar 
	}
	cout << endl;				// output baris kosong
}

int main() {
	input();		// memmanggil procedur input()
	unsorted();		// memanggil procedur unsorted()
	bubbleSortArray();	//memanggil procedur bubblesortarray()
	display();			//memanggil procedur display()
	return 0;
}