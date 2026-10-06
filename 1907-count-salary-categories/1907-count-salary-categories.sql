# Write your MySQL query statement below
SELECT
    c.category,
    COUNT(a.account_id) AS accounts_count
FROM
(
    SELECT 'Low Salary' AS category
    UNION ALL
    SELECT 'Average Salary'
    UNION ALL
    SELECT 'High Salary'
) c
LEFT JOIN Accounts a
    ON c.category =
       CASE
           WHEN a.income < 20000 THEN 'Low Salary'
           WHEN a.income <= 50000 THEN 'Average Salary'
           ELSE 'High Salary'
       END
GROUP BY c.category;