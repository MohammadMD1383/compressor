// g++ -O3 genbase.cpp -o genbase -lgmp -lgmpxx -ffast-math -flto -mtune=native -march=native

#include <iostream>
#include <fstream>
#include <string>
#include <gmpxx.h>

using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "missing required base number/too much arguments\n";
		return 1;
	}
	
	const string snum = argv[1];
	int num;
	
	try {
		num = stoi(snum);
	} catch (...) {
		cout << "argument is not in correct number format\n";
		return 2;
	}
	
	if (num > 65535 || num < 2) {
		cout << "number is too long/short\n";
		return 3;
	}
	
	string fname = "base-";
	fname += to_string(num);
	ofstream file(fname, ios::binary);
	
	string data;
	mpz_class sum;
	for (int expo = 2; expo <= 65535; expo++) {
		mpz_ui_pow_ui(sum.get_mpz_t(), num, expo);
		data = sum.get_str();
		data += "=";
		data += to_string(num);
		data += "^";
		data += to_string(expo);
		
		file << data << "\n";
	}
	
	file.close();
	
	return 0;
}