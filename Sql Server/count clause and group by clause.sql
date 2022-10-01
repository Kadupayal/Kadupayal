create table mkp(id int primary key,sname varchar(20),coursename varchar(20),city varchar(20));

insert into mkp values(1,'rohit','dotnet','nagpur')
insert into mkp values(2,'rohita','dotnet','nagpur')
insert into mkp values(3,'rohito','dotnet','mumbai')
insert into mkp values(4,'ruhi','java','nagpur')

select * from mkp

select coursename,count(*) from mkp where city='nagpur' group by coursename