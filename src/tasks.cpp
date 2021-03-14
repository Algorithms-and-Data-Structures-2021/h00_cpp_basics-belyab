#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {

    if(lhs && rhs){
        int d = *lhs;
        *lhs = *rhs;
        *rhs = d;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
if(num_rows>0 && num_cols>0) {


    int **array_2d = new int *[num_rows];

    for (int row_index = 0; row_index < num_rows; row_index++) {
        array_2d[row_index] = new int[num_cols];
    }

    for (int row_index = 0; row_index < num_rows; row_index++) {
        for (int column_index = 0; column_index < num_cols; column_index++) {
            array_2d[row_index][column_index]=init_value;
        }
    }
    return array_2d;
}
    return nullptr;
}


// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if(arr_2d_source==0||arr_2d_target==0||num_cols<0||num_rows<0){
        return false;
    } else {
        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                std::copy(arr_2d_target[i], arr_2d_target[i] + num_cols, arr_2d_source[i]);
            }
        }
        return arr_2d_source;
    }

}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    for(int i = 0;i<arr.size()/2;i++){
        int a = arr[i];
        arr[i] = arr[arr.size()-i-1];
        arr[arr.size()-i-1]=a;
    }

}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if(arr_begin!= nullptr && arr_end!= nullptr){
        int arrSize = arr_end-arr_begin+1;
        for(int i =0;i<arrSize/2;i++){
            int a = arr_begin[i];
            arr_begin[i] = arr_begin[arrSize-i-1];
            arr_begin[arrSize-i-1]=a;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr != nullptr && size >= 0) {
        int *max = &arr[0];
        for (int i = 1; i<size; i++) {
            if (arr[i] > *max) {
                max = &arr[i];
            }
        }
        return max;
    }
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odd_numbers;
    for(int element : arr){
        if(abs(element) % 2 == 1){
            odd_numbers.push_back(element);
        }
    }
    if(!odd_numbers.empty()){
        return odd_numbers;
    }
    return {};
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> common_elements;
    for(int element1:arr_a){
        for(int element2 : arr_b){
            if(element1==element2){
                common_elements.push_back(element1);
            }
        }
    }
    if(common_elements.size()>=0){
        return common_elements;
    }
    return {};
}
