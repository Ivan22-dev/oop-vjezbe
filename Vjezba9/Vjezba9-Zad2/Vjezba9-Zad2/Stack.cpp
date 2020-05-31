#include "Stack.hpp"
using namespace std;

template<typename T> Stack<T>::Stack(int broj) {
	niz = new T[broj];
	brojClanova = broj;
	vrh = -1;
}
template<typename T> Stack<T>::~Stack() {
	delete[] niz;
}
template<typename T> void Stack<T>::push(T clan) {
	if (is_full()) {
		cout << "Stog je pun, ne mozemo dodavati nove clanove!" << endl;
	}
	else {
		niz[++vrh] = clan;
	}
}
template<typename T> T Stack<T>::pop() {
	if (is_empty()) {
		cout << "Ne mozemo skidati clanove, stog je prazan!" << endl;
		return -1;
	}
	else {
		return niz[vrh--];
	}
}
template<typename T> bool Stack<T>::is_empty()  {
	return (vrh == -1);
}
template<typename T> bool Stack<T>::is_full() {
	return (vrh == brojClanova - 1);
}
template<typename T> void Stack<T>::print()  {
	if (is_empty()) {
		cout << "Stog je prazan!" << endl;
	}
	else {
		for (int i = 0; i <= vrh; ++i) {
			cout << niz[i] << " ";
		}
		cout << endl;
	}
}