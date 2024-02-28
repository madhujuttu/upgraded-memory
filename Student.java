import java.util.Scanner;
public class Student {
    String fullName;
    int rollNum;
    double semPercentage;
    String collegeNmae;
    int collegeCode;
    Student(){
        System.out.println("student ID is created");
    }
    Student(String fullName,int rollNum, double semPercentage,String collegeNmae,int collegeCode){
        this.fullName = fullName;
        this.rollNum = rollNum;
        this.semPercentage = semPercentage;
        this.collegeNmae = collegeNmae;
        this.collegeCode = collegeCode;
    }
    void display(){
        System.out.println("student full name "+fullName);
        System.out.println("student roll number "+rollNum);
        System.out.println("student sem percentage "+semPercentage);
        System.out.println("student college name "+collegeNmae);
        System.out.println("student college code "+collegeCode);
    }
}
class test{
    public static void main(String[] args) {
        String fullName;
        int rollNum;
        double semPercentage;
        String collegeName;
        int collegeCode;
        Scanner input=new Scanner(System.in);
        System.out.println("Student name: ");
        fullName=input.nextLine();
        System.out.println("Enter your Roll Number: ");
        rollNum=input.nextInt();
        System.out.println("Enter your Sem Percentage: ");
        semPercentage=input.nextDouble();
        input.nextLine();
        System.out.println("Enter your College Name:  ");
        collegeName=input.nextLine();
        System.out.println("Enter your College Code: ");
        collegeCode=input.nextInt();
        Student constructor = new Student(fullName, rollNum, semPercentage, collegeName, collegeCode);
        constructor.display();
        input.close();
    }
}
