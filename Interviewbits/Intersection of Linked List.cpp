/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int len(ListNode *head){
    int l=0;
    ListNode p=head;
    while(p->next){
        l++;
        p=p->next;
    }
    return l;
}
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(!A || !B ){
    	return NULL;
    }
    int lenA=len(A);
    int lenB=len(B);
    int lenDiff=lenA-lenB;
    ListNode *pa=A,*pb=B;
    if(lenDiff<0){
        while(lenDiff){
            /*Iterate through B cuz B is the longest linked list */
            pb=pb->next;
            lenDiff++;
        }
    }else if(lenDiff>0){
        while(lenDiff){
            /*Iterate through B cuz B is the longest linked list */
            pa=pa->next;
            lenDiff--;
        }
    }
    while(pa && pb){
        if(pa == pb ){
            return pa;
        }
        pa=pa->next;
        pb=pb->next;
    }
    return NULL;
}
