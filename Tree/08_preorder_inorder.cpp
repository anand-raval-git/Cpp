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
    this->left = NULL;
    this->right = NULL;
    }
};
Node*lvlorder(Node *root)
{
    queue<Node*>q;
    q.push(root);

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
int FindPosition(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
Node* buildTreePreorderInorder(int PreOrder[],int& PreIndex,int size,int InOrder[],int InOrderStart,int InOrderEnd)
{
    //base case
    if(PreIndex>=size || InOrderStart>InOrderEnd)
    {
        return NULL;
    }

    //step A
    int element = PreOrder[PreIndex++];
    Node* root = new Node(element);
    int pos = FindPosition(InOrder,size,element);

    //step b root left solve
    root->left = buildTreePreorderInorder(PreOrder,PreIndex,size,InOrder,InOrderStart,pos-1);

    //step c root right solve
    root->right = buildTreePreorderInorder(PreOrder,PreIndex,size,InOrder,pos+1,InOrderEnd);

    return root;
}
int main()
{
    int InOrder[] = {40,20,50,10,60,30,70};
    int PreOrder[] = {10,20,30,40,50,60,70};
    int size=7;
    int PreOrderIndex = 0;
    int InOrderStart = 0;
    int InOrderEnd = size-1;

    cout<<"Building tree"<<endl;
    Node* root = buildTreePreorderInorder(PreOrder,PreOrderIndex,size,InOrder,InOrderStart,InOrderEnd);
    
    cout<<"Printing lvl order traversal"<<endl;
    lvlorder(root);
    return 0;
}