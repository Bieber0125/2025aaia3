///week03.cpp
///File-Save As �s�ɮɡA�n���ɦW�g��
#include <iostream>///C++��cin cout
#include <vector>///C++���}�Cvector
using namespace std;

int main()
{
    vector<int> a(2);///���Ӱ}�C�A�̭���2��(�}�C���j�p�O2)

    for(int i=0; i<a.size(); i++)cout << a[i];///�L�X�}�C
    cout << endl; ///����

    a.push_back(99);///��99����}�Ca����᭱
    a.push_back(77);///��77����}�Ca����᭱

    for(int i=0; i<a.size(); i++)cout << a[i];///�L�X�}�C
    cout << endl; ///����
}
