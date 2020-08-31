#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	vector<int>obj;
	for(int i=0;i<10;i++)
	{
		obj.push_back(i);   
	} 

	cout<<"直接利用数组："; 
	for(int i=0;i<10;i++)//方法一 
	{
		cout<<obj[i]<<" ";
	}

	cout<<endl; 
	cout<<"利用迭代器：" ;
	vector<int>::iterator it;//声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素 
	for(it=obj.begin();it!=obj.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}
