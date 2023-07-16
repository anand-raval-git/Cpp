#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
int FindMaxVal(Node*root)
{
    Node* temp = root;
    if(temp == NULL)
    {
    return -1;
    }

    while(temp->right!= NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}
// void levelOrderTraversal(Node* root ) {
// 	queue<Node*> q;
// 	//initially
// 	q.push(root);
// 	q.push(NULL);

// 	while(!q.empty()) {
// 		//A
// 		Node* temp = q.front();
// 		//B
// 		q.pop();
		
// 		if(temp == NULL) {
// 			cout << endl;
// 			if(!q.empty()) {
// 				q.push(NULL);
// 			}	
// 		}
// 		else {
// 			//C
// 			cout << temp->data << " ";
// 			//D
// 			if(temp -> left) {
// 				q.push(temp ->left);
// 			}
// 			if(temp ->right) {
// 				q.push(temp->right);
// 			}
// 		}
		
		
// 	}
// }
Node* insertdata(Node*root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    //left
    if(root->data >data)
    {
        root->left = insertdata(root->left,data);
    }
    //right
    else
    {
       root->right = insertdata(root->right,data);
    }
    return root;
}
void takeinput(Node*&root)
{
    int data;
    cin>>data;

    while(data != -1)
    {
        root = insertdata(root,data);
        cin>>data;
    }
}
int main()
{
    Node*root = NULL;
    takeinput(root);
    // levelOrderTraversal(root);
    int max = FindMaxVal(root);
    cout<<"Max value is "<<max<<endl;
    return 0;
}