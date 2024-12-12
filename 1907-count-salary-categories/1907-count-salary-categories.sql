/*
Approach : Filtering + Merging
We can filter out the number of bank accounts for each salary category separately, and then merge the results. Here, we use UNION to merge the results.
*/

# Write your MySQL query statement below

SELECT 'Low Salary' AS category, COUNT(*) AS accounts_count FROM Accounts WHERE income < 20000

UNION

SELECT 'Average Salary' AS category, COUNT(*) AS accounts_count FROM Accounts WHERE income >= 20000 AND income <= 50000

UNION

SELECT 'High Salary' AS category, COUNT(*) AS accounts_count FROM Accounts WHERE income >50000;