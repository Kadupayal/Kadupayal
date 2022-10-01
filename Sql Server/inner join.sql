----inner join---

CREATE TABLE Students (    
id int PRIMARY KEY IDENTITY,     
admission_no varchar(45) NOT NULL,  
first_name varchar(45) NOT NULL,      
last_name varchar(45) NOT NULL,  
age int,  
city varchar(25) NOT NULL      
);    

create table fee(
admission_no varchar(45) not null,
course varchar(45) not null,
amount_paid int,
);

insert into Students(admission_no,first_name,last_name,age,city)
values(3354,'Luisa','Evans',13,'Texas'),
(2135,'Paul','Ward',15,'Alaska'),
(4321,'Peter','Bennett',14,'California'),
(4213,'Carlos','Patterson',17,'New York'),
(5112,'Rose','Hugs',16,'Florida'),
(6113,'Marielia','Simmons',15,'Arizona'),
(7555,'Antonio','Butler',14,'New York'),
(8345,'Diego','Cox',13,'California');

insert into fee(admission_no,course,amount_paid)
values(3354,'Java',20000),
(7555,'Android',22000),
(4321,'Python',18000),
(8345,'SQL',15000),
(5112,'Machine Learning',30000);

select * from Students

select * from fee

SELECT Students.admission_no, Students.first_name, Students.last_name, Fee.course, Fee.amount_paid  
FROM Students  
INNER JOIN Fee  
ON Students.admission_no = Fee.admission_no;  

------cross join---------

select Students.admission_no,
Students.first_name,
Students.last_name,Fee.course,
Fee.amount_paid
from students
cross join Fee

select students.admission_no,Students.first_name,Students.last_name,Fee.course,Fee.amount_paid
from students
cross join Fee
where Students.admission_no=Fee.admission_no;

----left outer join----

select Students.admission_no,Students.first_name,Students.last_name,Fee.course,Fee.amount_paid
from Students
left outer join Fee
on Students.admission_no=Fee.admission_no;


----right outer join---

select Students.admission_no,Students.first_name,Students.last_name,Fee.course,
Fee.amount_paid
from Students
right outer join Fee
on Students.admission_no=Fee.admission_no;


----full outer join---

select Students.admission_no,Students.first_name,Students.last_name,Fee.course,Fee.amount_paid
from Students
full outer join Fee 
on Students.admission_no=Fee.admission_no;