#include<iostream>
#include<queue>
#include<map>
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
Node* BuildTree()
{
    int data;
    cout<<"Enter data : "<<endl;
    cin>>data;

    //base condition
    if(data == -1)
    {
        return NULL;
    }

    //create node;
    Node* root = new Node(data);

    //left side
    cout<<"Enter data for left part of "<<data<<" Node"<<endl;
    root->left = BuildTree();

    //right side
    cout<<"Enter data for right part of "<<data<<" Node"<<endl;
    root->right = BuildTree();

    return root;
}
Node*lvlorder(Node *root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout<<temp->data<<endl;
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
void printbottomview(Node*root)
{
    //base case
    if(root == NULL)
    return;

    //creating map
    map<int,int>topNode;

    //lvl order
    //creating a pair of queue
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair<Node*,int> temp = q.front();
        q.pop();

        Node*frontNode = temp.first;
        int hd = temp.second;

        topNode[hd] = frontNode->data;
        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    cout<<"Printing answer"<<endl;
    for(auto i: topNode)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{
    Node *root = BuildTree();
    printbottomview(root);
    return 0;
}