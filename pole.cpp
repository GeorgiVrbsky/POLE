#include <iostream>
#include <ctime>


using namespace std;

void Pole(int x) {
	int* array;
	int y = x;
	array = new int[x];
	for (int i = 0; i < x; i++) {
		cout << i << "-" << (i * 10) << endl;
		array[i] = (i*10);
	}
	cout << "--------\n";
	for (int i = 0; i < y; i++) {
		int random = rand() % x;
		swap(array[random], array[x - 1]);
		x = x - 1;
	}
	for (int j = 0; j < y; j++) {
		cout << j << "-" << array[j] << endl;
	}
}

int main() {

	srand((int)time(0));

	int vstupUzivatele;

	cout << "Velikost pole:";
	cin >> vstupUzivatele;
	Pole(vstupUzivatele);
}
