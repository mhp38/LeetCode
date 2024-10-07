# Write your MySQL query statement below

select a.unique_id, b.name
 # Unique ID variable doesn't exist will be shown as null, so EmployeeUNI table is put at the right side of LEFT JOIN function
from  Employees b left join EmployeeUNI a
on a.id = b.id ;
