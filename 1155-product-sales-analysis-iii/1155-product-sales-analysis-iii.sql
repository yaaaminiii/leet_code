/* Write your PL/SQL query statement below */
/*select product_id,year as first_year,quantity,price from Sales 
where (product_id,year) in 
(select product_id,min(year) as first_year from Sales
group by product_id);*/


select product_id,year as first_year,quantity,price from Sales s where  year=
(select min(year) from sales
where product_id=s.product_id);
