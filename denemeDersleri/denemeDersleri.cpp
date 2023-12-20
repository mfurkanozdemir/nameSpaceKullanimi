#include <iostream>
using namespace std;

namespace Calculator {
	// toplama işlemi
	double add(double a, double b) {
		return a + b;
	}
	// Çıkarma işlemi
	double subtract(double a, double b) {
		return a - b;
	}
	// Çarpma işlemi
	double multipy(double a, double b) {
		return a * b;
	}
	// Bölme işlemi
	double divide(double a, double b) {
		if (b != 0)
		{
			return a / b;
		}
		else
		{
			cout << "Hata: Sifira bölme!" << endl;
			return 0.0;
		}
	}
}

int main()
{
	char secim;
	char anaMenu;
	do
	{
		do
		{
			double num1, num2;
			cout << "Islem icin sayilerinizi girin: " << endl;
			cin >> num1 >> num2;


			cout << "Toplam:" << Calculator::add(num1, num2) << endl;
			cout << "Fark:" << Calculator::subtract(num1, num2) << endl;
			cout << "Carpma:" << Calculator::multipy(num1, num2) << endl;
			cout << "Bolme:" << Calculator::divide(num1, num2) << endl;
			cout << "Isleme devam etmek icin (E/e):" << endl;
			cin >> secim;
		} while (secim == 'e' || secim == 'E');
		cout << "Program sonlandi!" << endl;
		cout << "Ana menuye donmek ister misiniz: (E/H) ";
		cin >> anaMenu;
	} while (anaMenu == 'E' || anaMenu == 'e');
	return 0;
}
