class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) 
    {
        int n=nums1.length;
        int m=nums2.length;
        double []arr3=new double[n+m];

        int i=0,k=0,j=0;

        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            arr3[k++]=nums1[i++];
            else
            arr3[k++]=nums2[j++];
        }

        while(i<n)
        {
            arr3[k++]=nums1[i++];
        }
        while(j<m)
        {
            arr3[k++]=nums2[j++];
        }
        
        if((m+n)%2==0)
        {
            return (arr3[(m+n)/2]+arr3[(m+n)/2-1])/2;
        }
        else{
            return arr3[(m+n)/2];
        }
    }
}