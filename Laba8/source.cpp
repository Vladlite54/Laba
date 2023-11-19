#include <deque>
#include <map>
#include <iostream>
// #include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    int n = 9999999;
    deque<int> dq;

    auto start = steady_clock::now();
    for (int i = 0; i < n; i ++) dq.push_back(i);
    // for (auto it = dq.begin(); it != dq.end(); ++it)
    auto finish = steady_clock::now();
    cerr << "Duration for deque push_back with " << n << " elements: " << duration_cast<milliseconds>(finish - start).count() << " milliseconds" << endl;
    dq.clear();

    start = steady_clock::now();
    for (int i = 0; i < n; i++) dq.push_front(i);
    finish = steady_clock::now();
    cerr << "Duration for deque push_front with " << n << " elements: " << duration_cast<milliseconds>(finish - start).count() << " milliseconds" << endl;
    dq.clear();


    return 0;
}