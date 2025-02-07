CREATE DATABASE mm;
use mm;-- Step 1: Creating the Employees Table
CREATE TABLE Employees (
    EmployeeID INT PRIMARY KEY,
    Name VARCHAR(50),
    Department VARCHAR(50),
    Salary DECIMAL(10,2)
);

-- Step 2: Inserting Sample Records
INSERT INTO Employees (EmployeeID, Name, Department, Salary)
VALUES 
    (101, 'Alice Johnson', 'HR', 50000.00),
    (102, 'Bob Smith', 'IT', 60000.00),
    (103, 'Charlie Brown', 'Finance', 55000.00),
    (104, 'David Williams', 'IT', 70000.00);

-- Step 3: Creating a View for IT Department Employees
CREATE VIEW IT_Employees AS
SELECT EmployeeID, Name, Salary
FROM Employees
WHERE Department = 'IT';

-- Step 4: Displaying Data from the View
SELECT * FROM IT_Employees;

-- Step 5: Updating the View to Show Only IT Employees with Salary > 60000
CREATE OR REPLACE VIEW IT_Employees AS
SELECT EmployeeID, Name, Salary
FROM Employees
WHERE Department = 'IT' AND Salary > 60000;

-- Step 6: Displaying Updated Data from the View
SELECT * FROM IT_Employees;

-- Step 7: Dropping the View (Optional)
DROP VIEW IT_Employees;
