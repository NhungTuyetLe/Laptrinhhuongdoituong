#include <iostream>
using namespace std;

class Cong {
	int a, b;
	public:
		void nhap(){
			cout<<""; cin>>a;
			cout<<""; cin>>b;
		};
		int cong(){
			return a+b;
		}
			
};
int main(){
	Cong x;
	x.nhap();
	cout<<x.cong();
}
