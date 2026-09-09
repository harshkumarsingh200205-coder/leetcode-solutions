# Write your MySQL query statement below
select name
from Customer c
where (referee_id != 2) 
        OR (referee_id is Null);