#include<iostream>
#include<string>

using namespace std;

int main() {


	cout << "Ingrese un num" << "\n" << endl;
	int numero;
	cin >> numero;

	
	string s = to_string(numero);

	int sum = 0;

	for (int i = 0; i < s.length(); i++) {
		
		char a = s[i];
		
		int num = a - '0';
		
		sum += num;

	}
	
	cout << "Tu numero tiene" << "\n" << s.length() << " "  << "Digitos" << endl;
	cout << "La suma de los digitos es" << "\n" << " " << sum << endl;
}