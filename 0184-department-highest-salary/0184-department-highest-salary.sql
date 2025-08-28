/* Write your PL/SQL query statement below */
select d.name as Department,e.name as Employee,salary  from
Employee e  join Department d
on e.departmentId=d.id
where (d.id,e.salary) in
(select DepartmentId,max(salary) from
 employee 
  group by departmentId);