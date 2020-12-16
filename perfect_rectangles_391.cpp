//
// Created by root on 2020/11/25.
//

#include "perfect_rectangles_391.h"
#include <iostream>
#include <vector>
#include <set>

using namespace std;
class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        int llx = INT32_MAX, lly = INT32_MAX, rhx = -INT32_MAX, rhy = -INT32_MAX;
        int real_area = 0;
        set<pair<int, int>> point;
        for (auto rbegan = rectangles.begin(); rbegan != rectangles.end(); rbegan++) {
            //因为[]的优先级高于*，所以要为*加括号
            llx = min(llx, (*rbegan)[0]);
            lly = min(lly, (*rbegan)[1]);
            rhx = max(rhx, (*rbegan)[2]);
            rhy = max(rhy, (*rbegan)[3]);
            real_area += ((*rbegan)[2] - (*rbegan)[0]) * ((*rbegan)[3] - (*rbegan)[1]);
            auto p1 = make_pair((*rbegan)[0], (*rbegan)[1]);
            auto p2 = make_pair((*rbegan)[0], (*rbegan)[3]);
            auto p3 = make_pair((*rbegan)[2], (*rbegan)[1]);
            auto p4 = make_pair((*rbegan)[2], (*rbegan)[3]);
            auto plist = {p1,p2,p3,p4};
            for(auto ip : plist){
                auto pitearo = point.find(ip);
                if ((pitearo) != point.end()) {
                    point.erase(pitearo);
                } else {
                    point.insert(ip);
                }
            }
        }
        int give_area = (rhy - lly) * (rhx - llx);
        if (give_area != real_area)
            return false;
        if(point.size()!= 4)
            return false;
        if(point.find(make_pair(llx,lly)) == point.end())
            return false;
        if(point.find(make_pair(llx,rhy)) == point.end())
            return false;
        if(point.find(make_pair(rhx,lly)) == point.end())
            return false;
        if(point.find(make_pair(rhx,rhy)) == point.end())
            return false;
        return true;
    }
};
int main() {
    vector<vector<int>> va = {{1,1,3,3},{3,1,4,2},{3,2,4,4},{1,3,2,4},{2,3,3,4}};


    Solution solution;
    if(solution.isRectangleCover(va)){
        cout << "is Rectangle"<<endl;
    } else{
        cout << "is not Rectangle"<<endl;
    }
////    std::cout << "Hello, World!" << std::endl;
//    set<pair<int,int>> point;
//    point.insert(make_pair(1,3));
//    pair<int,int> pair1(1,2);
////    if(point.find(pair1) != point.end())
////        cout << "find";
//    if(point.find(make_pair(1,3)) != point.end())
//        cout << "find"<<endl;
//    cout << point.size()<<endl;
    return 0;
}