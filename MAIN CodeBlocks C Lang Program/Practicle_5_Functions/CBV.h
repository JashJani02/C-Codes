void swap_by_call_by_value(int arr[]) {
    int temporary = arr[0];
    arr[0] = arr[1];
    arr[1] = arr[2];
    arr[2] = temporary;
}