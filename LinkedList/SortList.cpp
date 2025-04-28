#include <bits/stdc++.h>
using namespace std;

ListNode* sortList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode* mid = getMiddle(head);
    ListNode* left = sortList(head);
    ListNode* right = sortList(mid);

    return merge(left, right);
}

private:
ListNode* getMiddle(ListNode* head) {
    if (!head) return head;

    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* mid = slow->next;
    slow->next = nullptr;
    return mid;
}

ListNode* merge(ListNode* left, ListNode* right) {
    if (!left) return right;
    if (!right) return left;

    ListNode* dummy = new ListNode(0);
    ListNode* tail = dummy;

    while (left && right) {
        if (left->val < right->val) {
            tail->next = left;
            left = left->next;
        } else {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }

    if (left) tail->next = left;
    if (right) tail->next = right;

    return dummy->next;
}