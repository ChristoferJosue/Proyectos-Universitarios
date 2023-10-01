
import java.io.*;
import javax.swing.JOptionPane;

public class proyecto2{
    static proyecto2 o; //creacion del objeto o
    static int nivel;
    static String oracionfacil[][]=new String[][]{{"tres ","tristes ","tigres ","tragaban ","trigo ","en ","un ","trigal"},
                                                {"tres"," _____"," tigres"," tragaban"," _____"," en"," un"," ______"}};
    static String oracionNormal[][]=new String[][]{{"el ","mozo ","tomo ","los ","pedidos ","y ","la ","comida ","llego ","en ","poco ","tiempo"},
                                                   {"el ","____","_____","los ","pedidos ","_","__","comida ","_____","en ","____","tiempo"}};
    static String oraciondificil[][]=new String[][]{{"el ","arbitro ","llego ","puntualmente ","al ","estadio ","pero ","los ","jugadores ","no ","se ","presentaron"},
                                                    {"el ","_______","llego ","____________","al ","_______","____","los ","_________","no ","se ","___________"}};
    

    public static void  proyecto2()
    {
       
        nivel = 0;
        
    } 
    public static int selecNiveles()//retorna el nivel que va a seleccionar 
    {
        
    nivel=Integer.parseInt(JOptionPane.showInputDialog(null,"seleccione el grado de dificultad \n seleccione 1 para basico(10s), 2 para medio(20s), 3 para avanzado(30s)"));
     //podemos hacer que retorne un valor dependiendo del nivel elegido
     return nivel;    
    }
    public static void oraciones(int dificultad)
    {
        String oracionOriginal="";
        String oracionPrueba="";
        String oracionComparar="";
        switch(dificultad)
        {
            case 1:
                for(int n=0;n<8;n++)
                {
                    oracionOriginal=oracionOriginal+oracionfacil[0][n];//concatenar cadenas 
                    oracionPrueba=oracionPrueba+oracionfacil[1][n];
                }
                o.basico(oracionOriginal,oracionPrueba,oracionComparar);
                
                break;
            case 2:
                for(int n=0;n<12;n++)
                {
                    oracionOriginal=oracionOriginal+oracionNormal[0][n];
                    oracionPrueba=oracionPrueba+oracionNormal[1][n];
                }
               o.medio(oracionOriginal,oracionPrueba,oracionComparar);
                break;
            case 3:
                for(int n=0;n<12;n++)
                {
                    oracionOriginal=oracionOriginal+oraciondificil[0][n];
                    oracionPrueba=oracionPrueba+oraciondificil[1][n];
                 }
                 o.avanzado(oracionOriginal,oracionPrueba,oracionComparar);
                break;
            default:
            {

            }

        }
    }

    public static void basico(String oracionOriginal ,String OracionPrueba,String oracionComparar)
    {
        InputStreamReader isr= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(isr);
         
        try {
            System.out.println("la frase es:"+oracionOriginal);
            System.out.println("Tienes 10 segundos para memorizarte la oración");
            Thread.sleep(10000);//timer de 30 segundos 
            for(int n=0;n<30;n++)
            {
                System.out.println("");
            }
            System.out.println("Complete la frase:"+OracionPrueba);
            String a1=br.readLine();
            System.in.skip(2);
            String a2=br.readLine();
            System.in.skip(2);
            String a3=br.readLine();
            oracionComparar=oracionfacil[0][0]+a1+" "+oracionfacil[0][2]+oracionfacil[0][3]+a2+" "+oracionfacil[0][5]+oracionfacil[0][6]+a3+" ";
            System.out.println("tu frase es: "+oracionComparar);
           
            int resultados= oracionComparar.compareTo(oracionOriginal);
            if(resultados==1)
            {
                System.out.println("correcto ");
            }
            else{
                System.out.println("incorrecto las oraciones no coinciden");
            }
        }
            
        catch (Exception e) {
            System.out.println("error en la entrada/salida de oraciones");
        }
        
        
    }

    public static void medio(String oracionOriginal ,String OracionPrueba,String oracionComparar)
    {
        InputStreamReader isr= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(isr);
         
        try {
            System.out.println("la frase es:"+oracionOriginal);
            System.out.println("Tienes 20 segundos para memorizarte la oración");
            Thread.sleep(20000);//timer de 30 segundos 
            for(int n=0;n<30;n++)
            {
                System.out.println("");
            }
            System.out.println("Complete la frase:"+OracionPrueba);
            String a1=br.readLine();
            System.in.skip(2);
            String a2=br.readLine();
            System.in.skip(2);
            String a3=br.readLine();
            System.in.skip(2);
            String a4=br.readLine(); 
            System.in.skip(2);
            String a5=br.readLine();
            System.in.skip(2);
            String a6=br.readLine();
            oracionComparar=oracionNormal[0][0]+a1+" "+a2+" "+oracionNormal[0][3]+oracionNormal[0][4]+a3+" "+a4+" "+oracionNormal[0][7]+a5+" "+oracionNormal[0][9]+a6+" "+oracionNormal[0][11]+" ";
            //"el","____","_____","los","pedidos","_","__","comida","_____","en","____","tiempo"
            System.out.println("tu frase es: "+oracionComparar);
            int resultados= oracionComparar.compareTo(oracionOriginal);
            if(resultados==1)
            {
                System.out.println("correcto ");
            }
            else{
                System.out.println("incorrecto las oraciones no coinciden");
            }
        }
            
        catch (Exception e) {
            System.out.println("error en la entrada/salida de oraciones");
        }
    }

    public static void avanzado(String oracionOriginal ,String OracionPrueba,String oracionComparar)
    {
        InputStreamReader isr= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(isr);
         
        try {
            System.out.println("la frase es:"+oracionOriginal);
            System.out.println("Tienes 30 segundos para memorizarte la oración");
            Thread.sleep(30000);//timer de 30 segundos 
            for(int n=0;n<30;n++)
            {
                System.out.println("");
            }
            System.out.println("Complete la frase:"+OracionPrueba);
            String a1=br.readLine();
            System.in.skip(2);
            String a2=br.readLine();
            System.in.skip(2);
            String a3=br.readLine();
            System.in.skip(2);
            String a4=br.readLine();
            System.in.skip(2);
            String a5=br.readLine();
            System.in.skip(2);
            String a6=br.readLine();
            oracionComparar=oraciondificil[0][0]+a1+" "+oraciondificil[0][2]+a2+" "+oraciondificil[0][4]+a3+" "+a4+" "+oraciondificil[0][7]+a5+" "+oraciondificil[0][9]+oraciondificil[0][10]+a6+" ";
            //"el ","_______","llego ","____________","al ","_______","____","los ","_________","no ","se ","___________"
            System.out.println("tu frase es: "+oracionComparar);
            
            int resultados= oracionComparar.compareTo(oracionOriginal);
            if(resultados==1)
            {
                System.out.println("correcto ");
            }
            else{
                System.out.println("incorrecto las oraciones no coinciden");
            }
        }
            
        catch (Exception e) {
            System.out.println("error en la entrada/salida de oraciones");
        }
        
        
    }

    public static void menu()
    {   

        int dificultad;
       
        
        dificultad= o.selecNiveles();
      
        switch(dificultad)
        {
            case 1:
                o.oraciones(dificultad); 
                
                break;
            case 2:
                o. oraciones(dificultad);
                break;

            case 3:
                o.oraciones(dificultad);                
                break;
            default: JOptionPane.showMessageDialog(null,"El numero "+ dificultad+" no está dentro de las posibilidades de la dificulatdes, intente denuevo");
                o.menu();
                System.exit(0);
        }
        
    }
    public static void main(String[] args) throws Exception {
        o=new proyecto2();
        InputStreamReader isr= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(isr);
        int reps;
        try
        {

        
            do
            {
                o.menu();
                System.out.println("si desea volver a lanzar el programa pulse 0 sino cualquier numero");
                reps=Integer.parseInt(br.readLine());
            }
            while(reps==0);
        }
        catch(Exception e)
        {
            System.out.println("Error en la entrada salida de datos");
        }
    }
}

