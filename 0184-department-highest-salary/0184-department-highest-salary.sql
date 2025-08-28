/* Write your PL/SQL query statement below */
select d.name as Department,e.name as Employee,salary  from
Employee e  join Department d
on e.departmentId=d.id
where (d.name,e.salary) in
(select d.name,max(e.salary) from
  Employee e join Department d
  on e.departmentId=d.id
  group by d.name);