# Write your MySQL query statement below

# The CROSS JOIN keyword returns all records from both tables
# https://www.w3schools.com/mysql/mysql_join_cross.asp

select st.student_id , st.student_name , sub.subject_name , count(e.subject_name) as attended_exams

from Students st CROSS JOIN Subjects sub LEFT JOIN Examinations e

on st.student_id = e.student_id  and sub.subject_name = e.subject_name

group by student_id , student_name , subject_name

order by student_id , subject_name, student_name  ;
