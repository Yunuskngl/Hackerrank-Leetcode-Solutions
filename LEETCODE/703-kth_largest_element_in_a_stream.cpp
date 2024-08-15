//SOLUTION:

//https://leetcode.com/problems/kth-largest-element-in-a-stream/?envType=daily-question&envId=2024-08-12

/*class KthLargest {
public:
    int k;
   vector<int> nums;
        priority_queue<int,vector<int> ,greater<int>> q;
stack<int> s;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
      for(int num : nums){
        add(num);
      }
    }
    int add(int val) {
          if(q.size()<k){
            q.push(val);
          }  
          else if ( val > q.top()){
            q.pop();
            q.push(val);
          }
        return q.top();
    }
};*/