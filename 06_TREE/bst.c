#include<stdio.h>
#include<stdlib.h>

typedef struct bstnode
{
    struct bstnode *left; 
    int data;
    struct bstnode *right; 
}bst;

//recursive insert
bst* insertR(bst *root,int key)
{
    bst *t=(bst *)malloc(sizeof(bst ));
    t->left=NULL;
    t->data=key;
    t->right=NULL;
    if(root==NULL)return t;
    if(root->data==key)return root;
    else if(root->data<key)root->right=insert(root->right,key);
    else root->left=insert(root->left,key);
    return root;
}

void inorder(bst *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("%d ",t->data);
        inorder(t->right);
    }
}

bst* insertI(bst *root,int key)
{
    root *p=root;
    bst *r=NULL;
    bst *t=(bst *)malloc(sizeof(bst));
    t->left=NULL;
    t->data=key;
    t->right=NULL;
    while(p!=NULL)
    {
        if(p->data==key)return  p;
        else if(p->data<key)
        {
            r=p;
            p=p->right;
        } 
        else
        {
            r=p;
            p=p->left;
        }
    }
    if(key<r->data)r->left=t;
    else r->right=t;

}
int main()
{
    bst *root=NULL;
    root=insertR(root,34);
    root=insertR(root,4);
    root=insertR(root,3);
    root=insertR(root,14);
    root=insertR(root,44);
    root=insertR(root,64);
    root=insertR(root,94);
    inorder(root);
}