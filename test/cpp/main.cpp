#include <iostream>
#include <root.hpp>
#include <gmpxx.h>

using namespace std;

int main() {
	cout << "Hello World" << endl;
	test();
	mpz_class a("1656786126741274216724651764216745264732167451672462647167423742137");
	cout << a << endl;
	return 0;
}