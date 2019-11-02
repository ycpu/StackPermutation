#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <deque>
#include <vector>
#define N 5
using namespace std;
int number=0;

void stack_permute(vector<int> st, vector<int> input, vector<int> output, int ii, int oo)
{
    if (ii>oo) {
        vector<int> st1,input1,output1;
        input1.assign(input.begin(), input.end());
        st1.assign(st.begin(), st.end());
        output1.assign(output.begin(), output.end());
        output1.push_back(st1.back());
        st1.pop_back();
        if (oo+1==N){
            for (int i=0; i<N; i++) cout << output1[i] << " ";
            cout << endl;
            number++;
            return;
        }
        else
            stack_permute(st1, input1, output1, ii, oo+1);
    }
    if (ii<N) {
        vector<int> st1,input1,output1;
        st1.assign(st.begin(), st.end());
        input1.assign(input.begin(), input.end());
        output1.assign(output.begin(), output.end());
        st1.push_back(input1.front());
        input1.erase (input1.begin());
        stack_permute(st1, input1, output1, ii+1, oo);
    }
}
int main() {
    vector<int> v;
    vector<int> st;
    vector<int> output;
    for( int i = 0; i < N; i++ ) {
        v.push_back(i+1);
    }

    stack_permute(st, v, output, 0, 0);
    cout << "N="<< N <<", statck perputation¦@" << number << "ºØ"<<endl;
    return 0;
}
