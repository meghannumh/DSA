vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
       long long i=0, j=0;
       queue<long long > q;
       vector<long long> v;
       while(j<N){
           if(A[j]<0) q.push(A[j]);
           if(j-i+1 < K) j++;
           else if(j-i+1 == K){
               if(!q.empty()){
                   v.push_back(q.front());
                   if(A[i] == q.front()) q.pop();
               }
               else v.push_back(0);
               i++; j++;
           }
       }
       return v;
 }
