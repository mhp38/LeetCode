# Write your MySQL query statement below
select query_name,
round(AVG(rating/position),2) as quality,
round(AVG (rating < 3 )*100,2) as poor_query_percentage

from Queries

where query_name is NOT NULL

GROUP BY query_name;
