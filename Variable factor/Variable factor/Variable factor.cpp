#include <iostream>
#include <typeinfo>
#include <stdarg.h>

using namespace std;

template <typename T>
void print(T arg) {
	if (typeid(arg).name() == typeid((double)0.0).name()) {
		printf("float");
	}
	else if (typeid(arg).name() == typeid((int)1).name()) {
		printf("integer");
	}
	else if (typeid(arg).name() == typeid((const char*)'a').name()) {
		printf("fmt");
	}
	else {
		printf(typeid(arg).name());
	}
	printf(": ");
	std::cout << arg << std::endl; 
}
template <typename T, typename ...Types>
void print(T arg, Types ...args) {
		print(arg);
		print(args...);
}
int main() {
	print("%d %d %c %f\\n", 7, 8, 'A', 5.5);
}
