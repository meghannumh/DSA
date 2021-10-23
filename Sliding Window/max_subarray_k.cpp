lass Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0, j=0, sum=0, mx=0;
        while(j<Arr.size()){
            sum += Arr[j];
            if(j-i+1 < K) j++;
            else if(j-i+1 == K){
                mx = max(sum,mx);
                sum -= Arr[i];
                i++;
                j++;
            }
        }
        return mx;
    }
};
