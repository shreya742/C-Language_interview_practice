//PROGRAM TO CHECK WHETHER CHARACTER IS AN ALPHABET OR NOT.

import java.util.*;

public class Alphabetornot {
public static void main(String[] args){
char ch;
System.out.println("Enter a character: ");
Scanner sc = new Scanner(System.in);
ch = sc.next().charAt(0);
System.out.println();
if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
System.out.println(ch + " is an alphabet");
}
else{
System.out.println(ch + " is not an alphabet");
}
}
}

/*
OUTPUT:
-------

F:\SHREYA\JAVA>javac Alphabetornot.java

F:\SHREYA\JAVA>java Alphabetornot
Enter a character:
S

S is an alphabet
*/