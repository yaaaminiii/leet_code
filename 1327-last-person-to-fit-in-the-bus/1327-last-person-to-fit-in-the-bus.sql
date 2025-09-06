/* Write your PL/SQL query statement below */
with cte as(
select queue.*,
sum(Weight) over(order by turn) as Total
from queue
)
select person_name from cte where turn=(select max(turn) from cte
 where Total <=1000);
