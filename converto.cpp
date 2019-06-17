#include<iostream>
#include<cmath>
using namespace std;
class Number{
	public:
		Number(int n,int sys)
		{
			number=n;
			system=sys;
		}
		Number converto(int s)
		{
			long num,tonum=0;
			num=number;
			for(int i=0;num>0;i++)
			{
				tonum+=pow(10,i)*(num%s);
				num-=(num%s);
				num/=s;
			}
			Number N2(tonum,s);
			return N2;
		}
		void show()
		{
			cout<<number<<endl;
		}
	private:
		long number;
		int system;
};
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1是10进制正整数
        Number no3 = no1.converto(n2);  //no3是n2进制的正整数
        no3.show();//输出结果
    }
    return 0;
}
