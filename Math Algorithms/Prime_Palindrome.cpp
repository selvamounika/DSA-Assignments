class Solution {
public:
   
    bool isPalindrome(int x) {
        int original = x, reversed = 0;
        while (x > 0) {
            reversed = reversed * 10 + (x % 10);
            x /= 10;
        }
        return original == reversed;
    }

    
    bool isPrime(int x) {
        if (x <= 1) return false;
        if (x == 2) return true; 
        if (x % 2 == 0) return false; 
        for (int i = 3; i * i <= x; i += 2) {
            if (x % i == 0) return false;
        }
        return true;
    }

    int primePalindrome(int n) {
        // Start checking from n
        while (true) {
            if (isPalindrome(n) && isPrime(n)) {
                return n;
            }
            n++;
            if ( n % 2 == 0 && n!=2) {
                n = n + 1; 
            }
        }
    }
};

