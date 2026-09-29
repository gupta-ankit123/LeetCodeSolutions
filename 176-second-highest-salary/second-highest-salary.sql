# Write your MySQL query statement below
with rn as(
    select id , salary,dense_rank() over( order by salary desc) as rnk from employee
)

select max(salary) as SecondHighestSalary from rn where rnk=2