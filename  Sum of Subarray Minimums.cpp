////
//// Created by Lenovo on 2024/4/20.
////
////子数组的最小值之和
////给定一个整数数组 arr，找到所有子数组的最小值之和。
////
//
//
//#include <iostream>
//#include <stack>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
////class Solution {
////public:
////    const int mod = 1e9 + 7;
////
////    int sumSubarrayMins(vector<int>& arr) {
////        int n = arr.size();
////
////        stack<int>  s;
////        vector<int> dp(n);
////
////        int ans = 0;
////        for (int i = 0; i < n; i++) {
////            while (!s.empty() && arr[i]<=arr[s.top()]) s.pop();
////
////            if (!s.empty())
////                dp[i] = ((((i - s.top()) * arr[i]) % mod) + dp[s.top()]) % mod;
////            else dp[i] = (i + 1) * arr[i];
////
////            s.push(i);
////            ans = (ans + dp[i]) % mod;
////        }
////        return ans;
////    }
////};
//
////维护两个单调栈
//class Solution{
//public:
//    const int mod =1e9+7;
//   int sumSubarrayMins(vector<int>& arr){
//        int n=arr.size();
//        vector<int> left(n),right(n);
//        stack<int> st;
//
//        for(int i=0;i<n;i++){
//            while(!st.empty()&& arr[i] < arr[st.top()]){
//                st.pop();
//            }
//            if(st.empty()){
//                left[i]=-1;
//            }else{
//                left[i]=st.top();
//            };
//            st.push(i);
//        }
//
//        st =stack<int>();//清空栈
//
//        for(int i=n-1;i>=0;i--){
//            while(!st.empty()&& arr[i]<= arr[st.top()]){
//                st.pop();
//            }
//            if(st.empty()) right[i]=n;
//            else right[i]=st.top();
//            st.push(i);
//        }
//
//        long long res =0;
//        for(int i=0;i<n;i++){
//            res =(res +(long long)(arr[i]*(long long)(i-left[i])*(long long)(right[i]-i)))%mod;
//        }
//        return res;
//    }
//};
//
//
//int main() {
//    Solution s;
//    vector<int> arr = {3, 1, 2, 4};
//    cout << s.sumSubarrayMins(arr) << endl;
//    return 0;
//}