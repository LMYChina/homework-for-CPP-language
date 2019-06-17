#include <iostream>
using namespace std;
class HanXin{
	public:
		HanXin();
		void line3(int n);
		void line5(int n);
		void line7(int n);
		void showMany();
	private:
		int num,N3,N5,N7; 
};
HanXin::HanXin()
{}
void HanXin::line3(int n)
{
	N3=n;
}
void HanXin::line5(int n)
{
	N5=n;
}
void HanXin::line7(int n)
{
	N7=n;
}
void HanXin::showMany()
{
	int i;
	for(i=10;i<=100;i++)
	{
		if(i%3==N3&&i%5==N5&&i%7==N7)
		{
			num=i;
			cout<<num<<endl;
			break;
		}
	}
	if(i>100)cout<<"Impossible"<<endl;
}
int main() {

    int n, n1, n2, n3;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2 >> n3;

        HanXin hx;  //韩信

        hx.line3(n1);  //3人一排

        hx.line5(n2);   //5人一排

        hx.line7(n3);   //7人一排

        hx.showMany();

    }
    return 0;
}
