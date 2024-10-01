# Write your MySQL query statement below

UPDATE salary
SET sex=
  CASE WHEN
   sex='f' then 'm'
   else 'f'

   END;
