///week04-6.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout << endl << "³¯¦C A ªºªø«×¬O" << a.size() << endl;

    vector<int> b(3);
    cout << endl << "³¯¦C B ªºªø«×¬O" << b.size() << endl;
    for(int i=0; i<b.size(); i++) cout << b[i] << " ";

    vector<int> c(3, 88);
    cout << endl <<"³¯¦C C ªºªø«×¬O" << c.size() << endl;
    for(int i=0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};
    vector<int> f( d, d+4);
    cout << endl <<"³¯¦C F ªºªø«×¬O" << f.size() << endl;
    for(int i=0; i<f.size(); i++) cout << f[i] << " ";

    vector<int> g( d, d+10);
    cout << endl << "³¯¦C G ªºªø«×¬O" << g.size() << endl;
    for(int i=0; i<g.size(); i++) cout << g[i] << " ";

}
