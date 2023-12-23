#include <iostream>
#include<cmath>

using std::cout;
using std::cin;

void toCrypt() {
	long long p, q;//prime numbers
	long long n;//public key 
	long long n1;//possible ways for prime numbers
	long long e;//indicator of power of first-starting message
	long long m;//basis of power and first-starting message
	long long b;//temporary valuable for raising a number
	long long c;//crypted value

	cout << "Insert message to crypt: ";
	cin >> m;

	cout << "Insert p and q, which is coprime: ";
	cin >> p >> q;
	cout << "Insert a power of number(e): ";
	cin >> e;

	n = p * q;
	
	n1 = ((p - 1) * (q - 1));
	
	b = pow(m, e);
	
	c = b % n1;
	cout << "Crypt message is: " << c;
}

int main() {
	
	toCrypt();
	return 0;
}