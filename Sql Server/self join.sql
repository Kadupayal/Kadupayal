CREATE TABLE Students (    
id int PRIMARY KEY IDENTITY,     
admission_no varchar(45) NOT NULL,  
first_name varchar(45) NOT NULL,      
last_name varchar(45) NOT NULL,  
age int,  
city varchar(25) NOT NULL      
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

select * from Students

select s1.first_name,s2.last_name,s2.city
from Students s1, Students s2
where s1.id<>s2.id and s1.city=s2.city
order by s2.city;