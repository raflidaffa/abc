#include <iostream>
using namespace std;

void absen(string name, int npm){
	cout<<name<<"_"<<npm;
}

int main(){
	string name;
	int npm;
	
	getline(cin,name);
	cin>>npm;
	
	absen(name,npm);
	
	return 0;
}
