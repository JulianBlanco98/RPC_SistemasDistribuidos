struct datos {
    double a;
    double b;
};
program NPROG {
    version NVERS {
        double suma(datos d) = 1;
        double resta(datos d) = 2;
        double mul(datos d) = 3;
        double div(datos d) = 4;
        double potencia(double d)=5;
        double raizCuadrada(int d)=6;
        string menu(void)=7;       
    }=1;
}=0x20000008;
