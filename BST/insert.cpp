#include <iostream>

struct Node
{
    int val;
    Node *left, *right;
    Node(int data) : val(data), left(nullptr), right(nullptr) {}
};

Node *insert(Node *head, int data)
{
    if (head == nullptr)
        return new Node(data);
    if (head->val > data)
        head->left = insert(head->left, data);
    else
        head->right = insert(head->right, data);
    return head;
}

void PrintNode(Node *head)
{
    if (head == nullptr)
        return;
    PrintNode(head->left);
    std::cout << head->val << " ";
    PrintNode(head->right);
}

int main()
{
    int N, val;
    Node *head;
    std::cout << "Number of Nodes: ";
    std::cin >> N;
    std::cout << "Enter node values: ";
    std::cin >> val;
    N--;
    head = insert(nullptr, val);
    while (N--)
    {
        std::cin >> val;
        insert(head, val);
    }
    std::cout << "BST structure: " << std::endl;
    PrintNode(head);

    return 0;
}