#include<iostream>
#include<list>
using namespace std;

template<class forwarditerator, class T>

forwarditerator search( forwarditerator start, forwarditerator end,T key)
{
	while(start!=end)
	{
		if(*start==key)
		{
			return start;
		}
		start++;
	}
	return end;
}

int main()
{
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(5);
	l.push_back(3);
	
auto it==search(l.begin(),l.end(),5)
	{
		cout<<"element not present"
	}
	else
	{
		cout<<*it<<endl;
	}
	return 0;
}
