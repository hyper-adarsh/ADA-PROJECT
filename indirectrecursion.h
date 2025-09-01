

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node btnode;
btnode *tree;
int count;


btnode *insert(btnode *node, int ele)
{
    if (node == NULL)
    {
        node = (btnode *)malloc(sizeof(btnode));
        node->data = ele;
        node->lchild = node->rchild = NULL;
        count = count + 1;
    }
    else
    {
        if (count % 2 == 0)
            node->lchild = insert(node->lchild, ele);
        else
            node->rchild = insert(node->rchild, ele);
    }
    return node;
}
void inorder(btnode *tree);
void inorder(btnode *tree)
{
    if (tree != NULL)
    {
        inorder(tree->lchild);
        printf("\t%d", tree->data);
        inorder(tree->rchild);
    }
}
void preorder(btnode *tree);
void preorder(btnode *tree)
{
    if (tree != NULL)
    {
        printf("\t%d", tree->data);
        preorder(tree->lchild);
        preorder(tree->rchild);
    }
}
void postorder(btnode *tree);
void postorder(btnode *tree)
{
    if (tree != NULL)
    {
        postorder(tree->lchild);
        postorder(tree->rchild);
        printf("\t%d", tree->data);
    }
}

