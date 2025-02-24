-- Step 1: Create Database and Table
CREATE DATABASE IF NOT EXISTS EmployeeDB;
USE EmployeeDB;

CREATE TABLE IF NOT EXISTS employees (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50),
    salary DECIMAL(10,2),
    tax DECIMAL(10,2),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

DELIMITER //

-- Step 2: Function to Calculate Tax Based on Salary
CREATE FUNCTION CalculateTax(salary DECIMAL(10,2)) RETURNS DECIMAL(10,2)
DETERMINISTIC
BEGIN
    DECLARE tax DECIMAL(10,2);
    IF salary > 50000 THEN
        SET tax = salary * 0.2;  -- 20% Tax for high salaries
    ELSE
        SET tax = salary * 0.1;  -- 10% Tax for others
    END IF;
    RETURN tax;
END //

-- Step 3: Procedure to Insert Employee Data
CREATE PROCEDURE InsertEmployee(IN emp_name VARCHAR(50), IN emp_salary DECIMAL(10,2))
BEGIN
    DECLARE emp_tax DECIMAL(10,2);
    SET emp_tax = CalculateTax(emp_salary);

    INSERT INTO employees (name, salary, tax) 
    VALUES (emp_name, emp_salary, emp_tax);
END //

-- Step 4: Procedure to List All Employees Using a Cursor
CREATE PROCEDURE ListEmployees()
BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE emp_name VARCHAR(50);
    DECLARE emp_salary DECIMAL(10,2);
    DECLARE emp_tax DECIMAL(10,2);

    DECLARE cur CURSOR FOR SELECT name, salary, tax FROM employees;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN cur;

    read_loop: LOOP
        FETCH cur INTO emp_name, emp_salary, emp_tax;
        IF done THEN 
            LEAVE read_loop;
        END IF;
        SELECT CONCAT('Name: ', emp_name, ', Salary: ', emp_salary, ', Tax: ', emp_tax) AS EmployeeDetails;
    END LOOP;

    CLOSE cur;
END //

-- Step 5: Procedure to Count from 1 to N Using a WHILE Loop
CREATE PROCEDURE CountToN(IN n INT)
BEGIN
    DECLARE i INT DEFAULT 1;

    WHILE i <= n DO
        SELECT CONCAT('Number: ', i);
        SET i = i + 1;
    END WHILE;
END //

-- Step 6: Trigger to Set Default Salary Before Insert
CREATE TRIGGER before_insert_employee
BEFORE INSERT ON employees
FOR EACH ROW
BEGIN
    IF NEW.salary IS NULL OR NEW.salary = 0 THEN
        SET NEW.salary = 30000;
        SET NEW.tax = CalculateTax(30000);
    END IF;
END //

DELIMITER ;

-- Step 7: Insert Sample Employees
CALL InsertEmployee('Alice', 60000);
CALL InsertEmployee('Bob', 45000);
CALL InsertEmployee('Charlie', NULL);

-- Step 8: List All Employees
CALL ListEmployees();

-- Step 9: Count from 1 to 5
CALL CountToN(5);
