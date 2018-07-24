#include <iostream>
#include<string>

using namespace std;

int main ()
{
	string s("hello");
	cout<< "the size of hello:"<< s.size()<<endl;
	string::size_type a=s.size ();
	cout<<a <<endl;
	if(!s.empty())//这就相当于是s.size()!=0一样这种形式还不可以改变！必须是！s.empty()
		cout<<s<<endl;
	string s1="hello"+(","+s);//+两侧至少要有一个是string型字符串
	cout<<s1<<endl;
	system("pause");
	return 0;
}