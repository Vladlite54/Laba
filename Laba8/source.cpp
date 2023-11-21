#include <deque>
#include <map>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    cout << "...................Testing deque..................." << endl;
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

    start = steady_clock::now();
    auto it = dq.begin();
    advance(it, 999999);
    dq.insert(it, 8473);
    finish = steady_clock::now();
    cerr << "Duration for deque insert with " << n << " elements: " << duration_cast<milliseconds>(finish - start).count() << " milliseconds" << endl;

    start = steady_clock::now();
    it = dq.begin();
    advance(it, 999999);
    dq.erase(it);
    finish = steady_clock::now();
    cerr << "Duration for deque erase with " << n << " elements: " << duration_cast<milliseconds>(finish - start).count() << " milliseconds" << endl;

    start = steady_clock::now();
    it = dq.begin();
    for (; it!=dq.end(); ++it) {}
    finish = steady_clock::now();
    cerr << "Duration for deque iteration with " << n << " elements: " << duration_cast<milliseconds>(finish - start).count() << " milliseconds" << endl;

    dq.clear();

    cout << endl << endl << ".................Testing multimap................." << endl;

    multimap<int, int> mp;
    start = steady_clock::now();
    for (int i = 0; i < n / 2; i++) mp.emplace(i, i);
    for (int i = 0; i < n / 2; i++) mp.emplace(i, -i);
    finish = steady_clock::now();
    cerr << "Duration for multimap emplace with " << n << " elements: " << duration_cast<milliseconds>(finish - start).count() << " milliseconds" << endl;
    
    start = steady_clock::now();
    auto f = mp.find(89799);
    finish = steady_clock::now();
    cerr << "Duration for multimap find with " << n << " elements: " << duration_cast<milliseconds>(finish - start).count() << " milliseconds" << endl;

    start = steady_clock::now();
    auto itt = mp.begin();
    for (; itt!=mp.end(); ++itt) {}
    finish = steady_clock::now();
    cerr << "Duration for multimap iteration with " << n << " elements: " << duration_cast<milliseconds>(finish - start).count() << " milliseconds" << endl;


    return 0;
}