int Solution::maxSubArray(const vector<int> &A) {
    int csum=0;
    int ans=INT_MIN;
    int n=A.size();
    for(int i=0;i<n;++i){
        csum=max(0,csum);
        csum+=A[i];
        ans=max(ans,csum);
    }
    return ans;
}
