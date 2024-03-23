/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALC_H_RPCGEN
#define _CALC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct datos {
	double a;
	double b;
};
typedef struct datos datos;

#define NPROG 0x20000008
#define NVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define suma 1
extern  double * suma_1(datos *, CLIENT *);
extern  double * suma_1_svc(datos *, struct svc_req *);
#define resta 2
extern  double * resta_1(datos *, CLIENT *);
extern  double * resta_1_svc(datos *, struct svc_req *);
#define mul 3
extern  double * mul_1(datos *, CLIENT *);
extern  double * mul_1_svc(datos *, struct svc_req *);
#define div 4
extern  double * div_1(datos *, CLIENT *);
extern  double * div_1_svc(datos *, struct svc_req *);
#define potencia 5
extern  double * potencia_1(double *, CLIENT *);
extern  double * potencia_1_svc(double *, struct svc_req *);
#define raizCuadrada 6
extern  double * raizcuadrada_1(int *, CLIENT *);
extern  double * raizcuadrada_1_svc(int *, struct svc_req *);
#define menu 7
extern  char ** menu_1(void *, CLIENT *);
extern  char ** menu_1_svc(void *, struct svc_req *);
extern int nprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define suma 1
extern  double * suma_1();
extern  double * suma_1_svc();
#define resta 2
extern  double * resta_1();
extern  double * resta_1_svc();
#define mul 3
extern  double * mul_1();
extern  double * mul_1_svc();
#define div 4
extern  double * div_1();
extern  double * div_1_svc();
#define potencia 5
extern  double * potencia_1();
extern  double * potencia_1_svc();
#define raizCuadrada 6
extern  double * raizcuadrada_1();
extern  double * raizcuadrada_1_svc();
#define menu 7
extern  char ** menu_1();
extern  char ** menu_1_svc();
extern int nprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_datos (XDR *, datos*);

#else /* K&R C */
extern bool_t xdr_datos ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALC_H_RPCGEN */

#ifndef COLORES_H
#define COLORES_H

// Definición de códigos de color ANSI
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#endif /* COLORES_H */
