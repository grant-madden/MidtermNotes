void bubblesort(int arr[], int length){
  // Bubble largest toward the right
  for (int i = length - 1; i  > 0; i--)
    for (int j =0; j < 1; j++)
    if (arr[j] > arr[j+1])
      {
        // swap numbers
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
       }
  }
