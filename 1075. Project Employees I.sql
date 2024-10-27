# Write your MySQL query statement below
select p.project_id , round(AVG(e.experience_years ),2) as average_years
from Project p left join Employee e
on p.employee_id = e.employee_id
GROUP BY project_id;
