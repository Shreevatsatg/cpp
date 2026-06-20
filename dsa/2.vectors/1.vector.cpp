// STL -standard template library that provides all the non primitive data structures in cpp like vector, sets, queues, stack etc
// vector = array + dynamic (no fixed size)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};
    // vector<int> vec(5,0);  5-size, 0-start
    cout << vec[0] << endl;

    for (int val : vec) // iterator for value itself not the index
    {
        cout << val;
    }

    // vector functions:
    // size
    cout << endl
         << "size=" << vec.size() << endl;

    // push_back
    vec.push_back(4); // push value to end

    for (int val : vec)
    {
        cout << val;
    }
    cout<<endl;

    //pop_back
    vec.pop_back(); // pop value to end

    for (int val : vec)
    {
        cout << val;
    }
    
    cout<<endl;
    cout<<vec.back();//last value
    
    cout<<vec.front();//first value
    cout<<vec.at(3);//to acess a perticular value




    return 0;
}
