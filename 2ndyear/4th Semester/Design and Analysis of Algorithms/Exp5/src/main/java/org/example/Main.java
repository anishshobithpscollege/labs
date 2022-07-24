/**
 * Experiment - 5
 * @USN        - 4SO20CS012
 * @SUBJECT    - Design and Analysis of Algorithms Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Sort a given set of n integer elements using Merge Sort method and compute its time complexity.
 * Run the program for varied values of n > 5000, and record the time taken to sort. Plot a graph of the time
 * taken versus n on graph sheet. The elements can be read from a file or can be generated using the random
 * number generator. Demonstrate using Java how the divide and conquer method works along with its
 * time complexity analysis: worst case, average case and best case.
 */

package org.example;

import java.util.Random;
import java.util.Scanner;


public class Main {

        private int[] a;

        void input() {
            Scanner sc = new Scanner(System.in);
            Random rm = new Random();

        System.out.print("Enter the total numbers : ");
        int n = sc.nextInt();
        a = new int[n];

        for (int i = 0; i < n; i++)
            a[i] = rm.nextInt(1000);
    }

    void display() {
        for (int x: a)
            System.out.printf("%d ", x);
    }

    void sort() {
        mergesort(0, a.length - 1);
    }

    void mergesort(int left, int right) {
        int mid;

        if (left < right) {
            mid = (left + right) / 2;
            mergesort(0, mid - 1);
            mergesort(mid + 1, right);
            merge(left, mid, right);
        }
    }

    void merge(int left, int mid, int right) {
        int[] temp = new int[a.length];

        for (int i = left; i <= right; i++)
            temp[i] = a[i];
        int i = left;
        int j = mid + 1;
        int k = left;

        while (i <= mid && j <= right) {
            if (temp[i] <= temp[j])
                a[k++] = temp[i++];
            else
                a[k++] = temp[j++];
        }

        while (i <= mid)
            a[k++] = temp[i++];
        while (j <= right)
            a[k++] = temp[j++];
    }

    public static void main(String[] args) {
        Main sorter = new Main();
        sorter.input();
        //System.out.println("Array before sorting : ");
        //sorter.display();
        //System.out.println("\nArray after sorting : ");
        long startTime = System.nanoTime();
        sorter.sort();
        long endTime = System.nanoTime();
        //sorter.display();
        System.out.printf("\nTime taken : %f\n", (double)(endTime - startTime) / 1_000_000);
    }
}
