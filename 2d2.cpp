#include<iostream>>
using namespace std;
int main()

{
    int x[3][3]={};
    //take input

    cout<<"enter the 3*3 array elements: ";
    for(int i=0;i<3;++i)
  {
      {
        for(int j=0;j<3;++j)
            cin>>x[i][j];
        }

    }
//for output
    for(int i=0;i<3;++i)
  {
      {
        for(int j=0;j<3;++j)
            cout<<x[i][j];
        }
    cout<<endl;
    }
}
