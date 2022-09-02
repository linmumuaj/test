//#include <iostream>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//
//void test(void* arg) {
//
//	//cout << (int)arg << endl;
//	//int* b = (int*)arg;
//	//cout << b << endl;
//	//cout << "-----------------------" << endl;
//	//cout << endl;
//	cout << typeid(((int*)arg)).name() << endl;
//
//}
//
//int main() {
//
//	int a = 2;
//	//test((void*)a);
//	cout << *(int*)&a << endl;
//
//	return 0;
//}

/*XML文件解析程序*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
//#include "expat.h"

using namespace std;

int main() {

	int a = 1;
	int* b = &a;
	int** c = &b;
	a = 2;
	cout << b << endl;
	cout << *c << endl;

	return 0;
}

