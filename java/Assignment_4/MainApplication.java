import com.test.details.StudentDetails;

public class MainApplication {
    public static void main(String[] args) {
        // Accessing the class from the nested package com.test.details
        StudentDetails student = new StudentDetails("Alice Smith", 101);
        student.displayInfo();
    }
}
