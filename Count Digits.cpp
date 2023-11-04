// find the number of digit 'n' that evenly divide 'n'

// https://www.codingninjas.com/studio/problems/count-digits_8416387

int countDigits(int n){
	// Write your code here.
	int count = 0;
	int num = n;
	while(n>0){
		int digit = n%10;
		if(digit && num%digit == 0){
			count++;
		}
		n = n/10;
	}

	return count;	
}
