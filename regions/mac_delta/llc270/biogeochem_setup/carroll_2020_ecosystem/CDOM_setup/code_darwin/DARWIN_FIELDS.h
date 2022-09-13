#ifdef ALLOW_DARWIN

CBOP
C     !ROUTINE: DARWIN_FIELDS.h
C     !INTERFACE:
C #include DARWIN_FIELDS.h

C     !DESCRIPTION:
C Contains fields for darwin package
C
C Requires: SIZE.h
C

#ifndef DARWIN_ALLOW_CHLQUOTA
      COMMON /DARWIN_CHL_STORE/ chlPrev
#ifdef ALLOW_RADTRANS
      _RL chlPrev(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy,nPhoto)
#else
      _RL chlPrev(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy)
#endif
#endif


#ifdef DARWIN_ALLOW_CONS
      COMMON /DARWIN_CHECK_CONS/
     &      DAR_cons_C_unit,
     &      DAR_cons_P_unit,
     &      DAR_cons_N_unit,
     &      DAR_cons_Fe_unit,
     &      DAR_cons_Si_unit,
     &      DAR_cons_A_unit,
     &      DAR_cons_O_unit
      INTEGER DAR_cons_C_unit
      INTEGER DAR_cons_P_unit
      INTEGER DAR_cons_N_unit
      INTEGER DAR_cons_Fe_unit
      INTEGER DAR_cons_Si_unit
      INTEGER DAR_cons_A_unit
      INTEGER DAR_cons_O_unit

      COMMON /DARWIN_CONS_3D/
     &      DARWIN_Nfix,
     &      DARWIN_Ndenit,
     &      DARWIN_partScav,
     &      DARWIN_minFeLoss
      _RL DARWIN_Nfix(sNx,sNy,Nr,nSx,nSy)
      _RL DARWIN_Ndenit(sNx,sNy,Nr,nSx,nSy)
      _RL DARWIN_partScav(sNx,sNy,Nr,nSx,nSy)
      _RL DARWIN_minFeLoss(sNx,sNy,Nr,nSx,nSy)

      COMMON /DARWIN_CONS_2D/ ironSedFlux
      _RL ironSedFlux(sNx,sNy,nSx,nSy)
#endif

C Carbon Variables

       COMMON /CARBON_NEEDS/
     &   pH, pCO2, Atmosp, FluxCO2, FluxO2
#ifdef ALLOW_OLD_VIRTUALFLUX
     &   ,VFluxCO2, VFluxAlk
#endif
      _RL  pH(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy)
      _RL  pCO2(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy)
      _RL  AtmosP(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  FluxCO2(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  FluxO2(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
#ifdef ALLOW_OLD_VIRTUALFLUX
      _RL  VFluxCO2(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  VFluxAlk(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
#endif

       COMMON /CARBON_CHEM/
     &                     ak0,ak1,ak2,akw,akb,aks,akf,
     &                     ak1p,ak2p,ak3p,aksi, fugf,
     &                     ff,ft,st,bt, Ksp_TP_Calc
      _RL  ak0(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  ak1(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  ak2(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  akw(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  akb(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  aks(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  akf(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  ak1p(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  ak2p(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  ak3p(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  aksi(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  ff(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
C Fugacity Factor added by Val Bennington Nov. 2010
      _RL  fugf(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  ft(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  st(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  bt(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)
      _RL  Ksp_TP_Calc(1-OLx:sNx+OLx,1-OLy:sNy+OLy,nSx,nSy)

#ifdef DARWIN_ALLOW_CDOM
       COMMON /DARWIN_CDOM_FIELDS/ attCDOM
      _RL  attCDOM(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,nSx,nSy)
#endif /* DARWIN_ALLOW_CDOM */

CEOP
#endif /* ALLOW_DARWIN */
