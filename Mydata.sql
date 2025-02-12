-- Step 1: Create Database
CREATE DATABASE company_db;
USE company_db;

-- Step 2: Create Tables
CREATE TABLE employees (
    emp_id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    email VARCHAR(100) UNIQUE,
    phone VARCHAR(15),
    department_id INT,
    salary DECIMAL(10,2),
    hire_date DATE
);

CREATE TABLE departments (
    department_id INT PRIMARY KEY AUTO_INCREMENT,
    department_name VARCHAR(100)
);

-- Step 3: Insert Data
INSERT INTO departments (department_name) VALUES ('HR'), ('IT'), ('Finance');

INSERT INTO employees (first_name, last_name, email, phone, department_id, salary, hire_date) 
VALUES 
('John', 'Doe', 'john.doe@example.com', '1234567890', 1, 60000, '2023-01-15'),
('Jane', 'Smith', 'jane.smith@example.com', '0987654321', 2, 75000, '2022-06-20'),
('Alice', 'Johnson', 'alice.johnson@example.com', '1122334455', 3, 80000, '2021-09-10');

-- Step 4: Retrieve Data
SELECT * FROM employees;
SELECT * FROM departments;
SELECT e.first_name, e.last_name, d.department_name 
FROM employees e 
JOIN departments d ON e.department_id = d.department_id;

-- Step 5: Update Data
UPDATE employees SET salary = 65000 WHERE emp_id = 1;

-- Step 6: Delete Data
DELETE FROM employees WHERE emp_id = 2;

-- Step 7: Create Index
CREATE INDEX idx_department ON employees(department_id);

-- Step 8: Create View
CREATE VIEW employee_details AS 
SELECT e.emp_id, e.first_name, e.last_name, e.salary, d.department_name 
FROM employees e 
JOIN departments d ON e.department_id = d.department_id;

-- Step 9: Stored Procedure
DELIMITER $$
CREATE PROCEDURE GetEmployees()
BEGIN
    SELECT * FROM employees;
END $$
DELIMITER ;

-- Step 10: Execute Stored Procedure
CALL GetEmployees();

-- Step 11: Drop Database (Cleanup if needed)
-- DROP DATABASE company_db;
