int birthday(vector<int> s, int d, int m) {
    int prefixSum=0;
    int n=s.size();
    for(int i=0;i<m;i++) prefixSum+=s[i];
    int count=0;
    if(prefixSum==d) count++;
    for(int i=0;i<n;i++){
        prefixSum-=s[i];
        prefixSum+=s[i+m];
        if(prefixSum==d) count++;
    }
    cout<<count;
    return count;