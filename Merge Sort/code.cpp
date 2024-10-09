class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int len1=m-l+1;
         int len2=r-m;
         int *arr1=new int[len1];
         int *arr2=new int[len2];
         int arrIndex=l;
         for(int i=0;i<len1;i++)
            arr1[i]=arr[arrIndex++];
        for(int i=0;i<len2;i++)
            arr2[i]=arr[arrIndex++];
            
        int p1=0,p2=0;
        arrIndex=l;
        while(p1<len1 && p2<len2){
            if(arr1[p1]<arr2[p2])
                arr[arrIndex++]=arr1[p1++];
            else
                arr[arrIndex++]=arr2[p2++];
        }
        while(p1<len1)
            arr[arrIndex++]=arr1[p1++];
        while(p2<len2)
            arr[arrIndex++]=arr2[p2++];
            
        delete []arr1;
        delete []arr2;
        return;
    }
    
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
            return;
            
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
        return;
    }
};
