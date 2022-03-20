#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float x;
	cout<<"Vvedite chislo"<<endl;
	cin>>x;
	if (x<0) cout<<"chislo otritelnoe"<<endl;
    	if (x>0) cout<<"chislo polozitelnoe"<<endl;
    	if (x==0) cout<<"chislo = 0"<<endl;
	system("pause");
}
