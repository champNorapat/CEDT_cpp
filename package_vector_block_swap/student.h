#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if (m == 0) return false;

    if (a < begin() || a >= end() || b < begin() || b >= end())return false;

    if (a + m - 1 > end() || b + m - 1> end())return false;

    if (!(a + m - 1 < b || b + m - 1 < a))return false;
  else{
    for (int i = 0;i<m;i++) {
      std::swap(mData[b - begin() + i],mData[a - begin() + i]);
    }
    return true;
  }
}

#endif
