#include <iostream>
using namespace std;

void tukar(int& a, int& b, int& c) {
    int temp;
    temp = 0;
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    
	if (b > c) {
        temp = b;
        b = c;
    	c = temp;
    }
    
}

int main() {
    int a = 114, b = 22, c = 13;
    tukar(a, b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
