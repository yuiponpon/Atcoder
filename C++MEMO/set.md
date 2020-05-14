# 集合setをベクトルにする        

        set<int>st{ 3,1,4,1,5,9,2,6,5,3,5 };
        vector<int> v;
        for (auto itr = st.begin(); itr != st.end(); ++itr) {
            v.push_back(*itr);
        }
        for(auto v_1:v) cout << v_1 << endl;