# Write your MySQL query statement below
with cte as (
    select *, dense_rank() over(order by score desc) as rn from scores
)

select score, rn as 'rank' from cte