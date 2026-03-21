#include <iostream>
#include <string>
using namespace std;
#include <algorithm>

/*
frequency counting: tức là mình sẽ đếm số lần từ đó xuất hiện
Ví dụ: 
Input:  arr[] = [10, 20, 10, 5, 20]
Output: [[5, 1], [10, 2], [20, 2]]
Explanation: Here 5 occurs (xuất hiện) once, 10 occurs 2 times and 20 occurs 2 times.

Input: arr[] = [10, 20, 20]
Output: [[10, 1], [20, 2]] 
Explanation: Here 10 occurs 1 time, 20 occurs 2 times.


*/

class Solution {
public:


    bool canConstruct(string ransomNote, string magazine) {
        for(char c: ransomNote){
            bool found = false;
            for (int i = 0; i < magazine.size(); i++)
            {
                if(magazine[i] == c)
                {
                    found = true;
                    magazine[i] = '#'; // lấy ra khỏi dùng nữa
                }    
            }
            if(!found) return false;
        }
    return true;
}     

};