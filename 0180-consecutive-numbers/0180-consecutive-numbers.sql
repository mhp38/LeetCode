# Write your MySQL query statement below
#Solution : Two Joins
/*

We can use two joins to solve this problem.

First, we perform a self-join with the condition l1.num = l2.num and l1.id = l2.id - 1, so that we can find all numbers that appear at least twice in a row. Then, we perform another self-join with the condition l2.num = l3.num and l2.id = l3.id - 1, so that we can find all numbers that appear at least three times in a row. Finally, we only need to select the distinct l2.num.

DISTINCT is used to ensure we only return unique numbers that meet the criteria.

*/

SELECT DISTINCT (l2.num) AS ConsecutiveNums 
FROM Logs l1 
JOIN Logs l2 ON l1.id = l2.id-1 AND l1.num = l2.num
JOIN Logs l3 ON l2.id = l3.id-1 AND l2.num = l3.num;