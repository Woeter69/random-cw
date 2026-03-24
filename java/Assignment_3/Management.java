package Assignment_3;

class Employee {
  String name;
  double baseSalary;

  Employee(String name, double baseSalary) {
      this.name = name;
      this.baseSalary = baseSalary;
  }

  double getSalary() {
      return baseSalary;
  }
}

class Manager extends Employee {
  double bonus;

  Manager(String name, double baseSalary, double bonus) {
      super(name, baseSalary);
      this.bonus = bonus;
  }

  @Override
  double getSalary() {
      return super.getSalary() + bonus;
  }
}

class Developer extends Employee {
  int projectsCompleted;

  Developer(String name, double baseSalary, int projects) {
      super(name, baseSalary);
      this.projectsCompleted = projects;
  }

  @Override
  double getSalary() {
      return super.getSalary() + (projectsCompleted * 500);
  }
}

