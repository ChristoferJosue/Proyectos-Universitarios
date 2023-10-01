import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import javax.swing.JOptionPane;

import java.io.*;

public class problema1{
    static problema1 o;
    static int n,l,s;
    public static void menu()throws IOException //menu que te permite elegir entre desencriptar y encriptar segun lo que el usuario teclee 
    {
        do
        {

        
            /*InputStreamReader isr=new InputStreamReader(System.in);
            BufferedReader read = new BufferedReader(isr);*/
            n=0;
            //System.in.skip(2);
            n=Integer.parseInt(JOptionPane.showInputDialog("Pulse 1 para desencriptar , 2 para encriptar y presione 3 para salir"));
                if(n==1)
                {
                    o.desencriptar();
                }
                else if(n==2)
                {
                    o.encriptar();
                }
                else if(n==3)
                {
                    JOptionPane.showMessageDialog(null,"gracias,vuelva pronto");
                    //System.out.println("Gracias, vuelva pronto");
                }
                else
                {
                    JOptionPane.showMessageDialog(null,"El numero tecleado no esta dentro de las posibilidades, teclee otra vez");
                    //System.out.println("el numero tecleado no esta dentro de las posibilidades, teclee otra vez ");
                o.menu(); 
                }
        }      
        while(n!=3);
    }
    public static void encriptar() throws IOException
    {
        
        do{

            //System.out.println("introduzca la letra que se convertira a Formato ASCII");
            //System.in.skip(2);
            //l=System.in.read()-1;
            l=JOptionPane.showInputDialog("introduzca la letra que se convertira a Formato ASCII").charAt(0)-1;
            JOptionPane.showMessageDialog(null,"el codigo ASCII ES "+l);
            //System.out.println(l);
            //System.out.println("si desea continuar teclee 0, si no teclee otro numero");
            //System.in.skip(2);
            //s=System.in.read();
             
            s=JOptionPane.showInputDialog("si desea continuar teclee 0, si no teclee otro numero ").charAt(0);
            
            
        }
        while(s=='0');
    }
    public static void desencriptar () throws IOException
    {
        do{
            //InputStreamReader isr=new InputStreamReader(System.in);
            //BufferedReader read = new BufferedReader(isr);
            //try
            //{   
                
                //System.out.println("introduzca el numero ASCII que se transformara a caracter ");
                //System.in.skip(2);
                //int i=Integer.parseInt(read.readLine());
                int i=Integer.parseInt(JOptionPane.showInputDialog("INtroduzca el numero ASCII que se transformara en caracter"));
                i=i+1;
                char A=(char)i;
                JOptionPane.showMessageDialog(null,"su caracter es:"+A);
                //System.out.println("Su caracter es:"+A);
                //System.out.println("si desea continuar teclee 0, si no teclee otro numero");
                //System.in.skip(2);                
                //s=System.in.read();
                s=JOptionPane.showInputDialog("si desea continuar teclee 0, si no teclee otro numero ").charAt(0);
                
            //}
            //catch(IOException e)
            /*{
                System.out.println("Error en la entrada/salida de datos");
            }*/
        }
        while(s=='0');
    }
    public static void main(String[] args) throws Exception {
       o = new problema1();
       o.menu();
    }
}
 