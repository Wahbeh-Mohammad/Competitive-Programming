# Binary Search
while(l<=r){
    mid = (l+r)/2;
    if(a[mid] == x){
        flag = true;
        break;
    } else if(a[mid] < x){
        l = mid + 1;
    } else if (a[mid] > x){
        r = mid - 1;
    }
}
