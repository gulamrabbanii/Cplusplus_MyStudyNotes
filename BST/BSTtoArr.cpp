#include <iostream>

char tree[10];
void root(char key)
{
    if (tree[1] != '\0')
        std::cout << "Root already exist." << std::endl;
    else
        tree[1] = key;
}

void left_child(char key, int parent)
{
    char choice;
    int new_p;
    if (tree[parent] != '\0')
    {
        if (tree[(2 * parent)])
        {
            std::cout << "Node has value. do you override it? (y/n): ";
            std::cin >> choice;
            if (choice == 'y')
                tree[2 * parent] = key;
            else
            {
                std::cout << "Enter new parent value: ";
                std::cin >> new_p;
                tree[2 * new_p] = key;
            }
        }
        else
            tree[(2 * parent)] = key;
    }
    else
        std::cout << "Parent not found." << std::endl;
}

void right_child(char key, int parent)
{
    char choice;
    int new_p;
    if (tree[parent] != '\0')
    {
        if (tree[(2 * parent) + 1])
        {
            std::cout << "Node has value. do you override it? (y/n): ";
            std::cin >> choice;
            if (choice == 'y')
                tree[(2 * parent) + 1] = key;
            else
            {
                std::cout << "Enter new parent value: ";
                std::cin >> new_p;
                tree[(2 * new_p) + 1] = key;
            }
        }
        else
            tree[(2 * parent) + 1] = key;
    }
    else
        std::cout << "Parent not found." << std::endl;
}

void printArr()
{
    for (int i = 1; i <= 10; ++i)
    {
        if (tree[i] != '\0')
        {
            if (tree[i] == ' ')
                std::cout << " - "
                          << " ";
            else
                std::cout << tree[i] << " ";
        }
        else
            std::cout << " - ";
    }
}

int main()
{
    char node_value, choice;
    int parent;
    std::cout << "Enter root: ";
    std::cin >> node_value;
    root(node_value);
    do
    {
        std::cout << "Enter parent position value: ";
        std::cin >> parent;
        std::cout << "Enter left child: ";
        std::cin >> node_value;
        left_child(node_value, parent);
        std::cout << "Enter right child: ";
        std::cin >> node_value;
        right_child(node_value, parent);
        std::cout << "Do you want to continue?(y/n) ";
        std::cin >> choice;
    } while (choice == 'y');

    printArr();

    return 0;
}