#include "Stack.cpp"
#include <type_traits>

int main() {
	Stack<int> integerStog(10);
	Stack<float> floatStog(12);
	Stack<char> charStog(14);
	integerStog.print();
	integerStog.push(5);
	integerStog.push(6); 
	integerStog.push(7);
	integerStog.print();
	integerStog.pop();
	integerStog.pop();
	integerStog.print();
	integerStog.pop();
	if (integerStog.is_empty()) {
		cout << "Stog je prazan!" << endl;
	}
	else {
		cout << "Stog nije prazan!" << endl;
	}
	floatStog.push(5.8);
	floatStog.push(6.3);
	floatStog.push(7.1);
	floatStog.print();
	floatStog.pop();
	floatStog.pop();
	floatStog.print();
	floatStog.pop();
	if (floatStog.is_empty()) {
		cout << "Stog je prazan!" << endl;
	}
	else {
		cout << "Stog nije prazan!" << endl;
	}
	charStog.push('c');
	charStog.push('j');
	charStog.push('s');
	charStog.print();
	charStog.pop();
	charStog.pop();
	charStog.print();
	charStog.pop();
	if (charStog.is_empty()) {
		cout << "Stog je prazan!" << endl;
	}
	else {
		cout << "Stog nije prazan!" << endl;
	}
	return 0;
}

