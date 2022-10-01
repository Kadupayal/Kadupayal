
create table customers(custid int,custname varchar(45),state varchar(45),city varchar(45))

insert into customers values(1,'amit','mah','nagpur')
insert into customers values(2,'amit','mah','nagpur')
insert into customers values(3,'raj','mp','bhopal')
insert into customers values(4,'bharti','mp','bhopal')
insert into customers values(5,'deepti','mp','indore')

select * from customers


exec sp_help customer
create table orderse (orderid int, custid int,
orderdate date,
productname varchar(20),qty int)

insert into orderse
values(1,1,'2022-2-2','mouse',5)

insert into orderse
values(1,1,'2022-2-2','keyboard',5)

insert into orderse
values(2,2,'2022-2-2','desktop',5)

insert into orderse
values (2,2,'2022-2-2','ram',5)

insert into orderse
values(3,3,'2022-2-2','laptop',5)

insert into orderse
values(4,3,'2022-1-2','mouse',5)

insert into orderse
values(5,4,'2022-2-2','mouse',5)

insert into orderse
values(6,4,'2022-2-2','ram',5)

insert into orderse
values(7,5,'2022-2-2','desktop',5)

insert into orderse
values(7,5,'2022-2-2','ram',5)

select * from orderse

select * from customers

select custid from customers where
city='nagpur'

select * from orderse

select orderid, custid, orderdate, productname, qty
from orderse
where custid in 
(select custid from customers where
city='nagpur')

select orderid, custid, orderdate, productname,qty 
from orderse
where custid in
(select custid from customers where
city='bhopal')

select orderid, custid, orderdate, productname, qty
from orderse
where custid in
(select custid from customers where
city='indore')

select orderid, custid, orderdate, productname, qty
from orderse
where custid in
(select custid from customers where
city='bhopal')
order by orderdate desc






































