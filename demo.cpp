#include <stdlib.h>
#include <iostream>
#include <string>

#include "fileTraverse.h"
#include <vector>


using namespace std;

int main()
{
	string str = "D:/data/fruit/";
	char buf[256];
	strcpy_s(buf, str.c_str());
	cout << buf << endl;

	CStatDir fileName;

	if (!fileName.SetInitDir(buf))
	{
		cout << "目录不存在!" << endl;
		system("pause");
		return 0;
	}

	vector<string> fileVector = fileName.BeginBrowseFilenames("*.*");	
	for (vector<string>::iterator it = fileVector.begin(); it != fileVector.end(); it++)	//递归遍历当前目录下的全部文件。
	{
		cout << *it << endl;
	}

	system("pause");
	return 0;

}
