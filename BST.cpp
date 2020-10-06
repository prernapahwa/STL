#include<iostream>
using namespace std;
struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};  

BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	(*newNode).data = data;//is same as newNode->data=data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) {
		//emmpty tree
		root = GetNewNode(data);
	}
	else if(data <= root->data) {
		//not empty tree
		root->left = Insert(root->left,data);
	}
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}

int main() {
	BstNode* root; //pointer to root node.
	root = NULL; //setting tree as empty
	cout<<"Enter number to be searched";
	int num;
	root = Insert(root,15);
	root = Insert(root,10);
	cin>>num;
	if(Search(root,num) == true) cout<<"found"<<endl;
	else {
		cout<<"NOT Found";
	}
	
}
