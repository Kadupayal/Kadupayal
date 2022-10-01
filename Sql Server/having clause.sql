create table student(roll_no int,firstname varchar(20),lastname varchar(20),course varchar(20),city varchar(20),state varchar(20));

insert into student values(1,'amit','shah','dotnet','nagpur','mah')

insert into student values(2,'rajesh','kumar','dotnet','mumbai','mah')

insert into student values(3,'dilip','sharma','java','nagpur','mah')

insert into student values(4,'arifa','patil','java','nagpur','mah')

insert into student values(5,'mayuri','meshram','dotnet','mumbai','mah')

select * from student

select city,COUNT(*) from student where state = 'mah' group by city

select city,COUNT(*) from student where state = 'mah' group by city having COUNT(*) > 2

