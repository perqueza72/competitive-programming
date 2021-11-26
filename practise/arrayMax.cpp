#include <bits/stdc++.h>

using namespace std;

int arr_max(int arr[], int len){

  if(len == 0) return(arr[0]);
  return max(arr[len-1], arr_max(arr, len-1));
}

int sum(int arr[], int len){
  if(len == 0) return 0;

  return arr[len-1] + sum(arr, len-1);
}

double average(int arr[], int len){
  if(len == 0) return 0;

  return ((arr[len-1] + (len-1)*average(arr, len-1))/len);
}

void array_increment(int arr[], int len){
  if(len == 0) return;

  array_increment(arr, len-1);
  cout << (arr[len-1]+len-1) << " ";
}

void accumulate_arr(int arr[], int len){
  if(len == 0) return;
  
  accumulate_arr(arr, len-1);
  cout << sum(arr,len) << " ";
}

void left_max(int arr[], int len, int start_position = 0){
  
  if(len == start_position+1){
    cout << arr[start_position] << endl;
    return;
  }

  if(arr[start_position] > arr[start_position+1]) arr[start_position+1] = arr[start_position];
  cout << arr[start_position] << " ";
  left_max(arr, len, start_position+1);
}

void right_max(int arr[], int len){
  if(len == 0) return;

  if(arr[len-1] > arr[len-2]) arr[len-2] = arr[len-1];
  right_max(arr, len-1);
  cout << arr[len-1] << " ";
}

int suffix_sum(int arr[], int len, int numbers){
  if(numbers == 0) return 0;

  return suffix_sum(arr,len,numbers-1) + arr[len-numbers];
}

int prefix_sum(int arr[], int numbers){
  if(numbers == 0) return 0;

  return arr[numbers-1] + prefix_sum(arr, numbers-1);
}

bool palindrome(int arr[], int len, int init = 0){

  if(init >= len-1) return true;
  if(arr[init] == arr[len-1]) return palindrome(arr, len-1, init+1);
  
  return false;
}

// bool is_prefix(string main, string prefix, int start_pos = 0){
  

// }

bool is_prime(int value, int limit, int divide = 2){
  if(value%divide == 0) return false;
  if(limit <= divide) return true;

  return is_prime(value, limit, divide+1);
}

int count_primes(int start, int end){
  if(start == end) return is_prime(start, sqrt(start));
  return is_prime(start, sqrt(start)) + count_primes(start+1, end);
}

int main(){

  int arr[] = {1,8,2,10,3};
  int a2[] = {1,2,5,9};
  int arr2[] = {1,3,5,7,4,2};
  int arr3[] = {1,3,5,7,4,2};
  int arr4[] = {1,3,4,6,7};
  int palim[] = {1,2,3,2,1};
  int palim2[] = {1,2,3,3,2,1};

  cout << arr_max(arr, 5) << endl;
  cout << sum(arr, 5) << endl;
  cout << average(arr, 5) << endl;
  array_increment(arr, 5);
  cout << endl;
  accumulate_arr(arr, 5);
  cout << endl;
  right_max(arr2,6);
  cout << endl;
  left_max(arr3,6);
  cout << suffix_sum(arr4, 5, 3) << endl;
  cout << prefix_sum(arr4,3) << endl;
  cout << palindrome(arr4, 5) << endl;
  cout << palindrome(palim, 5) << endl;
  cout << palindrome(palim2,6) << endl;
  cout << "primes 10 al 20: " << count_primes(10,20) << endl;
  cout << "primes 10 al 200: " << count_primes(10,200) << endl;
  cout << "primes 10 al 5000000: " << count_primes(10,5000000) << endl;
  cout << "finish" << endl;
  
  return 0;
}