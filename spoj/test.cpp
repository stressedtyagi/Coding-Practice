#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    struct ListNode *next;
};

void printList(struct ListNode *);

struct ListNode *createNewNode(int val)
{
    struct ListNode *newNode = new struct ListNode();

    newNode->val = val;
    newNode->next = nullptr;

    return newNode;
}

void appendToList(int val, struct ListNode **list)
{
    struct ListNode *newNode = createNewNode(val);

    if (*list == nullptr)
    {
        *list = newNode;
        return;
    }

    struct ListNode *ptr = (*list);
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }

    ptr->next = newNode;
}

void createLists(struct ListNode *list, struct ListNode *positiveList, struct ListNode *negativeList)
{
    struct ListNode *ptr = list;

    while (ptr)
    {
        if (ptr->val >= 0)
        {
            appendToList(ptr->val, &positiveList);
        }
        else
        {
            appendToList(ptr->val, &negativeList);
        }

        ptr = ptr->next;
    }
}

void printList(struct ListNode *list)
{
    struct ListNode *ptr = list;
    while (ptr)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}

int main()
{
    struct ListNode *postiveList = nullptr;
    struct ListNode *negativeList = nullptr;

    struct ListNode *list = nullptr;

    appendToList(12, &list);
    appendToList(13, &list);
}