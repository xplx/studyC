//============================================================================
// Name        : studyC++.cpp
// Author      : wuxiaopeng
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char *s = "Golden Global View";

	memset(s, 'G', 6);

	//提交打印
	printf("%s", s);

	getchar();
	return 0;
}

