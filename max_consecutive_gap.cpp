int Solution::maximumGap(const vector<int> &A) {
    int ans=INT_MIN;
    vector<int> B = A;
    if(A.size()<2)
     return 0;
    sort(B.begin(),B.end());
    for(int i=0;i<B.size()-1;i++){
        if(B[i+1]-B[i]>ans)
          ans=B[i+1]-B[i];
    } 
    return ans;
}
