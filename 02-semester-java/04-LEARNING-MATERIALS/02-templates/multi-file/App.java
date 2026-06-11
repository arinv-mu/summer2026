package com.example;

/**
 * Example class for the package structure.
 */
public class App {
    public static void main(String[] args) {
        System.out.println("Hello from App!");
        
        Util util = new Util();
        int result = util.add(5, 3);
        System.out.println("5 + 3 = " + result);
    }
}
