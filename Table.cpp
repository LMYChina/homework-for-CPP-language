#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
class Table{
  public:
  Table(int r,int c);
  void show();
  void set(int r,int c,int data);
  void addRow();
  void addColumn();
  void deleteRow();
  void deleteColumn();
  private:
  int row;
  int column;
  vector<int>**table;
}
Table::Table(int r,int c)(
  row=r;
  column=c;
  table=(int**)malloc(sizeof(int)*row);
  for(int i=0;i<column;i++)a[i]=(int*)malloc(sizeof(int)*column);
)
void Table::set(int r,int c,int data)(
  a[r][c]=data;
)
void Table::addRow()
{
  table=(int**)realloc(sizeof(int)*(++row));
}
void Table::deleteRow()
{
  table=(int**)realloc(sizeof(int)*(--row));
}
void Table::addColumn()
{
  column++;
  for(int i=0;i<column;i++)a[i]=(int*)realloc(sizeof(int)*column);
}
void Table::deleteColumn()
{
  column--;
  for(int i=0;i<column;i++)a[i]=(int*)realloc(sizeof(int)*column);
}
void Table::show()
{
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      cout<<table[i][j]<<" "; 
    }
    cout<<endl;
  }
}
int main() {
  Table tb;
  tb.show();
  tb.addRow();
  tb.show();
  tb.addColumn();
  tb.show();
  Table tb1(5,5);
  tb1.show();
  tb1.set(1,1,30);
  tb1.set(2,2,"hello");
  tb1.show();
  tb1.delRow(1);
  tb1.show();
  tb1.delColumn(1);
  tb1.show();
  return 0;
}
