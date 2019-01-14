/**
 * @Author: Chacha 
 * @Date: 2019-01-14 15:24:40 
 * @Last Modified by: Chacha
 * @Last Modified time: 2019-01-14 15:37:33
 */


#include<iostream>
#include<string>
using namespace std;

/** 
 * Definition for singly-linked list(单向链表)
 * Source: https://zh.wikipedia.org/wiki/链表
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /**
     * Given a linked list, determine if it has a cycle in it.
     * Example: Given -21->10->4->5, tail connects to node index 1, return true
     * Source: https://leetcode.com/problems/linked-list-cycle/
     */ 
    bool hasCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) return false;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;

            if (slow == fast) return true;
        }

        return false;
    }
};

int main() {
    return 0;
}