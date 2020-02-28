#include <iostream>
#include <array>
using namespace std;

bool isFull(int A[], int size) {
  return false;
}

void enqueue (int A[], int value) {
  int front = 0;
  int rear = 0;
  int size = A.size();
  if(!isFull(A, size)){
    if(front != 0 && rear == size - 1){
      rear = -1;
    }
  }
}

int main() {
  int A[7];

}
