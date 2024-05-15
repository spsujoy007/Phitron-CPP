CREATE DATABASE Assignment_M4;
USE Assignment_M4;

CREATE TABLE Student(
	roll INT PRIMARY KEY,
    name varchar(25) NOT NULL,
    class varchar(5) NOT NULL
);

CREATE TABLE Library(
	student_roll INT unique, 
    BookName VARCHAR(30) NOT NULL,
    Book_id INT PRIMARY KEY,
    p_date VARCHAR(20) NOT NULL,
    e_date VARCHAR(20) NOT NULL,
    constraint FOREIGN KEY (student_roll) REFERENCES Student(roll)
);

CREATE TABLE Fees(
    student_roll INT primary key,
    bookId INT,
    fees INT NOT NULL,
	FOREIGN KEY (student_roll) references Library(student_roll),
    FOREIGN KEY (bookId) references Library(Book_id)
);
