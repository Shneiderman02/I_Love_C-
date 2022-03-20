#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int x,y=0;
	cout<<"Vvedite chislo"<<endl;
	cin>>x;
	while (x>0)
    {
        y=y*10+x%10;
        x=x/10;
    }
    cout<<y<<endl;
	system("pause");
}
