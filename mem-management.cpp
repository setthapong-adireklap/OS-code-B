#include <iostream>

using namespace std;

int global_init1 = 123;
int global_init2 = 456;
int global_init3 = 789;

int global_uninit1;
int global_uninit2;
int global_uninit3;

int testStack_sum_minus_n(int x){
    
    int tmp = x-1;
    cout << "Stack memory location : " << &tmp << ", value : " << tmp << endl;
    if(x == 1){
        return tmp;
    }

    return tmp + testStack_sum_minus_n(x-1);
}

int main(){

    cout << "----------------------------------" << endl;

    int result = testStack_sum_minus_n(5);
    cout << "Sum of 1 to 5 minus 5 is : " << result << endl;

    cout << "----------------------------------" << endl;


    cout << "----------------------------------" << endl;

    int *pHeapTest1 = new int[3];
    int *pHeapTest2 = new int;
    int *pHeapTest3 = new int;

    pHeapTest1[0] = 10;
    pHeapTest1[1] = 20;
    pHeapTest1[2] = 30;
    *pHeapTest2 = 40;
    *pHeapTest3 = 50;

    cout << "Heap memory location 1 : " << pHeapTest1  << ", value : " << *pHeapTest1 << endl;
    cout << "Heap memory location 2 : " << pHeapTest2  << ", value : " << *pHeapTest2 << endl;
    cout << "Heap memory location 3 : " << pHeapTest3  << ", value : " << *pHeapTest3 << endl;

    cout << "----------------------------------" << endl;

    cout << "----------------------------------" << endl;

    cout << "Global memory location 1 : " << &global_init1  << ", value : " << global_init1 << endl;
    cout << "Global memory location 2 : " << &global_init2  << ", value : " << global_init2 << endl;
    cout << "Global memory location 3 : " << &global_init3  << ", value : " << global_init3 << endl;
    cout << "Unintial memory location 1 : " << &global_uninit1  << ", value : " << global_uninit1 << endl;
    cout << "Unintial memory location 2 : " << &global_uninit2  << ", value : " << global_uninit2 << endl;
    cout << "Unintial memory location 2 : " << &global_uninit3  << ", value : " << global_uninit3 << endl;

    cout << "----------------------------------" << endl;

    delete pHeapTest1;
    delete pHeapTest2;
    delete pHeapTest3;

    return 0;
}