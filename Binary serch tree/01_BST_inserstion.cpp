#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        this->left =  NULL;
        this->right = NULL;
    }
};
void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}
Node* insertbst(Node*root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(root->data > data)
    {
        //insert in left
        root->left=insertbst(root->left,data);
    }
    else
    {
        //insert in right
        root->right=insertbst(root->right,data);
    }
    return root;
}
void TakeInput(Node* &root)
{
    int data;
    cin>>data;
    
    while(data!=-1)
    {
        root = insertbst(root,data);
        cin>>data;  
    }
}
int main()
{
    Node* root = NULL;
    cout<<"Enter data for node"<<endl;
    TakeInput(root);
    cout<<"Printing BST"<<endl;
    levelOrderTraversal(root);
    return 0;
}