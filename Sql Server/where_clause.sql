create table students (rno int,first_name varchar(20),last_name varchar(20),city varchar(20));
insert into students values(1,'amit','bhai','nagpur') 
insert into students values(2,'amisha','khadase','pune') 
insert into students values(3,'abhishek','kakade','nagpur') 
insert into students values(4,'ajay','lodha','nashik') 
select * from students

select * from students where rno=1
select * from students where rno>4
select * from students where first_name='amit'
select * from students where city='nagpur'
select * from students where first_name='amit' and  city='nagpur'
select * from students where first_name='amit' and  last_name='bhai'
select * from students where rno>3 and  first_name='amit'
select * from students where rno>3 or  first_name='amit'
select * from students where rno in (1,3,4)
select * from students where first_name like '%am%'
select * from students where first_name like 'a%t'
select * from students where first_name like 'a%'
select * from students where first_name like '%abh%'



create table orders1 (orderid int,custname varchar(20),prodname varchar(20),quantity int,orddate date)
insert into orders1 values(1,'amit','mouse',5,'2022-9-7')
select * from orders1
insert into orders1 values(1,'amitabh','mouse',3,'2022-2-7')
insert into orders1 values(1,'ami','keyboard',3,'2022-2-7')
select * from orders1
insert into orders1 values(1,'ami','keyboard',3,'2022-5-1')
select *from orders1 where orddate between '2022-5-1' and '2022-9-7'

