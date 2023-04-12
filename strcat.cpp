#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char firstName[50] = "Rafli Daffa ";
	char lastName[50] = "Pratama";
	char *fullName = strcat(firstName,lastName);
	cout << fullName;
}
