#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int x,y=0;
	cout<<"Vvedite chisla"<<endl;
	cin>>x;
	if (x<0) y=1;
    while (x!=0)
    {
          cin>>x;
          if (x<0) y=1;
    }
    if (y==0) cout<<"Vse chisla pologitelnie"<<endl;
    if (y==1) cout<<"Ne vse chisla pologitelnie"<<endl;

	system("pause");
}
