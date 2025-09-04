/* Write your PL/SQL query statement below */
select department,Employee,salary from
 (select d.name as department,e.name as Employee,e.salary,
 dense_rank() over(partition by d.id order by e.salary desc) as rnk from
 Employee e join Department d
 on e.departmentId=d.id)
 where rnk<=3;
