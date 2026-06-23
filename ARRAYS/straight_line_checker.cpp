// #include <iostream>
// using namespace std;

// int main() {

   
    
//     for (int i = 0; i < count; i++)
//     {
//         for (int  j = i; i < count; i++)
//         {        int y1=arr1[i];
//                 int y2=arr1[i+1];
//                 int x1=arr2[j];
//                 int x2=arr2[j+1];
//                 int m=(y2-y1)/(x2-x1);
//             if ((y1-y2)=m(x1-x2))
//             {
          
//                 return true ;
//             }
            
//         }
        
//     }

    
//     return 0;
// }


class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];

        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];

        for (int i = 2; i < coordinates.size(); i++) {

            int x = coordinates[i][0];
            int y = coordinates[i][1];

            if ((y2 - y1) * (x - x1) !=
                (y - y1) * (x2 - x1))
            {
                return false;
            }
        }

        return true;
    }
};