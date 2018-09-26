faculty(aswanth,professor,ai,it).
faculty(saumya,asstProfessor,deepLearning,ece).
faculty(pranav,professor,electronics,mba).

isFaculty(X) :-
    faculty(X,_,_,_),
    format('Yes ~w is a faculty working as ~w',[X,Y]).

facultyList :-
    faculty(X,_,_,_),
    format('~w ~n',[X]).


facultyType(X) :- 
    faculty(X,Y),
    format('Department of ~w is ~w',[X,Y]).    

getAreas :-
    faculty(_,_,X),
    format('Area : ~w',[X]).

getDept :-
    faculty(_,_,_,X),
    format('Dept : ~w',[X]).

deptOf(X) :-
    faculty(X,_,_,Y),
    format('Department of ~w is ~w ',[X,Y]).

countfaculty:-
    aggregate_all(count,isFaculty(X),Count).