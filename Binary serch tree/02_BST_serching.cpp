#include<iostream>
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
bool CheckElement(Node*root,int target)
{
    //base case
    if(root == NULL)
    {
        return false;
    }
    //left serch
    if(root->data>target)
    {
        return CheckElement(root->left,target);
    }
    //founded
    else if(root->data == target)
    {
        return true;
    }
    //right serch
    else
    {
        return CheckElement(root->right,target);
    }
}
int main()
{
    Node*root = NULL;
    TakeInput(root);
    bool ans  = CheckElement(root,15);
    cout<<"Element present or not "<<ans<<endl;
    return 0;
}