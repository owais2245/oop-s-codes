#include<iostream>
#include<string>
using namespace std;
class rectangle{

private:
	int l,b;
	public:
	void input(){
	cout<<"enter lenghth and breadth";
	cin>>l>>b;
}
void calArea()
{ 
cout<<"area ="<<(l*b)<<endl;

}
void calperi()
{ 
cout<<"perimeter ="<<2*(l+b)<<endl;

}
};

int main()
{
rectangle s;
s.input();
s.calArea();
s.calperi();

return 0;
}