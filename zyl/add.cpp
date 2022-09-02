#include "add.h"
using namespace std;

add::add(int num) {
	n = num;
	if (n < 100) {
		while (n > 80) {
			n--;
		}
	}
}
