#include <iostream>
#include <vector>

using namespace std;

//int main() {
//	cout << "Hello, world!" << endl;
//	vector<int> vecInt;
//	for (int i = 0; i < 5; i++) {
//		vecInt.push_back(i+1);
//	}
//	for (vector<int>::iterator it = vecInt.begin(); it != vecInt.end(); ++it) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	return 0;
//}
int main() {
	vector<char> charVector;
	for (int i = 0; i < 10; i++) {
		charVector.push_back(i+'a');
	}

	for (vector<char>::iterator it = charVector.begin(); it != charVector.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}