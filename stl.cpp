void explainedPair(){
    pair<int, int> p = {10, 20};
    cout << "First element: " << p.first << endl;
    cout << "Second element: " << p.second << endl;
    pair<int,pair<int,int>>p2={10,{20,30}};
    cout<<"First element of p2: "<<p2.first<<endl;
    cout<<"Second element of p2's first element: "<<p2.second.first<<endl;
    cout<<"Second element of p2's second element: "<<p2.second.second<<endl;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout <<arr[1].second;
}

// vectors
// 1. Dynamic array that can change size
void explainedVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int>v(5,100); //{100,100,100,100,100}

    vector<int> v(5); //{0,0,0,0,0}

    vector<int> v1(5,20);    
    vector<int> v2(v1);    

    vector<int>::iterator it = v1.begin();

    it++;
    cout << *(it) << " ";

    it=it+2;
    cout << *(it) << " ";
    vector<int>::iterator it = v1.end();
    vector<int>::iterator it = v1.rend();
    vector<int>::iterator it = v1.rbegin();

    cout<<v[0] <<" " <<v.at(0);
     cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";

    }
    for (auto it = v.begin(); it != v.end(); it++){
        cout < *(it) << " ";
    }

    // {10,20,12,23}
    v.erase(v.begin()+1); // {10,12,23}
    v.erase(v.begin()+2, v.begin()+4); // {10,20,35} [start, end)]  

    // Insert function

    vector<int>v(2,100); // {100,100}
    v.insert(v.begin(),300); // {300,100,100}
    v.insert(v.begin()+1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50); // {50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

    //{10,20}
    cout<<v.size(); // 2
    v.pop_back(); // {10}

    // v1-> {10,20}
    // v2-> {30,40}
    v1.swap(v2); //v1-> {30,40} and v2-> {10,20}

    v.clear(); // size becomes 0

    cout<<v.empty(); // 1 (true) if size is 0
}

// Lists
void explainedList(){
    list<int> ls;
    ls.push_back(1);    // {1} 
    ls.emplace_back(2); // {1,2}

    ls.push_front(3); // {3,1,2}
    ls.emplace_front(4); // {4,3,1,2}  
    ls.erase(ls.begin()); // {3,1,2}

    // rest functions same as vector
    // begin, end, rbegin, rend, size, swap, clear, empty,insert,
}

// Deque

void explainedDeque(){
    deque<int> dq;
    dq.push_back(1);    // {1} 
    dq.emplace_back(2); // {1,2}

    dq.push_front(3); // {3,1,2}
    dq.emplace_front(4); // {4,3,1,2}  
    dq.pop_back(); // {4,3,1}
    dq.pop_front(); // {3,1}

    dq.back(); // 1
    dq.front(); // 3

    // rest functions same as vector
    // begin, end, rbegin, rend, size, swap, clear, empty,insert,
}

// Stack
// LIFO data structure
// tc: O(1) for push(), pop(), top()
void explainedStack(){
    stack<int> st;
    st.push(1);   // {1}
    st.emplace(2); // {1,2} 

    cout <<st.top(); // 2   

    st.pop(); // {1}
    cout << st.top(); // 1
    cout << st.size(); // 1
    cout << st.empty(); // 0 (false)

    stack<int> st1, st2; // empty stacks
    st1.swap(st2);
}

// Queue
// FIFO data structure
// tc: O(1) for push(), pop(), front(), back()
void explainedQueue(){
    queue<int> q;
    q.push(1);   // {1}
    q.emplace(2); // {1,2}

    q.back() += 5; // {1,7}
    cout << q.back(); // 7

    cout << q.front(); // 1

    q.pop(); // {7}
    cout << q.front(); // 7

    // size swap empty same as stack
}

// Priority Queue
// tc: O(log n) for push() and pop(), O(1) for top()

void explainedPriorityQueue(){
    // Max Heap
    priority_queue<int> pq;
    pq.push(5);  // {5}
    pq.emplace(7); // {7,5}

    cout << pq.top(); // 7

    pq.pop(); // {5}
    cout << pq.top(); // 5

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(5);  // {5}
    minheap.emplace(7); // {5,7}

    cout << minheap.top(); // 5

    minheap.pop(); // {7}
    cout << minheap.top(); // 7
}

// Set
// everthing in logarithmic time
// Stores only unique elements in sorted order
void explainedSet(){
    set<int> s;
    s.insert(1); // {1}
    s.emplace(2); // {1,2}
    s.insert(2); // {1,2}   

    // functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(), swap(), clear(), empty() are same those of above

    // {1,2,3,4,5}
    auto it = s.find(3); // it points to element 3
    auto it = s.find(6); // it points to s.end()

    //{1,4,5}
    st.erase(4); // {1,5} //take logarithmic time
    
    int cnt = st.count(1); // checks whether 1 is present or not

    auto it = st.find(3);
    st.erase(it); // erases element at it

    //{1,2,3,4,5}
    auto it1= st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // {1,4,5} [start, end)
    
    //lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    //this is the syntax
    auto it = s.lower_bound(2);
    auto it = s.upper_bound(3);
}

// MultiSet
// everthing is same as set
// only stores duplicate elementts also

void explainedMultiSet(){
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.emplace(1); // {1,1,1}

    ms.erase(1); // { } removes all occurrences of 1

    int cnt = ms.count(1); // returns no. of occurrences of 1   
    
    // only a single one erased
    ms.erase(ms.find(1)); // {1,1}

    ms.erase(ms.find(1), ms.find(1)+2); // removes two occurrences of 1
    // rest all functions are same as set
}

// UnorderSet

void explainedUnorderedSet(){
    unordered_set<int> s;
    // lowerbound and upperbound function doesnot work 
    // rest all functions are same as set
    // as abouve, it does not stores in any particular
    // order it has a better complexity
    // than set in most cases, except some when collision happens
}

// Map
// Stores key value pairs in sorted order based on keys
// Keys are unique  

void explainedMap(){
    map<int, int> m;
    map<int, pair<int,int>> m1;
    map<pair<int,int>, int> m2;

    m[1] = 2;
    m.emplace({3, 4});
    m.insert({2,4}); // {1,2}, {2,4}, {3,4}

    for (auto it : m){
        cout << it.first << " " << it.second << endl;
    }

    cout << m[1]; // 2
    cout << m[3]; // 4
    cout << m[5]; // 0 (creates the key 5 with value 0)

    // begin(), end(), rbegin(), rend(), size(), swap(), clear(), empty() are same those of above

    auto it = m.find(3); // it points to the key value pair (3,4)
    cout << *(it).second;

    auto it = m.find(5); // it points to m.end()

    // this is the syntax
    auto it = m.lower_bound(2);
    auto it = m.upper_bound(3);

    // erase,swap,size,empty are same as above

}

// MutiMap
void explainedMultiMap(){
    // everythind same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainedUnorderedMap(){
//    same as set and unordered set difference
}

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second==p2.second){
        return true;
    }else if(p1.second==p2.second){
        if(p1.first>p2.second){
            return true;
    }
    return false;
}

void explainExtra(){
    sort(a,a+n); // sorts in ascending order
    sort(v.begin(),v.end()); // sorts in ascending order

    sort(a+2,a+n); // sorts from 3rd element to nth element

    sort(a,a+n,greater<int>()); // sorts in descending order

    pair<int,int> a[]={{1,2},{3,1},{4,1}};

    // sort it acc to second element
    // if second element is same ,then sort
    // it acc to first element but in descending order

    sort(a,a+n,comp);

    // {{4,1} ,{2,1} ,{1,2}};

    int num =7;
    int cnt = __builtin_popcount(); // no. of set bits in num

    long long num =15151613515161;
    int cnt = __builtin_popcountll(); // no. of set bits in num;

    string s = "123";
    do{
        cout<<s<<endl;

    }while(next_permutation(s.begin(),s.end()));
    int maxi=*max_element(a,a+n);

}

int main(){

    return 0;
}