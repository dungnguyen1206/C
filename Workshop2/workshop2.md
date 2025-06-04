#Workshop_2: Employee Salary Processing System

## Situation Description

The company has employees with varying levels of salaries, and a new HR system is required to:

### 1. Input Details:
- The number of employees.
- The basic salary of each employee.

### 2. Perform the following calculations for each employee:

- **Allowance Calculation:**
  - Basic salary < 6,000,000 → Allowance = 25% of salary.
  - 6,000,000 ≤ Basic salary ≤ 15,000,000 → Allowance = 15% of salary.
  - Basic salary > 15,000,000 → Allowance = 10% of salary.

- **Tax Deduction:**
  - Total income ≤ 8,000,000 → No tax.
  - Total income > 8,000,000 → Tax = 10% of the amount exceeding 8,000,000.

- **Net Income Calculation:**  
  `Net Income = Basic Salary + Allowance - Tax`

### 3. Output:
- For each employee:
  - Basic salary
  - Allowance
  - Tax deduction
  - Net income
- Final summary:
  - Total salary cost of the company
  - Number of employees per allowance category (25%, 15%, 10%)

