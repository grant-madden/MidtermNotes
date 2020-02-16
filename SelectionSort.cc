void sort(int data[], int count){
    int minIndex;
    for (int i = 0; i< count - 1; i++){
        minIndex = indexOfSmallest(data,i, count);
        swap(data[i], data[minIndex]);
    }
}

//Include starting and ending index
int indexOfSmallest(const int data[], int startIndex, int endIndex){
    int min = data[startIndex];
    int minIndex = startIndex;
    for (int i = startIndex; i < endIndex; i++){
        if (data[i] < min){
            min = data[i];
            minIndex = i;
            }
     }
    return minIndex;
}

void swap(int index, int minIndex){
    int temp = minIndex;
    minIndex = index;
    index = tmp;
    
}
