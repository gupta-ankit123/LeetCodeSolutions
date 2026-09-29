CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      with cte as(
        select *, dense_rank() over(order by salary desc) as rn from employee
      )
      select max(salary) from cte where rn=n
  );
END