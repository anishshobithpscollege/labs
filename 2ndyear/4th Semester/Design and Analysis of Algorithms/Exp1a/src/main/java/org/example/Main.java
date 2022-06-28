/**
 * Experiment - 1a
 * @USN        - 4SO20CS012
 * @SUBJECT    - Design and Analysis of Algorithms Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Create a java class called Student with the following details as variables within it.
 * (a) USN
 * (b) Name
 * (c) Branch
 * (d) Phone
 * Write a Java Program to create n Student objects and print USN, Name, Branch, Phone of these
 * objects with suitable headings.
 */
package org.example;

import java.util.Scanner;

class Student {
    private String usn;
    private String name;
    private String branch;
    private String phone;

    public void read() {
        Scanner sc = new Scanner(System.in);
        usn = sc.nextLine();
        name = sc.nextLine();
        branch = sc.nextLine();
        phone = sc.nextLine();
    }

    public void display() {
        System.out.printf("%s\t%s\t%s\t%s%n", usn, name, branch, phone);
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.print("Enter the total number of students : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        Student[] st = new Student[n];

        for (int i = 0; i < st.length; i++) {
            st[i] = new Student();
            System.out.printf("Enter USN, Name, Branch & Phone no for student %d : ", i + 1);
            st[i].read();
        }

        System.out.print("USN\t\tName\tBranch\tPhone\n");
        for (Student student : st)
            student.display();
    }
}
