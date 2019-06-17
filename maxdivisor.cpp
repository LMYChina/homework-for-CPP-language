#include<iostream>
using namespace std;
class Number{
	public:
		Number(int n);
		Number maxDivisor(Number N2);
		void show();
		int min(int a,int b);
	private:
		int num;
}; 
Number::Number(int n)
{
	num=n;
}
Number Number::maxDivisor(Number N2)
{
	int max;
	for(int i=1;i<=min(num,N2.num);i++)
	{
		if(num%i==0&&N2.num%i==0)
		{
			max=i;
		}
	}
	Number N3(max);
	return N3;
}
void Number::show()
{
	cout<<num<<endl;
}
int Number::min(int a,int b)
{
	return (a>b?b:a);
}
int main() 
{
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2;

        Number no1(n1), no2(n2);

        Number no3 = no1.maxDivisor(no2);  //最大公约数

        no3.show();

    }
    return 0;
}
