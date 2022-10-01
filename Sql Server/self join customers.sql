create table customers(custid int,custname varchar(45),state varchar(45),city varchar(45))

insert into customers values(1,'amit','mah','nagpur')
insert into customers values(2,'amit','mah','nagpur')
insert into customers values(3,'raj','mp','bhopal')
insert into customers values(4,'bharti','mp','bhopal')
insert into customers values(5,'deepti','mp','indore')

select * from customers

select s1.custname,s2.state,s2.city
from customers s1, customers s2
where s1.custid<>s2.custid and 
s1.city=s2.city
order by s2.city;