bool canJump(int* arr, int numsSize) {
    int m=0;
    bool cj=true;

    for(int i=0;i<numsSize;i++){
        // if(nums[i]>nums[m]){
        //     m=i;
        // }
        if(arr[i]==0&&numsSize>1&&i<numsSize-1){
            cj=false;
            for(int j=0;j<i;j++){
                if(arr[j]+j>i){
                    cj=true;
                    break;
                }
            }
            if(!cj){
                return false;
            }
        }
    }
    return cj;
}