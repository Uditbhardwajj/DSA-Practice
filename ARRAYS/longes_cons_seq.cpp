sort(nums.begin(), nums.end());

int lastSmaller = INT_MIN;//yeh strore krega meri last value 
int cnt = 0;
int longest = 1;

for(int i = 0; i < n; i++)
{
    if(nums[i] - 1 == lastSmaller)//yaani current 4 hai toh (i-1) yaani 3 equal hai lastsmlr ke joki wo bhi 3 hi hoga 
    {
        cnt++; // hai toh simply +1 yaani ab me 4--> se 5 agya or lstsmlr=4 hogya
    }
    else if(nums[i] != lastSmaller) //agar curent or lastsmlr equal nhi aye (maybe repeteion or 4 ke baaad sidhe 100 ajaey)
    {
        cnt = 1; //idhar phirse count chalu hoga [RESET]
    }

    lastSmaller = nums[i];
    longest = max(longest, cnt);//count ko print kra do agya number

}