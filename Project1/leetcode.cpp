#include<stdio.h>

struct ListNode
{
	struct ListNode* next;
	int val;
};
//合并两个链表
struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2) {
    struct ListNode* leftH = NULL;
    struct ListNode* leftT = NULL;
    struct ListNode* rightH = NULL;
    struct ListNode* rightT = NULL;
    struct ListNode* next = NULL;
    struct ListNode* cur = list1;
    int n = 1;
    while (cur)
    {
        next = cur->next;
        if (n < a + 1)
        {
            if (leftH == NULL && leftT == NULL)
            {
                leftH = leftT = cur;
                leftT->next = NULL;
            }
            else
            {
                leftT->next = cur;
                leftT = cur;
                leftT->next = NULL;
            }
        }
        else if (n > b + 1)
        {
            if (rightH == NULL && rightT == NULL)
            {
                rightH = rightT = cur;
                rightT->next = NULL;
            }
            else
            {
                rightT->next = cur;
                rightT = cur;
                rightT->next = NULL;
            }
        }
        cur = next;
        n++;
    }
    struct ListNode* tail = list2;
    while (tail->next)
    {
        tail = tail->next;
    }
    leftT->next = list2;
    tail->next = rightH;
    return leftH;
}
//反转链表2
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    struct ListNode* midH = NULL;
    struct ListNode* midT = NULL;
    struct ListNode* leftH = NULL;
    struct ListNode* leftT = NULL;
    struct ListNode* rightH = NULL;
    struct ListNode* rightT = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = NULL;
    int n = 1;
    while (cur)
    {
        next = cur->next;
        if (n < left)
        {
            if (leftH == NULL && leftT == NULL)
            {
                leftH = leftT = cur;
                leftT->next = NULL;
            }
            else
            {
                leftT->next = cur;
                leftT = cur;
                leftT->next = NULL;
            }
        }
        else if (n >= left && n <= right)
        {
            if (midT == NULL && midH == NULL)
            {
                midH = midT = cur;
                midT->next = NULL;
            }
            else
            {
                cur->next = midH;
                midH = cur;
            }
        }
        else {
            if (rightH == NULL && rightT == NULL)
            {
                rightH = rightT = cur;
                rightT->next = NULL;
            }
            else {
                rightT->next = cur;
                rightT = cur;
                rightT->next = NULL;
            }
        }
        n++;
        cur = next;
    }
    if (leftH == NULL)
    {
        midT->next = rightH;
        return midH;
    }
    leftT->next = midH;
    midT->next = rightH;
    return leftH;
}
//奇偶链表
struct ListNode* oddEvenList(struct ListNode* head) {
    if (head == NULL)
    {
        return NULL;
    }
    struct ListNode* evenH = NULL;
    struct ListNode* evenT = NULL;
    struct ListNode* oddH = NULL;
    struct ListNode* oddT = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = NULL;
    int index = 1;
    while (cur)
    {
        next = cur->next;
        if (index % 2 == 1)
        {
            if (oddH == NULL && oddT == NULL)
            {
                oddH = oddT = cur;
                oddT->next = NULL;
            }
            else
            {
                oddT->next = cur;
                oddT = cur;
                oddT->next = NULL;
            }
        }
        else {
            if (evenH == NULL && evenT == NULL)
            {
                evenH = evenT = cur;
                evenT->next = NULL;
            }
            else {
                evenT->next = cur;
                evenT = cur;
                evenT->next = NULL;
            }
        }
        index++;
        cur = next;
    }
    oddT->next = evenH;
    return oddH;
}
//重排链表
void reorderList(struct ListNode* head) {
    if (head == NULL)
    {
        return;
    }
    struct ListNode* arr[50000];
    struct ListNode* cur = head;
    int n = 0;
    while (cur)
    {
        arr[n] = cur;
        cur = cur->next;
        n++;
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        arr[i]->next = arr[j];
        i++;
        if (i == j)
        {
            break;
        }
        arr[j]->next = arr[i];
        j--;
    }
    arr[i]->next = NULL;
}
//环形链表
struct ListNode* detectCycle(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return NULL;
    if (head->next == head)
        return head;
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            break;
        }
    }
    if (fast == NULL || fast->next == NULL)
    {
        return NULL;
    }
    fast = head;
    while (fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return fast;
}