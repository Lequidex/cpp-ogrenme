#include <iostream>

int main()
{
	int sayi1;
	std::cout << "Birinci sayıyı girin!";
	std::cin >> sayi1;
	
	int sayi2;
	std::cout << "İkinci sayıyı girin!";
	std::cin >> sayi2;

	std::cout << sayi1 << "+" << sayi2 << " " << sayi1 + sayi2 << " eder. \n";
	std::cout << sayi1 << "-" << sayi2 << " " << sayi1 - sayi2 << " eder. \n";
	std::cout << sayi1 << "*" << sayi2 << " " << sayi1 * sayi2 << " eder. \n";
	std::cout << sayi1 << "/" << sayi2 << " " << sayi1 / sayi2 << " eder. \n";

	return 0;
}