CREATE TABLE products(
    product_id INT IDENTITY PRIMARY KEY,
    product_name VARCHAR(255) NOT NULL,
    unit_price DEC(10,2) CHECK(unit_price > 0)
);
insert into products1 values('mouse',120)
insert into products1 values('mouse',0)

drop table products
CREATE TABLE products(
    product_id INT IDENTITY PRIMARY KEY,
    product_name VARCHAR(255) NOT NULL,
    unit_price DEC(10,2) CONSTRAINT positive_price CHECK(unit_price > 0)
);
INSERT INTO products(product_name, unit_price)
VALUES ('Awesome Free Bike', 0);

INSERT INTO products(product_name, unit_price)
VALUES ('Awesome Bike', 599);

INSERT INTO products(product_name, unit_price)
VALUES ('Another Awesome Bike', NULL);

create table products2(
product_id int identity primary key,
product_name varchar(255)not null,
unit_price dec(10,2)check(unit_price>0),
discounted_price dec(10,2)check(discounted_price>0),
check(discounted_price<unit_price)
);

insert into products2
values('mouse',120,20)
insert into products2
values('mouse',0,0)
insert into products2
values('mouse',120,220)

CREATE TABLE products(
    product_id INT IDENTITY PRIMARY KEY,
    product_name VARCHAR(255) NOT NULL,
    unit_price DEC(10,2) ,
    discounted_price DEC(10,2),
    CHECK(unit_price > 0),
    CHECK(discounted_price > 0),
    CHECK(discounted_price > unit_price)
);

CREATE TABLE products(
    product_id INT IDENTITY PRIMARY KEY,
    product_name VARCHAR(255) NOT NULL,
    unit_price DEC(10,2),
    discounted_price DEC(10,2),
    CHECK(unit_price > 0),
    CHECK(discounted_price > 0 AND discounted_price > unit_price)
);

CREATE TABLE products(
    product_id INT IDENTITY PRIMARY KEY,
    product_name VARCHAR(255) NOT NULL,
    unit_price DEC(10,2),
    discounted_price DEC(10,2),
    CHECK(unit_price > 0),
    CHECK(discounted_price > 0 AND discounted_price > unit_price)
);

CREATE TABLE products(
    product_id INT IDENTITY PRIMARY KEY,
    product_name VARCHAR(255) NOT NULL,
    unit_price DEC(10,2),
    discounted_price DEC(10,2),
    CHECK(unit_price > 0),
    CHECK(discounted_price > 0),
    CONSTRAINT valid_prices CHECK(discounted_price > unit_price)
);
CREATE TABLE products3(
    product_id INT IDENTITY PRIMARY KEY,
    product_name VARCHAR(255) NOT NULL,
    unit_price DEC(10,2) NOT NULL
);

ALTER TABLE products
ADD CONSTRAINT positive_price CHECK(unit_price > 0);

ALTER TABLE products
ADD discounted_price DEC(10,2)
CHECK(discounted_price > 0);

alter table products6
add discounted_price varchar(20)


ALTER TABLE products
ADD CONSTRAINT valid_price 
CHECK(unit_price > discounted_price);

ALTER TABLE products
DROP CONSTRAINT positive_price;

ALTER TABLE products
NO CHECK CONSTRAINT valid_price;



