C
C **********************************************************************
C *                                                                    *
C * VIRTC.INC                                                          *
C *                                                                    *
C * BASIC VIRTC FUNCTIONS FOR ALTAIR. USES 88-VIRTC. STRAP 88-VIRTC:   *
C *                                                                    *
C *   RTC VI1                                                          *
C *   RTC 100MS                                                        *
C *                                                                    *
C **********************************************************************
C	     
      EXTERNAL RTCON, RTCOFF, RTCGET, $DI, $EI, RTCTKS
      INTEGER RTCTKS
C

