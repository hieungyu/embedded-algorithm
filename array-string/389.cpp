#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
// cách 1
    char findTheDifference(string s, string t) {
        char result = 0;

        for (char c : s)
            result ^= c; // XOR
        for (char c : t)
            result ^= c; 
        return result;
    }
// cách 2
    char findTheDiff(string s, string t){
        int sum_s = 0;
        int sum_t = 0;

        for (char c: s)
        {
            sum_s += c;
        }
        
        for (char c: t) 
        {
            sum_t += c;
        }
        return sum_t - sum_s;
           
    }
};

int main() {
    cout << "Hello World Test!" << endl;
    
    Solution sol;
    
    // Test case 1
    string s1 = "abcd";
    string t1 = "abcde";
    char diff1 = sol.findTheDiff(s1, t1);
    cout << "Test 1: s=" << s1 << ", t=" << t1 << " -> difference= " << diff1 << endl;
    
    // Test case 2
    string s2 = "a";
    string t2 = "y";
    char diff2 = sol.findTheDifference(s2, t2);
    cout << "Test 2: s=" << s2 << ", t=" << t2 << " -> difference= " << diff2 << endl;
    
    // Test case 3
    string s3 = "ae";
    string t3 = "aea";
    char diff3 = sol.findTheDifference(s3, t3);
    cout << "Test 3: s=" << s3 << ", t=" << t3 << " -> difference= " << diff3 << endl;
    
    return 0;
}