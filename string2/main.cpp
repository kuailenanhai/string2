#include <iostream>
#include<string>

using namespace std;

int main ()
{
	string s("hello");
	cout<< "the size of hello:"<< s.size()<<endl;
	string::size_type a=s.size ();
	cout<<a <<endl;
	if(!s.empty())//����൱����s.size()!=0һ��������ʽ�������Ըı䣡�����ǣ�s.empty()
		cout<<s<<endl;
	string s1="hello"+(","+s);//+��������Ҫ��һ����string���ַ���
	cout<<s1<<endl;
	system("pause");
	return 0;
}