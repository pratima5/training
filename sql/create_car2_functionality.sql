create table car2.functionality
(
ID int primary key auto_increment,
feature varchar(20),
value boolean,
created_on timestamp DEFAULT CURRENT_TIMESTAMP,
 carID INT,
 FOREIGN KEY (ID) 
        REFERENCES car2.car(carID)
);