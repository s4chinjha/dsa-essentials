#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left = right = NULL;
	}
};


//level order print
//level_order_traversal

void levelOrderTraversal(node* root){

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* temp = q.front();
		if(temp == NULL){
			cout << endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			q.pop();
			cout << temp->data<<" ";

			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}

	}

	return;
}


//build in the format of the levelOrderBuild

node *levelOrderBuild(){

	int d;cin>>d;

	node* root = new node(d);  

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* current = q.front();
		q.pop();

		//next two children of the current root

		int c1,c2;
		cin >>c1>>c2;

		if(c1!=-1){
			current->left = new node(c1);	
			q.push(current->left);

		}
		if(c2!=-1){
			current->right = new node(c2);	
			q.push(current->right);
		}		

	}
	return root;
}


//Helper Function: Height of the tree
int height(node* root){

	//edge case
	if(root==NULL){
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	return max(h1,h2)+1;
}


int main(){

	node* root = levelOrderBuild();
	levelOrderTraversal(root);
	cout << height(root);
	return 0;
}