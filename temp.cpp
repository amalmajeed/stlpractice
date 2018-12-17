#include<iostream>
#include<vector>

using namespace std;


//// TEMPLATE FUNCTION 

template <typename T>

T add(T a,T b)
{
	return a+b;

}

///TEMPLATE CLASS


template <class A>
class addition
{
	public:
		A a[2];
		A add();
		addition();

};

template <class A>
addition<A>::addition()
{
	cin>>a[0]>>a[1];
}

template <class A>
A addition<A>::add()
{
	return a[0]+a[1];
}


int main()
{
 // int a=1,b=2;
 // float x=10.2,y=7.3;
 // cout<<add<int>(a,b)<<"\n";
 // cout<<add<float>(x,y)<<"\n";
cout<<"INT\n";
addition<int> obj1;
cout<<"FLOAT\n";
addition<float> obj2;
cout<<obj1.add()<<"\n"<<obj2.add();


return 0;
}
