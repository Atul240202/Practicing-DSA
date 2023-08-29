int makeBeautiful(string str) {
	// Write your code here
	int count = 0;
	int n = str.size();
	for(int i = 0; i<n-1; i++){
 		if(str[i]=='0' && str[i+1]=='0'){
			str[i+1]='1';
			count++;
		}
		else if (str[i]=='1' && str[i+1]=='1'){
			str[i+1]='0';
			count++;
		}
	}
	return count;
}
