#include<iostream>
#include<vector>
using namespace std;


void priv(std::vector<int> v)
{
	cout<<"PRIV"<<endl;
	for(std::vector<int>::iterator it=v.begin(); it!=v.end();it++)
	{
		cout<<*it<<endl;
	}
}

int main()
{
	std::vector<int> v(10);
	priv(v);
	for(int i=0;i<v.size();i++)
	{
		v[i]=i*10;
	}
	//priv(v);
	v.push_back(100);
	//cout<<v[10];
	//v.resize(15);
	priv(v);
	return 0;
}