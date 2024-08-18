/*class Solution {
public:
    int nthUglyNumber(int n) {
        // we can generate ugly numbers from ugly numbers by multiplying the later with 2,3 and 5;
        // So we store the ugly numbers in the min heap and takes the smallest ugly number and multiply with 2,3 and 5
        // to get the next ugly numbers.

        // we have to make sure that we don't take any ugly number more than once so we also use a set.

        priority_queue<long long, vector<long long>, greater<long long>> pq; //Min heap to store the ugly numbers;
        set<long long> st; 

        pq.push(1); //Storing the smallest ugly number;
        st.insert(1);

        long long currUgly = 1;  //This stores the current smallest ugly number.

    //    We are iterating the loop n times to get the nth ugly number
        for(int i = 0; i < n; i++){
            // At each iteration we are getting the next largest ugly number and hence at 
            // the nth iteration we will get the nth ugly number.
           currUgly = pq.top();
           pq.pop();

           if(st.find(2*currUgly) == st.end()){
            pq.push(2*currUgly);
            st.insert(2*currUgly);
           }
           if(st.find(3*currUgly) == st.end()){
            pq.push(3*currUgly);
            st.insert(3*currUgly);
           }

           if(st.find(5*currUgly) == st.end()){
             pq.push(5*currUgly);
             st.insert(5*currUgly);
           }
        }

       return static_cast<int>(currUgly);
        
    }
};*/