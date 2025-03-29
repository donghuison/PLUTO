#define  PHYSICS                        MHD
#define  DIMENSIONS                     2
#define  GEOMETRY                       CARTESIAN
#define  BODY_FORCE                     NO
#define  COOLING                        NO
#define  RECONSTRUCTION                 LINEAR
#define  TIME_STEPPING                  HANCOCK
#define  NTRACER                        0
#define  PARTICLES                      PARTICLES_CR
#define  USER_DEF_PARAMETERS            2

/* -- physics dependent declarations -- */

#define  EOS                            IDEAL
#define  ENTROPY_SWITCH                 NO
#define  DIVB_CONTROL                   NO
#define  BACKGROUND_FIELD               NO
#define  AMBIPOLAR_DIFFUSION            NO
#define  RESISTIVITY                    NO
#define  HALL_MHD                       NO
#define  THERMAL_CONDUCTION             NO
#define  VISCOSITY                      NO
#define  ROTATING_FRAME                 NO

/* -- user-defined parameters (labels) -- */

#define  BMAG_Z                         0
#define  EMAG_Z                         1

/* [Beg] user-defined constants (do not change this line) */

#define  ASSIGN_VECTOR_POTENTIAL        YES
#define  UPDATE_VECTOR_POTENTIAL        YES
#define  CT_EMF_AVERAGE                 CT_CONTACT
#define  LIMITER                        VANLEER_LIM
#define  PARTICLES_CR_C                 (100.0)
#define  PARTICLES_CR_E_MC              1.0
#define  PARTICLES_CR_FEEDBACK          NO
#define  PARTICLES_CR_LARMOR_EPS        0.5
#define  PARTICLES_CR_NSUB              -1
#define  PARTICLES_CR_PREDICTOR         NO
#define  PARTICLES_SHAPE                -1
#define  WARNING_MESSAGES               NO

/* [End] user-defined constants (do not change this line) */
