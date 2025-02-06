/**
 * @file virnhe.cpp
 * @brief 虚继承
 * @author 光城
 * @version v1
 * @date 2019-07-21
 */

#include <iostream>

using namespace std;

class A {
  virtual void fun() {}
};

class B {
  virtual void fun2() {}
};
class C : virtual public A, virtual public B {
public:
  virtual void fun3() {}
};

int main() {

  /**
   * @brief 8 8 16  派生类虚继承多个虚函数，会继承所有虚函数的vptr
   */
  cout << sizeof(A) << " " << sizeof(B) << " " << sizeof(C);
  //c为16的依据：32位系统虚函数为4字节，这样总和为12，但是因为8字节对齐要求，所以有添加上了4.
  //64位系统时直接为24，满足8字节对齐要求。

  return 0;
}
