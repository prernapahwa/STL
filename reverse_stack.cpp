#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &st,int element) {
	if(st.empty()) {
		st.push(element);
		return;
	}
	int topelement=st.top();
	st.pop();
	insert(st,element);
	st.push (topelement);
}
void reverse (stack<int> &st) {
	if(st.empty()) {
		return;
	}
	int element=st.top();
	st.pop();
	reverse(st);
	insert(st,element);
}
int main() {
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	//initially stack was 5 4 3 2 1 (1 at bottom and 5 on top)
	reverse(st);
	while(!st.empty()) {
		cout<<st.top()<<endl;
		st.pop();
	}
	
}
