/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user
 */
public class Student {
    private String AM;
    private String onomatEpwnymo;
    private Integer etosEisagwgis;
    
    public Student(String ArithmosM , String onomatEp , Integer etosEis) {
        AM = ArithmosM;
        onomatEpwnymo = onomatEp;
        etosEisagwgis = etosEis;
    }
    
    public static void main(String[] args) {
        Student st1 = new Student("20177" , "Polukarpou Klewn" , 2020);
        
        System.out.println(st1.AM);
        System.out.println(st1.onomatEpwnymo);
        System.out.println(st1.etosEisagwgis);
        
        Student st2 = new Student("20001" , "Gewrgiou Aristea" , 1998);
        
        System.out.println(st2.AM);
        System.out.println(st2.onomatEpwnymo);
        System.out.println(st2.etosEisagwgis);
       
     }

}

