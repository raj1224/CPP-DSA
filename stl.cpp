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