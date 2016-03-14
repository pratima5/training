create table car2.functionality
(
 id INT AUTO_INCREMENT PRIMARY KEY,
 feature_name varchar(20),
 value boolean,
 created_on timestamp DEFAULT CURRENT_TIMESTAMP,
 FOREIGN KEY (id) 
        REFERENCES car2.car(carID)
 );