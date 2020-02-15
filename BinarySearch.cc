int binSearch(const int data[], int count, int target){
    int first = 0; 
    int mid; 
    int last = count- 1;

        while (first <= last) {
            mid = (first + last) / 2;
            if (target == data[mid]){
                return mid;
            }
            else if (target < data[mid]) {
                last = mid - 1;
            }        
            else{
                first = mid + 1;
            }
            
        }
    return -1; //target not found
}
// Binary search is used only if the array is ordered 
