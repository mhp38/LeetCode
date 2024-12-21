# Time:  O(nlogn)
# Space: O(n)

SELECT ids as id, COUNT(*) AS num
   FROM
   (
        SELECT requester_id AS ids FROM RequestAccepted 
        UNION ALL
        SELECT accepter_id FROM RequestAccepted 
    ) AS tmp
GROUP BY ids
ORDER BY num DESC
LIMIT 1
;
