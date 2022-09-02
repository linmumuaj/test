//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include <string>
//#include <vector>
//
//using namespace std;

//void someFunction();
//
//int main()
//{
//	someFunction();
//	cout << "main" << endl;
//	return 0;
//}
//
//void someFunction()
//{
//	cout << "This program terminates with the exit function.\n";
//	cout << "Bye!\n";
//	exit(-1);
//	cout << "This message will never be displayed\n";
//	cout << "because the program has already terminated.\n";
//}

//int main() {
//
//	/*const char* str = "udp://10.65.39.10:8080";
//	int ret;
//	ret = strncmp(str, "udp://", 6);
//	cout << "ret: " << ret << endl;*/
//	vector<int> v1, v2, v3;
//	vector<int>::iterator iter;
//
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	v2.push_back(1);
//	v2.push_back(2);
//
//	cout << "v1 = ";
//	for (iter = v1.begin(); iter != v1.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	cout << "v2 = ";
//	for (iter = v2.begin(); iter != v2.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	v2 = v1;
//	cout << "v2 = ";
//	for (iter = v2.begin(); iter != v2.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	v2.assign(v1.begin(), v1.end());
//	cout << "v2 = ";
//	for (iter = v2.begin(); iter != v2.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	v3.assign(7, 3);
//	cout << "v3 = ";
//	for (iter = v3.begin(); iter != v3.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << endl;
//	
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//#include <time.h>
//
//#ifdef _WIN32
//#include <getopt.h>
//#include <windows.h>
//#include <direct.h>
//#include <io.h>
//#else
//#include <unistd.h>
//#include <getopt.h>
//#endif
//
//#include <iostream>
//using namespace std;
//
////参考http://blog.csdn.net/mr_jj_lian/article/details/6835137
////getopt -bcde
////getopt -a aa -b bb -c cc -d dd -f ff
//int main(int argc, char* argv[])
//{
//    int ch;
//    // opterr = 0;
//    while ((ch = getopt(argc, argv, "a:b:c:de")) != -1)
//    {
//        switch (ch)
//        {
//        case 'a':
//            printf("option a=%s\n", optarg);
//            break;
//        case 'b':
//            printf("option b=%s\n", optarg);
//            break;
//        case 'c':
//            printf("option c=%s\n", optarg);
//            break;
//        case '?':
//            printf("无效的选项字符 \'%c\'!\n", (char)optopt);
//            break;
//        case ':':
//            printf("缺少选项参数！\n");
//            break;
//        default:
//            printf("other option=%c\n", ch);
//            break;
//        }
//    }
//    printf("optopt +%c\n", optopt);
//    printf("run here opterr=%d\n", opterr);
//    return 0;
//}
//////getopt -n
//////getopt -g
//////getopt -l xiaohua
//////getopt -ngl forever
////int main3(int argc, char** argv)
////{
////    int oc;                     /*选项字符 */
////    char* b_opt_arg;            /*选项参数字串 */
////
////    while ((oc = getopt(argc, argv, "ngl:")) != -1)//:表示必须传入参数。
////    {
////        switch (oc)
////        {
////        case 'n':
////            printf("My name is Lyong.\n");
////            break;
////        case 'g':
////            printf("Her name is Xxiong.\n");
////            break;
////        case 'l':
////            b_opt_arg = optarg;
////            printf("Our love is %s\n", optarg);
////            break;
////        }
////    }
////    return 0;
////}
////
//////getopt -l
////int main4(int argc, char** argv)
////{
////    int oc;                     /*选项字符 */
////    char* b_opt_arg;            /*选项参数字串 */
////
////    while ((oc = getopt(argc, argv, "ngl:")) != -1)
////    {
////        switch (oc)
////        {
////        case 'n':
////            printf("My name is Lyong.\n");
////            break;
////        case 'g':
////            printf("Her name is Xxiong.\n");
////            break;
////        case 'l':
////            b_opt_arg = optarg;
////            printf("Our love is %s\n", optarg);
////            break;
////        case '?':
////            printf("arguments error!\n");
////            break;
////        }
////    }
////    return 0;
////}
//////getopt -a
//////getopt -l
////int main2(int argc, char** argv)
////{
////    int oc;                     /*选项字符 */
////    char ec;                             /*无效的选项字符*/
////    char* b_opt_arg;            /*选项参数字串 */
////
////    opterr = 0;
////    //在调用getopt()之前，将opterr设置为0，这样就可以在getopt()函数发现错误的时候强制它不输出任何消息。
////    while ((oc = getopt(argc, argv, ":ngl:")) != -1)
////    {
////        switch (oc)
////        {
////        case 'n':
////            printf("My name is Lyong.\n");
////            break;
////        case 'g':
////            printf("Her name is Xxiong.\n");
////            break;
////        case 'l':
////            b_opt_arg = optarg;
////            printf("Our love is %s\n", optarg);
////            break;
////        case '?':
////            ec = (char)optopt;
////            printf("无效的选项字符 \' %c \'!\n", ec);
////            break;
////        case ':':
////            printf("缺少选项参数！\n");
////            break;
////        }
////    }
////    return 0;
////}

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

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
	addr_t addr = { 1,2,3 };
	//cout << (uint8_t*)addr << endl;
	

	/*typedef unsigned char uint8_t;
	uint8_t a = 67;
	cout << a << endl;  ---结果是：C */


	return 0;
}


