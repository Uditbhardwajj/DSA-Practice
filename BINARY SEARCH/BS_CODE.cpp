//iterative code
int BS(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

// recursive code
BS(int arr,int low,int high,int target){

    if(low>high){
        return -1;
    }
        int mid = (low + high) / 2;
    else if (arr[mid]==target)
    {
        return arr[mid];
    }
       else if (arr[mid]<=target)
    {
        return BS(int arr,int mid+1,int high,int target);
    }
      else {
        return BS(int arr,int low,int mid-1,int target);
    }
    
    
}