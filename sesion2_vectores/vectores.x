typedef float vec<>;

struct vectores {
    vec v1;
    vec v2;
};
struct datosInit {
    int limiteV;
    int rango;
};
struct vectoresSaxpy {
    float numero;
    vec v1;
    vec v2;
};

program PROGRAMA {
    version VERSION {
        vectores initVector(datosInit)=1;
        vec sumaVector(vectores)=2;
        float productoEscalar(vectores)=3;
        vec productoVectorial(vectores)=4;
        vec saxpyOperacion(vectoresSaxpy)=5;
    }=1;
}=0x20000013;
