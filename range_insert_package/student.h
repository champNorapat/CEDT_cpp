#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int posi = position-begin();
  int fl = last-first;
  mSize=mSize+fl;
  T *arr = new T[mSize];

  for(int i =0; i<mSize-fl; i++){
    arr[i] = mData[i];
  }
  delete[] mData;
  mData = arr;

  for(int i = mSize-1-fl; i>=posi; i--){
    *(begin()+i+fl)= *(begin()+i);
  }
  for(int i=0 ; i<fl; i++){
    *(begin()+posi+i)=*(first);
    first++;
  }
}

#endif
