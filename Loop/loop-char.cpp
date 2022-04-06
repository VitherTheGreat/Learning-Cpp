#include <iostream>
#include <string>

using namespace std;
// Memasukkan kalimat dan mengulai berapa kali

int main() {
	
	string a;
	getline (cin, a);
	
	cout << "........." << endl;
	
	for (int i = 1; i <= 5; ++i) {
        cout << a << endl;
    }
}