/*class KthLargest {
public:

// Here in this question we are maintaining top k elements in the min heap, we traverse
// the nums vector and we add the number in the nums in the min heap until the size of the
// min heap is not k, so this is how we store the top K elements in the heap and the top most element
// will be the kth largest element. Now if the value to be added is smaller than the pq.top then in that case
// the kth largest element remains the same(topmost element of the heap) otherwise if the value to be insert is
// greater than the top most element of the heap, then in that case the top most element is no longer in top k elements
// and hence we pop it out and insert the value in the heap;

int givenInt = 0;
priority_queue<int, vector<int>, greater<int>> pq;

    KthLargest(int k, vector<int>& nums) {
        givenInt = k;
     for(auto it: nums){
        add(it);
     }
        
    }
    
    int add(int val) {
        if(pq.size() < givenInt || pq.top() < val){
            pq.push(val);
            if(pq.size() > givenInt){
                pq.pop();
            }
        }

        return pq.top(); 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */