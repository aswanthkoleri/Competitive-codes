/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool isOverlap(Interval Int1,Interval Int2){
    if(max(Int1.start,Int2.start) > min(Int1.end,Int2.end)){
        return false;
    }
    else{
        return true;
    }
}
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    /* Traverse through all the intervals */
    for(int i=0;i<n;i++){
        /* Evaluate all the corner conditions */
        /* 1. If the size of the interval is zero */
        if(newInterval.start==newInterval.start && i==intervals[i].start || i<=intervals[i]){

        }
    }
}
