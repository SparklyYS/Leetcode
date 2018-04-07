#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

class Solution
{
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        ListNode *res_start = new ListNode(0);
        ListNode *pos = res_start;

        int carry = 0;
        while (p1 || p2)
        {
            int v1 = p1 ? p1->val : 0;
            int v2 = p2 ? p2->val : 0;
            int tmp = v1 + v2 + carry;
            carry = (tmp / 10);
            pos->next = new ListNode(tmp % 10);
            pos = pos->next;
            if (p1)
                p1 = p1->next;
            if (p2)
                p2 = p2->next;
        }
        if (carry)
            pos->next = new ListNode(carry);
        return res_start->next;
    }
};