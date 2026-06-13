import java.io.*;
class bfw
{
    public static void main(String args[])throws IOException
    {
        FileOutputStream fn=new FileOutputStream("C:\\Users\\adity\\write.dat");
        DataOutputStream da=new DataOutputStream(fn);
        String n;
        n="Aditya";
        da.writeUTF(n);
        da.close();
    }
}