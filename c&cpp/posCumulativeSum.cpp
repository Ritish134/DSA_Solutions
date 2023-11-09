vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	// add your logic here
	int n = arr.size();
	vector<int>ans;
	for(int i=1;i<n;++i){
		arr[i] += arr[i-1];
	}
	for(int i=0;i<n;++i){
		if(arr[i]>0)
			ans.push_back(arr[i]);
	}
	return ans;
}
