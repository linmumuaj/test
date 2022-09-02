#include <iostream>
#include "main.h"
using namespace std;

int main() {

	int s = 0;
	for (s = 0; s < 5; s++) {
		cout << s << endl;
	}

	add a(99);
	
	return 0;
}
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	char c_src[] = "******";
//	char c_dst[] = "hello world.";
//	memcpy(c_dst, c_src, strlen(c_src));//复制c_src到c_dst2中，复制位置从c_dst2[0]开始
//	cout << c_dst << endl;//打印"******world."
//
//	double d_src[] = { 0,1,2,3 };
//	double d_dst[] = { 4,5,6,7 };
//	memcpy(d_dst, d_src, 2 * sizeof(double));
//
//	for (auto d : d_dst)cout << d << " ";//打印"0 1 6 7"
//	cout << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main()
//{
//    int dp[3];
//    memset(dp, 268, sizeof(dp));
//
//    for (int i = 0; i < 3; i++)
//        cout << dp[i] << " ";
//
//    return 0;
//}



