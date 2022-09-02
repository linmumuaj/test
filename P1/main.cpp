//#include <iostream>
//#include "main.h"
//using namespace std;
//
//int main() {
//
//	int s = 0;
//	for (s = 0; s < 5; s++) {
//		cout << s << endl;
//	}
//
//	add a(99);
//	
//	return 0;
//}
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

//#include <iostream>
//#include <string>
//#include <vector>
//#include <ctype.h>
//#include <typeinfo>
//using namespace std;

//template<class _Arg, class _Result>
//struct unary_function {
//	typedef _Arg argument_type;
//	typedef _Result result_type;
//};

//struct not_alpha{
//public:
//	bool operator() (const char& c) const {
//		return !(isalpha(c) || c == '_');
//	}
//};

//int main() {
//
//	string topic_str = "all1w/al_l/hello";
//	//cout << typeid(topic_str).name() << endl;
//	vector<string> parts;
//	int s = 0, e = -1;
//	do {
//
//		e = topic_str.find('/', s);
//		parts.push_back(topic_str.substr(s,(e==-1)?-1:e-s));
//		s = e + 1;
//
//	} while (e != -1);
//	for (vector<string>::iterator it = parts.begin(); it != parts.end(); ++it) {
//		cout << *it << endl;
//		//cout << typeid(*it).name() << endl;
//	}
//	string lo = "all";
//	if (parts[0] != lo) {
//		string topic_new = "";
//		vector<string>::const_iterator pi = parts.begin();
//		while (pi != parts.end()) {
//			if ((pi + 1) != parts.end()) {
//				topic_new += pi->substr(0, find_if(pi->begin(), pi->end(), not_alpha())- pi->begin());
//			}
//			else {
//				topic_new += *pi;
//			}
//			if (++pi != parts.end()) {
//				topic_new += "/";
//			}
//		}
//		cout << topic_new << endl;
//	}
//	
//	return 0;
//}

//int main() {
//
//	cout << "正常" << endl;
//
//
//#if 1
//	cout << "调试" << endl;
//#if 1
//	cout << "第二层" << endl;
//#endif
//	cout << "end" << endl;
//#endif
//
//	return 0;
//}

//#define xyz "just for test"
//#ifdef xyz
//#error "wrong"
//#endif
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "main" << endl;
//	return 0;
//}


