# *Point VS Reference*

## call by value VS call by reference(pointer)
call by value로 매개변수를 전달 할 경우, 함수에서 단순 복사된 값을 사용하기 때문에 원본에 접근하지 못한다. 

**포인터 또는 레퍼런스** 로 전달할 경우 함수에서도 주소를 통해 원본에 접근하여 값을 읽거나 수정할 수 있게 된다.  
.

## C
일반변수 => call by value

포인터변수 => call by pointer = call by reference

## C++
일반변수 => call by value

포인터변수 => call by pointer 

레퍼런스변수 => call by reference


``` c++
int* ptr;
// 정수형 포인터를 만들었다. ptr이 가지고 있는 값은 주소값이다. 

int var = 7;
int foo = 21;

ptr = &var;
ptr = &foo;
// 포인터 변수 ptr은  stack에 4바이트 공간으로 존재하고, 변수(var / foo) 의 주소와 같다. 
//따라서 ptr을 출력하면 ptr이 가리키는 주소값을 출력한다. 

int& ref = var;
```
| pointer | reference|
|--|--|
|ptr == &var|ref == var|
|&ptr != var| &ref = &num|
|자유롭게 변수를 바꿔가며 가리키는 주소값을 변경할 수 있다. | 한 번 할당되며, 메모리의 해당위치에 대한 reference




.

.
## 포인터를 사용하는 방법
``` c++
#include <iostream>
using namespace std;
void swap(int *, int*);
int main(){
    int a=2, b=5;
    cout << a << b << endl;
    swap(&a, &b);
    cout << a << b << endl;
    return 0;
}

void swap(int* pa, int *pb){
    int *pa = &a, int *pb = &b;
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    cout << *pa < *pb << endl;
}

```
.

.
## 참조자(reference)를 사용하는 방법
``` c++
#include <iostream>
using namespace std;
void swap(int &, int&);
int main(){
    int a=2, b=5;
    cout << a << b << endl;
    swap(a, b);
    cout << a << b << endl;
    return 0;
}

void swap(int& ra, int &rb){
    int &ra = &a, int &rb = &b;
    int temp;
    temp = ra;
    ra = rb;
    rb = temp;
    cout << ra < rb << endl;
}

```