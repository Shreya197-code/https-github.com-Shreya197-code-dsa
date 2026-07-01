/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
          int count=0;
          ListNode* temp=head;
      while(temp){
        count++;
        temp=temp->next;
      }
        
        int node=count-n;
 temp=dummy;
 while(node--){
    temp=temp->next;
 }
   ListNode* del=temp->next;
   temp->next=temp->next->next;
   delete(del);
return dummy->next;
        
    }
};