#include<stdio.h>
#include<stdlib.h>
struct bintree
{
    int data;
    struct bintree *left, *right;
};

struct bintree *insert(int num)
{

struct bintree *node=(struct bintree *)malloc(sizeof(struct bintree));
    node->data=num;
    node->right= NULL;
    node->left=NULL;
    return node;
}

int check(struct bintree *node)
{
    if (node==NULL)
        return 0;
    if ((node->left==NULL)&&(node->right==NULL))
        return 1;
    return 0;
}

int sum(struct bintree *root)
{
    int sum1=0;
    if (root != NULL)
    {
        
        if (check(root->left))
            sum1+=root->left->data;
        else
            sum1+=sum(root->left);
        
        sum1+=sum(root->right);
    }
    
    return sum1;
}

int main()
{
    struct bintree *root  = insert(25);
    root->left                = insert(16);
    root->right               = insert(20);
    root->right->left         = insert(10);
    root->right->right        = insert(16);
    root->right->right->left  = insert(14);
    root->left->left          = insert(56);
    root->left->right         = insert(17);
    root->left->right->right  = insert(1);
    printf("Sum of left leaves is %d\n",sum(root));
    return 0;
}
