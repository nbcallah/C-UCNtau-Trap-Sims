#define INITBLOCK 0

//#define TRACKGENERATOR randomPointTrapEdE
//#define TRACKGENERATOR randomPointTrapOptimum
#define TRACKGENERATOR randomPointTrapOptimumCleanable
//#define TRACKGENERATOR randomPointTrapEdECleanable
//#define TRACKGENERATOR randomPointTrapOptimumOnlyCleanable

//#define ECUT 7.6071
//#define ECUT 34.776124570119975
//#define EPOW 1.30448
//#define THETAPOW 0.264079
//#define ZETACUT 0.0160763
//#define BTHICK 5.76556
//#define ZETACUT 0.0
//#define BTHICK 20.0

//New minimum with better timing
#define ECUT 7.2092
#define EPOW 1.17727
#define THETAPOW 0.275457
#define ZETACUT 0.0127203
#define BTHICK 5.59909

//#define TRACKER daggerHitTimes
//#define TRACKER fixedEffDaggerHitTime
//#define TRACKER fixedEffDaggerHitTime_PSE
//#define TRACKER fixedEffDaggerHitTime_reinsert
//#define TRACKER cleanTime
//#define TRACKER calcLyap
#define TRACKER noabsCleanTime

#define TRACKANDPRINT 0

#define WRITER writeNoabsRes
//#define WRITER writeFixedRes
//#define WRITER writeCleanRes
//#define WRITER writeLyapRes

#define CLEANINGTIME 50
#define CLEANINGHEIGHT 0.38
//#define CLEANINGHEIGHT 0.43
//#define CLEANINGHEIGHT 0.35
#define RAISEDCLEANINGHEIGHT 0.43
//#define ECLEAN 5.077298660340679e-27
#define ECLEAN 5.571749397933261e-27


//Set holding time
#define FIRSTDIPTIME 1380

#define HOLDTIME 1380

//holdT gets replaced by HOLDTIME inside the tracking function
////9 Dip
//#define NDIPS 10
//#define HEIGHTS {0.49, 0.380, 0.250, 0.180, 0.140, 0.110, 0.080, 0.060, 0.040, 0.010}
//#define ENDTIMES {holdT,  holdT+40.0,  holdT+80.0,  holdT+100.0, holdT+120.0, holdT+140.0, holdT+160.0, holdT+180.0, holdT+200.0, holdT+300.0}

#define NDIPS 4
#define HEIGHTS {0.49, 0.380, 0.250, 0.010}
#define ENDTIMES {holdT, holdT+20.0, holdT+40.0, holdT+140.0}

//#define NDIPS 13
//#define HEIGHTS {0.49, 0.38, 0.250,   0.49, 0.380, 0.250, 0.180, 0.140, 0.110, 0.080, 0.060, 0.040, 0.010}
//#define ENDTIMES {0.0, 50.0, 250.0,  250.0+holdT, 250.0+holdT+20.0, 250.0+holdT+40.0, 250.0+holdT+50.0, 250.0+holdT+60.0, 250.0+holdT+70.0, 250.0+holdT+80.0, 250.0+holdT+90.0, 250.0+holdT+100.0, 250.0+holdT+120.0}

//dipHeights = (/0.49_8, 0.380_8, 0.250_8, 0.01_8/)
//dipEnds =     (/0.0_8,  40.0_8,  400.0_8, 500.0_8/)
//#define NDIPS 10
//#define HEIGHTS {0.49, 0.38, 0.25, 0.18, 0.14, 0.11, 0.08, 0.06, 0.04, 0.01}
//#define ENDTIMES {holdT, holdT+40.0, holdT+80, holdT+100, holdT+120, holdT+140, holdT+160, holdT+180, holdT+200.0, holdT+500.0}

//#define NDIPS 3
//#define HEIGHTS {0.49, 0.38, 0.010}
//#define ENDTIMES {holdT, holdT+300, holdT+500}


#define HEATMULT 1.0
//#define XFNAME "/N/u/nbcallah/BigRed2/ChaoticTrap/C-UCNtau-Trap-Sims/xvals.bin"
//#define YFNAME "/N/u/nbcallah/BigRed2/ChaoticTrap/C-UCNtau-Trap-Sims/yvals.bin"
//#define ZFNAME "/N/u/nbcallah/BigRed2/ChaoticTrap/C-UCNtau-Trap-Sims/zvals.bin"
#define XFNAME "./xvals.bin"
#define YFNAME "./yvals.bin"
#define ZFNAME "./zvals.bin"

#define LYAPTIME 5
#define NUMSEP 100
