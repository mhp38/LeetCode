# Write your MySQL query statement below

select w1.Id
from Weather w1
join Weather w2
on TO_DAYS(w1.RecordDate) = TO_DAYS(w2.RecordDate)+1 and w1.Temperature > w2.Temperature;


/*
TO_DAYS(x.DATE): return the number of days between from year 0 to date DATE
*/

