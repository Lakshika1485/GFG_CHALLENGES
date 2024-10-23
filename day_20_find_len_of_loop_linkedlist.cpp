class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
    if (head == NULL || head->next == NULL) return 0;

    Node* slow = head;
    Node* fast = head;

    // Detect loop using Floyd’s Cycle Detection Algorithm
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        
        // If slow and fast meet, there is a loop
        if (slow == fast) {
            // Find the length of the loop
            int count = 1;
            Node* temp = slow;
            while (temp->next != slow) {
                count++;
                temp = temp->next;
            }
            return count;
        }
    }
    return 0; // No loop
}

// Utility function to create a loop in the linked list
void createLoop(Node* head, int c) {
    if (c == 0) return;

    Node* temp = head;
    Node* loopNode = NULL;
    int count = 1;

    while (temp->next != NULL) {
        if (count == c) loopNode = temp;
        temp = temp->next;
        count++;
    }

    temp->next = loopNode; // Create the loop
}
  
};
