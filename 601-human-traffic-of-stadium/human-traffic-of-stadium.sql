# Write your MySQL query statement below
with cte as(
    select id, visit_date,people,id-row_number() over(order by id) as grp from stadium where people>=100
),
grp_cnt as(
    select grp,count(grp) from cte group by grp having count(grp)>=3
)
select c.id, c.visit_date,c.people from cte c join grp_cnt g on c.grp=g.grp order by c.visit_Date
