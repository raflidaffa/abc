#include <iostream>
using namespace std;

int main(){
	int npm = 31;
	int *ptr = &npm;
		
	cout << "Nilai dari pointernya: " << *ptr << endl;
    cout << "Alamat tempat data NPM disimpan: " << ptr << endl;
    
    return 0;
}
