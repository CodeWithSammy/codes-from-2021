public class patterns {
    // public static void main(String args[])
    // {
    //     int l,w,k;
    //     for(k=1;k<5;k++)
    //         System.out.print("C");//prints first horizontal lines
    //     for(l=0;l<6;l++)
    //         System.out.println("C");//prints vertical lines
    //     for(w=0;w<5;w++)
    //         System.out.print("C");//prints second horizontal line
    // }

    // public static void main(String args[])
    // {
    //     int c;
    //     for(c=1;c<=13;c++)
    //         if(c<5)//1 to 5 horizontal
    //             System.out.print("C");
    //         else if(c<=8)//5 to8
    //             System.out.println("C");
    //         else// 9 and above
    //             System.out.print("C");
    // }

    public static void main(String args[])
    {
        int c;
        for(c=1;c<=18;c++)
            if(c<5)//1 to 5 horizontal
                System.out.print("C");
            else if(c<=8)//5 to8
                System.out.println("C");
            else if(c<8)//5 to8
                System.out.print("C");
    }
}
