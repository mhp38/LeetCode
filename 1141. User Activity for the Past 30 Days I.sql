# Write your MySQL query statement below

SELECT activity_date as day, COUNT(DISTINCT(user_id)) as active_users
FROM Activity
WHERE activity_date <= '2019-07-27' AND DATEDIFF("2019-07-27",activity_date) < 30
GROUP BY activity_date;

