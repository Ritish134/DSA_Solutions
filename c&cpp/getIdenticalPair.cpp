int getIdenticalTwinsCount(vector<int> &arr) {
    // add your logic here
	// int n = arr.size();
	// int count =0;
	// for(int i=0;i<n-1;i++){
	// 	for(int j =i+1;j<n;j++){
	// 		if(arr[i]==arr[j])
	// 			count++;
	// 	}
	// }
	// return count; O(n^2)
	
	// O(n)
	unordered_map<int,int> frequency;
	int count = 0;
	for(int num: arr){
		++frequency[num];
		count += frequency[num] -1;
	}
	return count;
}
