//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
       int a=arr.size();
       int large=INT_MIN;
        for(int i=0;i<a;i++){
            if(arr[i]>large){
                large=arr[i];
            }
        }
        int cnt=0 ;
        for(int i=1 ; i<a ; i++){
            if(arr[i]!=arr[i-1]){
                cnt++;
            }
        }
        int SL=INT_MIN;
        for(int i=a-1;i>=0;i--){
            if(arr[i]>SL && arr[i]!=large){
                SL=arr[i];
            }
        }
        if(cnt==0) {return -1 ;} 
        else{ return SL;}
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends