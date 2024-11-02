# Write your MySQL query statement below

# m for manager and e for employee

SELECT m.employee_id, m.name, COUNT(e.reports_to)as reports_count, ROUND(AVG(e.age),0) as average_age
FROM Employees m INNER JOIN Employees e
ON m.employee_id = e.reports_to
GROUP BY 1
ORDER BY 1 ASC;
