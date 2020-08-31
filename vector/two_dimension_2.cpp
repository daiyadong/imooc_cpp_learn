#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int N=5, M=6; 
	vector<vector<int> > obj(N, vector<int>(M)); //定义二维动态数组5行6列 

	for(int i=0; i< obj.size(); i++)//输出二维动态数组 
	{
		for(int j=0;j<obj[i].size();j++)
		{
			cout<<obj[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
