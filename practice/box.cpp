/*
given an array with a known size
make a data store to hold the number of elements that are unique call this unique
iterate through the array to the end of the array that will be i index
    iterate through the array again but this time 1 greater then i lets call this j also to the end
        if the value at i index and j index is the same 
            iterate through the array starting a j till size - 1 call this k 
                set value at k to value at k+1
            subtract 1 from the size
            subtract 1 from the 2nd loop check the same spot again its a new value

make a new data store of the new size

    */
#include <iostream>
int* rdup(int arr[],int& size); 

int main() {
    int arr[] = {4, 2, 4, 7, 2, 9, 9, 1};
    int size = 8;

    int* result = rdup(arr,size);

    for (int i{0};i<size;i++){
        std::cout << result[i] << std::endl; 
    }
    delete[] result;

    size = 8;

    int* result = rdup2(arr,size);

    for (int i{0};i<size;i++){
        std::cout << result[i] << std::endl; 
    }

}

int* rdup(int arr[],int& size){//why this was 
    for(int i{0};i<size;i++){
        for(int j= i+1;j<size;j++){
            if(arr[i] == arr[j]) {
                for(int k= j;k<size - 1;k++){
                    arr[k] = arr[k+1];
                }
                size--;
                j--; // treaky treaky dont check the same values 2 times
            }
        }
    }
    //if just want a size update you return arr as it is and size is now different
    

    int* result = new int[size];

    for(int i{0};i < size;i++){
        result[i] = arr[i]; 
    }

    return result;
}


//what i was going to do just messes with the order
int* rdup2(int arr[],int& size){
    for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
        if (arr[i] == arr[j]) {
            arr[j] = arr[size - 1];
            size--;
            j--;
        }
    }
}
return arr;
}

 

// what the fuck is this gave gpt the problem after i got it and ya

int removeDuplicatesInPlace(int arr[], int size) {
    int write = 0;

    for (int i = 0; i < size; i++) {
        bool seen = false;

        for (int j = 0; j < write; j++) {
            if (arr[i] == arr[j]) {
                seen = true;
                break;
            }
        }

        if (!seen) {
            arr[write] = arr[i];
            write++;
        }
    }

    return write;
}

