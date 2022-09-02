#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	//typedef struct _xml_node_t {
	//	int a;
	//	int b;

	//} xml_node_t;
	//typedef xml_node_t xml_tree_t;
	//xml_tree_t s;
	//cout << typeid(s).name() << endl;

	/*const char* s = "+12";
	int ret;
	ret = atoi(s);
	cout << ret << endl;*/

	typedef unsigned char uint8_t;
	typedef uint8_t addr_t[3];
	addr_t addr = {67,2,3};
	
	cout << (uint8_t*)&addr << endl;


	/*typedef unsigned char uint8_t;
	uint8_t a = 67;
	cout << a << endl;  ---½á¹ûÊÇ£ºC */


	return 0;
}