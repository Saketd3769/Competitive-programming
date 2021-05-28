// replace (include and using namespace std with these)
// s.find_by_order(X); =>  returns an iterator to the k-th largest element (counting from zero)
// s.order_of_key(X); => the number of items in a set that are strictly smaller than our item
// to use ordered multiset :-
    // Instead of int use pair. First is the value that you need to insert, 
    // second is the size of pbds at the moment you insert it. To search just use {value, -1}.
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

