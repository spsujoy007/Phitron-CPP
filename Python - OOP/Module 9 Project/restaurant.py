from menu import Menu
class Restaurent:
    def __init__(self, name):
        self.name = name
        self.employees = []
        self.menu = Menu()

    # add a employee
    def add_employee(self, employee):
        self.employees.append(employee)
        print(f'Employee: {employee.name} is added!')

    #view employees
    def view_employees(self):
        print('________________')
        print("Employees list: ")
        count = 0
        for emp in self.employees:
            count += 1
            print(count,'-', emp.name, emp.phone, emp.email, emp.address, emp.age, emp.designation, emp.salary)
        print('________________')