//program macro utnuk mencetak bilangan terbesar (NPM Ganjil)
#include <iostream>
using namespace std;

#define MAX_NILAI(a,b) ((a>b) ? a : b)
int main(){
	int a = 3; //NPM digit ke 9
	int b = 1; //NPM digit ke 10

	cout<<"Bilangan terbesarnya adalah : "<<MAX_NILAI(a,b);
}
