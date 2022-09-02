#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct _sbt_t {
	int value;

	uint16_t size;
	uint16_t l;
	uint16_t r;

}sbt_t;

void bipread(int* bpb, int* read, int size) {
	int i;
	for (i = 0; i < size; i++) {
		read[i] = bpb[i];
	}
}

int main0() {

	/*int* memory;
	memory = (int*)malloc(6);
	memset(memory, 0, 6);
	memory[1] = 3;
	cout << memory[1] << endl;*/

	/*sbt_t* sbt;
	sbt = (sbt_t*)malloc(3 * sizeof(sbt_t));
	sbt_t s1;
	s1.value = 1;
	s1.size = 2;
	s1.l = 3;
	s1.r = 4;

	memset(sbt, 0, 3 * sizeof(sbt_t));
	sbt[1] = s1;
	cout << sizeof(sbt) << endl;*/

	/*int** arr;
	arr = (int**)malloc(4 * sizeof(int*));
	cout << sizeof(arr) << endl;*/

	//int power = 3;
	//int factor = 8;
	//uint16_t sz_memory = 585;
	//uint8_t* memory;
	//uint8_t** bitmap;
	//uint8_t* m;
	//memory = (uint8_t*)malloc(sz_memory);
	//memset(memory, 66, sz_memory);
	//bitmap = (uint8_t**)malloc((power + 1) * sizeof(uint8_t*));
	//int i;
	//for (i = 1, bitmap[0] = m = memory; i <= power; ++i)
	//{
	//	bitmap[i] = m + (factor * ((1 << (3 * i - 3)) - 1)) / 7 + 1;
	//}

	///*cout << sizeof(bitmap[0]) << endl;
	//cout << sizeof(bitmap[1]) << endl;
	//cout << sizeof(bitmap[2]) << endl;
	//cout << sizeof(bitmap[3]) << endl;*/

	//bitmap[1][2] = 45;
	////cout << (int)bitmap[1][2] << endl;
	//cout << sizeof(bitmap) << endl;

	/*int power, factor, amount;
	amount = 585;
	for (power = 0, factor = amount; factor > 8; power++)
	{
		factor = (factor + 7) >> 3;
	}*/

	static int read[30];
	int size = 30;
	int bpb[30];
	for (int i = 0; i < 30; i++) {
		bpb[i] = i + 1;
	}
	bipread(bpb, read, size);
	cout << read[23] << endl;

	return 0;
}


