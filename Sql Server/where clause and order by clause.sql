create table cust(custid int , custname varchar(20), custstate varchar(20));
drop table cust

insert into cust values(1,'amit','mah')
insert into cust values(2,'amit','mah')
insert into cust values(3,'raj','mp')
insert into cust values(4,'bharati','mp')
insert into cust values(5,'dipti','mp')

select * from cust

select * from cust where custstate='mp'

select * from cust where custstate='mp' order by custname

select * from cust where custstate='mp' order by custname desc