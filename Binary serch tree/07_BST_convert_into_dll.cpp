#include<iostream>
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
Node *bstu(int inorder[],int s,int e)
{
    if(s>e)
    return NULL;

    int mid = (s+e)/2;
    int element = inorder[mid];
    Node*root = new Node(element);

    root->right = bstu(inorder,mid+1,e);
    root->left = bstu(inorder,s,mid-1);

    return root;
}
void ConvertIntoDll(Node*root,Node* &head)
{
    //base case
    if(root == NULL)
    return;
    
    //right subtree into dll
    ConvertIntoDll(root->right,head);

    //connect right dll with head
    root->right = head;

    if(head!= NULL)
    head->left = root;

    //update head
    head = root;

    //left subtree linked list
    ConvertIntoDll(root->left,head);
}
void print(Node*head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->right;
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
    int inorder[] = {1,2,3,4,5,6,7,8,9};
    int s = 0;
    int e = 8;
    Node*root = bstu(inorder,s,e);
    Node*head = NULL;
    ConvertIntoDll(root,head);
    cout<<"After converting into dll"<<endl;
    print(head);
    return 0;
}