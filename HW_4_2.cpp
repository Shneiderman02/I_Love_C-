#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n,m, s=0,x;
	cout<<"Vvedite n"<<endl;
	cin>>n;
	cout<<"Vvedite m"<<endl;
	cin>>m;
	int a[n][m];
	cout<<"Vvedite elementi massiva"<<endl;
	for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
    {
        cin>>x;
        a[i][j]=x;
        if (x>0) s=s+x;

    }
    cout<<"sum="<<s<< endl;

	system("pause");
}
