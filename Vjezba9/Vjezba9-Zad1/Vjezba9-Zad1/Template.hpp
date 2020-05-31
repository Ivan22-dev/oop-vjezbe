#pragma once
#ifndef Template.hpp
#include <iostream>

template <typename T>
void sortNiz(T* clanovi, int brojac) {
	for (int i = 1; i < brojac; ++i) {
		for (int j = brojac - 1; j >= i; --j) {
			if (clanovi[j - 1] > clanovi[j]) {
				std::swap(clanovi[j - 1], clanovi[j]);
			}
		}
	}
}
template <>
void sortNiz(char* clanovi, int brojac) {
	for (int i = 1; i < brojac; ++i) {
		for (int j = brojac - 1; j >= i; --j) {
			if (tolower(clanovi[j - 1]) > tolower(clanovi[j])) {
				std::swap(clanovi[j - 1], clanovi[j]);
			}
		}
	}
}

#endif