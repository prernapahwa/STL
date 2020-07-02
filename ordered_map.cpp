#include<iostream>
#include<string.h>
#include<map>
using namespace std;
int main() {
	map <char,int> fre;//empty
	map <char,int> fre2; 
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;s1[i]!='\0';i++) {
		fre[s1[i]]++;
	}
	for(int i=0;s2[i]!='\0';i++) {
		fre2[s2[i]]++;
	}
	int flag=0;
	map<char,int>::iterator p=fre.begin();
	map<char,int>::iterator n=fre2.begin();
	while(n!=fre2.end()&&p!=fre.end()) {
		if(n->second!=p->second||n->first!=p->first) {
			cout<<"No";
			flag=1;
			break;
		}
//		cout<<n->second<<" "<<n->first<<endl;	
//		cout<<p->second<<" "<<p->first<<endl;
		n++;
		p++;
	}
	if(flag==0) {
		cout<<"Yes";
	}
}
