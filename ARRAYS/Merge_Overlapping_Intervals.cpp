// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {

//         vector<vector<int>> ans;

//         sort(intervals.begin(), intervals.end());              ---> sorting

//         for(int i = 0; i < intervals.size(); i++) {

//             if(ans.empty() || intervals[i][0] > ans.back()[1]) {            


//                 ans.push_back(intervals[i]);
//             }
//             else {

//                 ans.back()[1] =
//                 max(ans.back()[1], intervals[i][1]);
//             }
//         }

//         return ans;
//     }
// };





//Last merged interval [1,3],  current interval[2,6]:

//------>intervals[i][0] > ans.back()[1])[
// iss line se intervals[i][0] yaani current elem ka phela "2" agar jisse lapping ki tryy kr rhe hai usse  ans.back()[1] (last merged interval[1,3])
// ka dusra "3"
// 2 > 3 hai toh Overlap exists.
// So instead of pushing, we merge:
// ans.back()[1] =
// max(ans.back()[1], intervals[i][1]); 

//]