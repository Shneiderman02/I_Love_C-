#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, max=-1000, min=1000,x;
	cout<<"Vvedite n"<<endl;
	cin>>n;
	int a[n];
	cout<<"Vvedite elementi massiva"<<endl;
	for (int i=0;i<n;i++)
    {
        cin>>x;
        a[i]=x;
        if (x<min) min=x;
        if (x>max) max=x;
    }
    cout<<"min="<<min<<"   max="<<max<< endl;

	system("pause");
}
