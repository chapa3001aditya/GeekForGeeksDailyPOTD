/* 
Binary representation of next number

EasyAccuracy: 50.0%Submissions: 25K+Points: 2

Given a binary representation in the form of a string(s) of a number n, the task is to find a binary representation of n+1.

Note: Output binary string should not contain leading zeros.

Example 1:

Input: s = "10"
Output: 11
Explanation: "10" is the binary representation of 2 and binary representation of 3 is "11"
Example 2:

Input: s = "111"
Output: 1000
Explanation: "111" is the binary representation of 7 and binary representation of 8 is "1000"
Your Task:  
You don't need to read input or print anything. Complete the function binaryNextNumber()which takes s as input parameter and returns the string.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n) to store resultant string  

Constraints:
1 <= n <= 105
*/




//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        bool flag = true;
        for (int i = s.length() - 1; i >= 0; i--){
            if (s[i] == '0'){
                s[i] = '1';
                flag = false;
                break;
            }
            else {
                s[i] = '0';
            }
        }
        if (flag){
            s = '1' + s;
        }
        else {
            while (s.length() > 1 && s[0] == '0') s.erase(s.begin());
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends