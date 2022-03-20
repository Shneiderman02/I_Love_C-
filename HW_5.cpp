#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	string s,t="";
	cout<<"Vvedite stroky"<<endl;
    getline(cin, s);
    n=s.size();
    for(int i=0;i<n;i++)
    {
        if (s[i]=='A') t=t+"AA";
        if (s[i]!='A') t=t+s[i];
    }


	cout<<t<<endl;


	system("pause");
}
