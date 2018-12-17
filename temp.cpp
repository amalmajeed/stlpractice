#include<iostream>
#include<vector>

using namespace std;

template <typename T>

T add(T a,T b)
{
	return a+b;

}

int main()
{
 int a=1,b=2;
 float x=10.2,y=7.3;
 cout<<add<int>(a,b)<<"\n";
 cout<<add<float>(x,y)<<"\n";

return 0;
}
