class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getLength(Node* head) {

  
    int length = 0;

    while (head) {
        length++;
        head = head->next;
    }

   
    return length;
}
    int getMiddle(Node* head) {
        // code here
        int length = getLength(head);

    int mid_index = length / 2;
    while (mid_index--) {
        head = head->next;
    }

    
    return head->data;

        
        
    }
};
