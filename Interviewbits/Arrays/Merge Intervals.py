class Interval:
    def __init__(self,s=0,e=0)
        self.start=s
        self.end=e

def insert(intervals, new_interval):
    if new_interval.start<=new_interval.end:
            first=new_interval.start
            second=new_interval.end
        else:
            first=new_interval.end
            second=new_interval.start
        final=[]
        i = 0
        flag1=0
        while i<len(intervals):
            if first <= intervals[i].end and first >=intervals[i].start:
                newFirst=intervals[i].start
                flag1=1
                # Currently we found the starting index of the new tuple to be added
                # Now I have to find the ending index and also delete all those tuples or intervals that do not contain the second element
                flag=0
                j=i
                while j<len(intervals):
                    if second<=intervals[j].end and second >=intervals[j].start:
                        newSecond=intervals[j].end
                        # Now push the new tuple
                        final.append(Interval(newFirst,newSecond))
                        flag=1
                        break
                    if second
                    j+=1
                if flag==0:
                    final.append(Interval(newFirst,intervals[j-1].end))
                i=j
            elif first< intervals[i].start and flag1=0:
                newFirst=first
                flag=1
                j=i
                while j<len(intervals):
                    if second <= intervals[j].end and second >= intervals[j].start:
                        newSecond = intervals[j].end
                        flag=1
                        # Now push the new tuple
                        final.append(Interval(newFirst,newSecond))
                        
                        break
                    elif if flag==0 and second < intervals[j].start:
                        flag=1 
                        final.append(Interval(newFirst,second))
                        break
                    # if second
                    j+=1
                if flag==0:
                    final.append(Interval(newFirst,intervals[j-1].end))
                # if flag==0 and 
                i=j
             else:
                final.append(intervals[i])
                
            i+=1
        if flag1==0 and len(intervals)<0:
            final.append(Interval(first,second))
        elif flag1==0 and first < intervals[0].start :
            final.append(Interval(first,second))
        elif flag==0:
            final = [Interval(first,second)] + final
        return final