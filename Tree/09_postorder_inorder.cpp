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
Node* buildTreePostOrderInorder(int PostOrder[],int& PostIndex,int size,int InOrder[],int InOrderStart,int InOrderEnd)
{
    //base case
    if(PostIndex>=size || InOrderStart>InOrderEnd)
    {
        return NULL;
    }

    //step A
    int element = PostOrder[PostIndex];
    PostIndex--;
    Node* root = new Node(element);
    int pos = FindPosition(InOrder,size,element);

    //step b root right solve
    root->right = buildTreePostOrderInorder(PostOrder,PostIndex,size,InOrder,pos+1,InOrderEnd);

    //step c root left solve
    root->left = buildTreePostOrderInorder(PostOrder,PostIndex,size,InOrder,InOrderStart,pos-1);


    return root;
}
int main()
{
    int InOrder[] = {40,20,10,50,30,60};
    int PostOrder[] = {40,20,50,60,30,10};
    int size=6;
    int PostOrderIndex = size-1;
    int InOrderStart = 0;
    int InOrderEnd = size-1;

    cout<<"Building tree"<<endl;
    Node* root = buildTreePostOrderInorder(PostOrder,PostOrderIndex,size,InOrder,InOrderStart,InOrderEnd);
    
    cout<<"Printing lvl order traversal"<<endl;
    lvlorder(root);
    return 0;
}