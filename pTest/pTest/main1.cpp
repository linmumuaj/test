#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <WinSock2.h>
#pragma comment(lib,"ws2_32.lib")

using namespace std;

typedef struct _sdl_frame {

	int v1;
	int v2;
	int v3[4];

}sdl_frame;

int main11() {

	/*sdl_frame frame;
	int* buf = (int*)malloc(sizeof(sdl_frame));
	int bp[6] = {0x05, 0x08, 0x02, 0x03, 0x1A, 0x01};

	memcpy(buf, &bp, sizeof(sdl_frame));
	memcpy(&frame, buf, sizeof(sdl_frame));

	cout << hex<< setw(2)<< setfill('0')<< frame.v3[2] << endl;*/

	/*uint32_t addr = 0x1ACFFC1D;
	cout << hex << setw(8) << setfill('0') << ntohl(addr) << endl;*/

	typedef uint8_t addr_t[3];
	uint32_t cu_addr = 0x001C2A08;
	addr_t addr;
	uint32_t tmp = cu_addr;// htonl(cu_addr);
	cout << "tmp: " << hex <<setw(8)<< setfill('0') << tmp << endl;
	uint8_t tmp2[4] = { 0,0,0,0 };
	memcpy(tmp2, (uint8_t*)&tmp, sizeof(uint32_t));
	memcpy(&addr, &tmp2[1], sizeof(addr_t));
	cout << "addr-t: " << typeid(addr).name() << endl;
	cout << "tmp2: " << hex << setw(2) << setfill('0') << (int)tmp2[0] << ";" << (int)tmp2[1] << ";" << (int)tmp2[2] << ";" << (int)tmp2[3] << endl;
	cout << "addr: " <<hex<< setw(2) << setfill('0') << (int)addr[0] << ";" << (int)addr[1] << ";" << (int)addr[2] << endl;
	cout << "sizeof(uint32_t): " << sizeof(uint32_t) << endl;
	cout << "sizeof(addr_t): " << sizeof(addr_t) << endl;
	

	return 0;
}



int main() {

	cout << 1 << endl;

	return 0;
}
