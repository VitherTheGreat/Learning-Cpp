#include <iostream>
#include <string>

using namespace std;
// Memasukkan kalimat dan mengulai berapa kali

int main() {
	int l; // Loop
	string t; // Text input
	
	string a;
	getline (cin, a);
	cout << "Enter the text..." << endl ;
	getline (cin, t);
	
	cout << "........." << endl;
	cout << "How many times you want to repeat it... " ;
	cin >> l ;
	
	for (int i = 1; i <= 5; ++i) {
        cout << a << endl;
	for (int i = 1 ; i <= l; ++i) {
        cout << t << endl;
    }
}