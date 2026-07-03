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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        ListNode* temp=head;
       int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        int size=count/k;
        int extra=count%k;
        ListNode* curr=head;
        for(int i=0;i<k;i++){
            if(!curr){
                ans.push_back(nullptr);
                continue;
            }
            ans.push_back(curr);
            int part=size;
            if(extra>0){
                part++;
                extra--;
            }
            for(int j=1;j<part;j++){
                curr=curr->next;

            }
            ListNode* nexthead=curr->next;
            curr->next=nullptr;
            curr=nexthead;

        }
        return ans;
        
    }
};