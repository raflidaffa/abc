#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char data[8][100] = {"2217051131Rafli Daffa Pratama",
						"2217051036Muhammad Hafiz Zidane",
						"2217051114Abi Ihza Rafi Alfano",
						"2217051010Akbar Baihaqi",
						"2217051132Pebrian Dwi Putra",};
	char *endPtr;
	for(int i = 0; i < 5; i++){
		double value = strtod(data[i], &endPtr);
		cout << "Nama : " << endPtr << endl;
		cout << "Kelas : " << value << endl;
		cout << endl;
	}
}
