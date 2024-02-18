// Introduction to Queue
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Create a queue
    queue<int> q;

    q.push(11);
    cout << "After 1st push The Front of queue is " << q.front() << endl;
    cout << "After 1st push The Back of queue is " << q.back() << endl;

    q.push(15);
    cout << "After 2nd push The Front of queue is " << q.front() << endl;
    cout << "After 2nd push The Back of queue is " << q.back() << endl;

    q.push(14);
    cout << "After 3rd push The Front of queue is " << q.front() << endl;
    cout << "After 3rd push The Back of queue is " << q.back() << endl;

    cout << "Size of queue is : " << q.size() << endl;

    q.pop();
    cout << "After 1st pop The Front of queue is " << q.front() << endl;
    cout << "After 1st pop The Back of queue is " << q.back() << endl;

    q.pop();
    cout << "After 2nd push The Front of queue is " << q.front() << endl;
    cout << "After 2nd push The Back of queue is " << q.back() << endl;

    q.pop();
    cout << "After 3rd push The Front of queue is " << q.front() << endl;
    cout << "After 3rd push The Back of queue is " << q.back() << endl;
    cout << "Size of queue is : " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue  is not empty" << endl;
    }

    return 0;
}