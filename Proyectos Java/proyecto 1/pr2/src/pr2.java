import java.io.BufferedReader;
import java.io.IOException;
import javax.swing.JOptionPane;
import java.io.*;

public class pr2
{
    //variables globales 

    static int cedula,vcoc,presidente,blanco,coclemasv,veraguasmasv,bocasmasv,panamamasv;
    static int chris,chrisc,chrisv,chrisp,chrisb ;//para almacenar el candidato de cada provincia y el normal  son los votos totales , al igual que en manuel, chayanne.
    static int manu,manuc,manuv,manup,manub;
    static int cha, chac,chav,chap,chab;
    static int coclet,panamat,veraguast,bocast,votot;
    static char provincia;
    static pr2 o;
    static String nomprov,nompres,coclemas,bocasmas,panamamas,veraguasmas;

    public static void mejor()//MEJOR EN CADA PROVINCIA     
    {
        //mas votado por coclé 
        if(chrisc>manuc&&chrisc>chac)
        {
            coclemas="Christofer González ";//le asigna el nombre al mas votado en esta provincia 
            coclemasv=chrisc;//le asigna su resultado al mas votado en esta provincia 
        }
        else if(manuc>chrisc&&manuc>chac)
        {
            coclemas="Manuel Rivera";
            coclemasv=manuc;
        }
        else 
        {
            coclemas="Chayanne";
            coclemasv=chac;
        }

        //mas votado por bocas
        if(chrisb>manub&&chrisb>chab)
        {
            bocasmas="Christofer González ";
            bocasmasv=chrisb;
        }
        else if(manub>chrisb&&manub>chab)
        {
            bocasmas="Manuel Rivera";
            bocasmasv=manub;
        }
        else 
        {
            bocasmas="Chayanne";
            bocasmasv=chab;
        }

        //mas votado por Panama 
        if(chrisp>manup&&chrisp>chap)
        {
            panamamas="Christofer González ";
            panamamasv=chrisp;
        }
        else if(manup>chrisp&&manup>chap)
        {
            panamamas="Manuel Rivera";
            panamamasv=manup;
        }
        else 
        {
            panamamas="Chayanne";
            panamamasv=chab;
        }
        
        //mas votado por veraguas

        if(chrisv>manuv&&chrisv>chav)
        {
            veraguasmas="Christofer González ";
            veraguasmasv=chrisv;
        }
        else if(manuv>chrisv&&manuv>chav)
        {
            veraguasmas="Manuel Rivera";
            veraguasmasv=manuv;
        }
        else 
        {
            veraguasmas="Chayanne";
            veraguasmasv=chav;
        }
    }


    public static void resultados()
    {
        coclet=chrisc+manuc+chac;
        panamat=chrisp+manup+chap;
        veraguast=chrisv+manuv+chav;
        bocast=chrisb+manub+chab;
        votot=coclet+panamat+veraguast+bocast;
        o.mejor();
        JOptionPane.showMessageDialog(null,"total de votos: "+votot+"\ncocle tiene un total de votos: "+coclet+"\nPanama tiene un total de: "+panamat+"\nveraguas tiene un total de:"+veraguast+"\nBocas del toro tiene un total de:"+bocast);
        JOptionPane.showMessageDialog(null,"-votos en Cocle-: "+"\nChristofer González: "+chrisc+"\nManuel rivera: "+manuc+"\nChayanne: "+ chac+"\n-votos en Panama-: "+"\nChristofer González: "+chrisp+"\nManuel rivera: "+manup+"\nChayanne: "+ chap+"\n-votos en Veraguas: -"+"\nChristofer González: "+chrisv+"\nManuel rivera: "+manuv+"\nChayanne: "+ chav+"\n-votos en Bocas del Toro-: "+"\nChristofer González: "+chrisb+"\nManuel rivera: "+manub+"\nChayanne: "+ chab);
        JOptionPane.showMessageDialog(null,"Mas votda en Cocle: "+coclemas+" "+coclemasv+"\nMas votado en Panama: "+panamamas+" "+panamamasv+"\nMas votado en veraguas: "+veraguasmas+" "+veraguasmasv+"\nMas votados Bocas del toro: "+bocasmas+" "+bocasmasv+"\n Votos en blancos son: "+blanco);
    }
    public static void presi()
    {
        presidente=JOptionPane.showInputDialog(null,"Ingrese el Candidato a votar\n Presione(1) para Christofer Gonzalez\n Presione(2) para Manuel Rivera\n Presione(3) para Chayanne\n Presione(4) para voto en blanco\n").charAt(0);
        switch (presidente) 
        {
            case '1':
                    if(provincia=='c'||provincia=='C')
                    {
                        chrisc=chrisc+1;//un contador de candidato por cada provincia, para poder luego decidir cual es el mejor en cada provincia 
                    }
                    else if(provincia=='v'||provincia=='V')
                    {
                        chrisv=chrisv+1;
                    }
                    else if(provincia=='P'||provincia=='p')
                    {
                        chrisp=chrisp+1;
                    }
                    else 
                    {
                        chrisb=chrisb+1;
                    }
                    nompres="Christofer Gonzalez";
                    chris=chris+1;

                break;
            case '2':
                     if(provincia=='c'||provincia=='C')
                    {
                        manuc=manuc+1;
                    }
                    else if(provincia=='v'||provincia=='V')
                    {
                        manuv=manuv+1;
                    }
                    else if(provincia=='P'||provincia=='p')
                    {
                        manup=manup+1;
                    }
                    else 
                    {
                        manub=manub+1;
                    }
                    nompres="Manuel Rivera";
                    manu=manu+1;
                break;
            case '3':
                    if(provincia=='c'||provincia=='C')
                    {
                        chac=chac+1;
                    }
                    else if(provincia=='v'||provincia=='V')
                    {
                        chav=chav+1;
                    }
                    else if(provincia=='P'||provincia=='p')
                    {
                        chap=chap+1;
                    }
                    else 
                    {
                        chab=chab+1;
                    }
                    nompres="Chayanne";
                    cha=cha+1;
                break;
            case '4':
                    nompres="voto en blanco";
                    blanco=blanco+1;
                break;    
           default:
                    JOptionPane.showMessageDialog(null,"La opcion ingresada no esta en nuetra base de datos, Vuelva a intentarlo.");
                     o.presi();
                break;
        }
        JOptionPane.showMessageDialog(null,"usted ha elegido a: "+nompres);
    }
    public static void prov()
    {
        provincia=JOptionPane.showInputDialog("Ingrese su provincia con la inicial de esta\n Ingrese una (c) para Cocle\n Ingrese una (p) para Panama\n Ingrese una (v) para veraguas\n Ingrese una (B) para Bocas del toro\n").charAt(0); 
        switch (provincia) 
        {
            case 'c': case 'C':
                nomprov="Cocle";
                JOptionPane.showMessageDialog(null,"la provincia elegida es: "+nomprov);

                o.presi();
                break;
            case 'p':case 'P':
                nomprov="Panama";
                JOptionPane.showMessageDialog(null,"la provincia elegida es: "+nomprov);
                o.presi();
                break;
            case 'v':case'V':
                nomprov="Veraguas";
                JOptionPane.showMessageDialog(null,"la provincia elegida es: "+nomprov);
                o.presi();
                break;
            case 'b': case 'B':
                nomprov="Bocas del toro";
                JOptionPane.showMessageDialog(null,"la provincia elegida es: "+nomprov);
                o.presi();
                break;
            default:
                JOptionPane.showMessageDialog(null,"la letra ingresada no esta en nuetra base de datos, Vuelva a intentarlo.");
                o.prov();
                break;
        }
 
    }
    public static void menu() 
    {
        
        cedula=Integer.parseInt(JOptionPane.showInputDialog("Ingresar numero de cedula(sin guiones)"));
        JOptionPane.showMessageDialog(null,"su numero de cedula es: "+cedula);
        o.prov();

    }
    public static void main(String[] args) throws Exception 
    {
        int reps;
        do
        {
            o=new pr2();
            o.menu();
            reps=Integer.parseInt(JOptionPane.showInputDialog("para repetir teclee 0 si desea mostrar los resultados  teclee cualquier otro numero "));
        }
        while(reps==0);
        
            o.resultados();
        
            
        
        
        

    }
}