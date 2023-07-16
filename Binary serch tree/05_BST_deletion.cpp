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
Node* findNodedeleteion(Node*root,int target)
{
    //base case
    if(root == NULL)
    {
        return NULL;
    }
    //left serch
    if(root->data>target)
    {
        return findNodedeleteion(root->left,target);
    }
    //founded
    else if(root->data == target)
    {
        return root;
    }
    //right serch
    else
    {
        return findNodedeleteion(root->right,target);
    }
}
// Node* deletionNode(Node*root,int target)
// {
//     if(root == NULL)
//     {
//         return root;
//     }

//     ///step-1
//     Node* temp = findNodedeleteion(root,target);
//     //delete temp
//     if(temp->left == NULL && temp->right == NULL)
//     {
//         //leaf node
//         delete temp;
//         return NULL;
//     }
//     else if(temp->left == NULL && temp->right != NULL)
//     {
//         Node*child = temp->right;
//         delete temp;
//         return child;
//     }
//     else if(temp->left != NULL && temp->right == NULL)
//     {
//         Node*child = temp->left;
//         delete temp;
//         return child;
//     }
//     else
//     {
//         int inorderpre = FindMaxVal(temp->left);
//         temp->data = inorderpre;
//         temp->left = deletionNode(temp->left,inorderpre);
//         return root; 
//     }
// }
Node* deleteNode(Node*root,int target)
{
    //base case
    if(root == NULL)
    return NULL;

    if(root->data == target)
    {
        //4 case
        if(root->left ==NULL && root->right ==  NULL)
        {
            delete root;
            return NULL;
        }
        else if(root->left == NULL && root->right != NULL)
        {
            Node* child = root->right;
            delete root;
            return child;
        }
        else  if(root->left != NULL && root->right == NULL)
        {
            Node*child = root->left;
            delete root;
            return child;
        }
        else
        {
            int inorderpre = FindMaxVal(root->left);
            root->data = inorderpre;
            root->left = deleteNode(root->left,inorderpre);
            return root;
        }
    }
    else if(target > root->data)
    {
        //right
        root->right = deleteNode(root->right,target);
    }
    else if(target < root->data)
    {
        //left
        root->left = deleteNode(root->left,target);
    }
    return root;
}
int main()
{
    Node* root = NULL;
    cout<<"Enter data for node"<<endl;
    TakeInput(root);
    cout<<"Printing BST"<<endl;
    levelOrderTraversal(root);
    deleteNode(root,100);
    cout<<"After deletion"<<endl;
    levelOrderTraversal(root);
    return 0;
}