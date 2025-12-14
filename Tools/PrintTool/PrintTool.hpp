#pragma once
#include<vector>
#include<iostream>
using std::vector;
template<typename VEC>
void TypePrint(const vector<VEC>& vec) {
	for (const VEC& x : vec) {
		std::cout << x << ' ';
	}
	std::cout << std::endl;
}
template<typename ARR, size_t N>
void TypePrint(const ARR(&vec)[N]) {
	for (const ARR& x : vec) {
		std::cout << x << ' ';
	}
	std::cout << std::endl;
}