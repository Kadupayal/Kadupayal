create view[Students_view]as
select id, first_name, age
from[class practice].[dbo].[Students]
where id>3;

select * from[Students_view];

create view p1
as select * from products2
where unit_price >250

select * from p1

create view p2
as select product_id, product_name from
products2
where unit_price>=100

select * from p2

create view p3
as select
customer.custid, customer.custname,orderse.orderdate,
orderse.productname from customer inner join orderse
on customer.custid=orderse.custid

select * from p3

create view p4
as select 
customer.custid, customer.custname, orderse.orderdate,
orderse.productname from customer inner join orderse
on customer.custid=orderse.custid
where customer.custid>2

select * from p4
