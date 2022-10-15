public class PalindromeNum {
	public static void main(String[] args) {
		int n = 40404;
		System.out.println(palindrome(n));
	}
	
	static Boolean palindrome(int n) {
		int temp = n;
		int sum = 0;
		int r =0;
		while(n > 0) {
			r = n % 10;
			sum = (sum * 10)+r;
			n = n / 10;
		}
		if(temp == sum) {
			return true;
		}else {
			return false;
		}
	}

}
