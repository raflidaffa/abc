// Program mengalikan digit ke-10 NPM sebanyak x kali, dimana x merupakan nilai digit ke 9 NPM
//digit 9 = 3, digit 10 = 1
#include <iostream>
using namespace std;

// Fungsi rekursif untuk mengalikan digit ke-10 NPM sebanyak x kali
int perkalian(int digit_9, int digit_10){
	if (digit_9 == 0)
		return 1;
	else 
		return perkalian(digit_9-1,digit_10)*digit_10;

}
int main (){
    cout<<"Hasil perkaliannya adalah : "<<perkalian(3,1);

}
