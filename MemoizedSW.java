
@x10.runtime.impl.java.X10Generated
public class MemoizedSW extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<MemoizedSW> $RTT = 
        x10.rtt.NamedType.<MemoizedSW> make("MemoizedSW",
                                            MemoizedSW.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(MemoizedSW $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + MemoizedSW.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        MemoizedSW $_obj = new MemoizedSW((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public MemoizedSW(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 13 "MemoizedSW.x10"
    public static x10.util.ArrayList splitString(final java.lang.String lineToSplit) {
        
        //#line 14 "MemoizedSW.x10"
        final x10.util.ArrayList tokens = ((x10.util.ArrayList)(new x10.util.ArrayList<java.lang.String>((java.lang.System[]) null, x10.rtt.Types.STRING).x10$util$ArrayList$$init$S()));
        
        //#line 15 "MemoizedSW.x10"
        java.lang.String currToken = "";
        
        //#line 16 "MemoizedSW.x10"
        final long i$7009min$8032 = 0L;
        
        //#line 16 "MemoizedSW.x10"
        final int t$8033 = (lineToSplit).length();
        
        //#line 16 "MemoizedSW.x10"
        final long t$8034 = ((long)(((int)(t$8033))));
        
        //#line 16 "MemoizedSW.x10"
        final long i$7009max$8035 = ((t$8034) - (((long)(1L))));
        
        //#line 16 "MemoizedSW.x10"
        long i$8029 = i$7009min$8032;
        
        //#line 16 "MemoizedSW.x10"
        for (;
             true;
             ) {
            
            //#line 16 "MemoizedSW.x10"
            final long t$8030 = i$8029;
            
            //#line 16 "MemoizedSW.x10"
            final boolean t$8031 = ((t$8030) <= (((long)(i$7009max$8035))));
            
            //#line 16 "MemoizedSW.x10"
            if (!(t$8031)) {
                
                //#line 16 "MemoizedSW.x10"
                break;
            }
            
            //#line 16 "MemoizedSW.x10"
            final long i$8026 = i$8029;
            
            //#line 17 "MemoizedSW.x10"
            final int t$8014 = ((int)(long)(((long)(i$8026))));
            
            //#line 17 "MemoizedSW.x10"
            final char t$8015 = (lineToSplit).charAt(((int)(t$8014)));
            
            //#line 17 "MemoizedSW.x10"
            final boolean t$8016 = ((char) t$8015) == ((char) ' ');
            
            //#line 17 "MemoizedSW.x10"
            if (t$8016) {
                
                //#line 18 "MemoizedSW.x10"
                final java.lang.String t$8017 = ((java.lang.String)(currToken));
                
                //#line 18 "MemoizedSW.x10"
                final int t$8018 = (t$8017).length();
                
                //#line 18 "MemoizedSW.x10"
                final long t$8019 = ((long)(((int)(t$8018))));
                
                //#line 18 "MemoizedSW.x10"
                final boolean t$8020 = ((t$8019) > (((long)(0L))));
                
                //#line 18 "MemoizedSW.x10"
                if (t$8020) {
                    
                    //#line 19 "MemoizedSW.x10"
                    final java.lang.String t$8021 = ((java.lang.String)(currToken));
                    
                    //#line 19 "MemoizedSW.x10"
                    ((x10.util.ArrayList<java.lang.String>)tokens).add__0x10$util$ArrayList$$T$O(((java.lang.String)(t$8021)));
                    
                    //#line 20 "MemoizedSW.x10"
                    currToken = ((java.lang.String)(""));
                }
            } else {
                
                //#line 24 "MemoizedSW.x10"
                final java.lang.String t$8022 = ((java.lang.String)(currToken));
                
                //#line 24 "MemoizedSW.x10"
                final int t$8023 = ((int)(long)(((long)(i$8026))));
                
                //#line 24 "MemoizedSW.x10"
                final char t$8024 = (lineToSplit).charAt(((int)(t$8023)));
                
                //#line 24 "MemoizedSW.x10"
                final java.lang.String t$8025 = ((t$8022) + ((x10.core.Char.$box(t$8024))));
                
                //#line 24 "MemoizedSW.x10"
                currToken = ((java.lang.String)(t$8025));
            }
            
            //#line 16 "MemoizedSW.x10"
            final long t$8027 = i$8029;
            
            //#line 16 "MemoizedSW.x10"
            final long t$8028 = ((t$8027) + (((long)(1L))));
            
            //#line 16 "MemoizedSW.x10"
            i$8029 = t$8028;
        }
        
        //#line 27 "MemoizedSW.x10"
        final java.lang.String t$7333 = ((java.lang.String)(currToken));
        
        //#line 27 "MemoizedSW.x10"
        final int t$7334 = (t$7333).length();
        
        //#line 27 "MemoizedSW.x10"
        final long t$7335 = ((long)(((int)(t$7334))));
        
        //#line 27 "MemoizedSW.x10"
        final boolean t$7337 = ((t$7335) > (((long)(0L))));
        
        //#line 27 "MemoizedSW.x10"
        if (t$7337) {
            
            //#line 28 "MemoizedSW.x10"
            final java.lang.String t$7336 = ((java.lang.String)(currToken));
            
            //#line 28 "MemoizedSW.x10"
            ((x10.util.ArrayList<java.lang.String>)tokens).add__0x10$util$ArrayList$$T$O(((java.lang.String)(t$7336)));
        }
        
        //#line 30 "MemoizedSW.x10"
        return tokens;
    }
    
    
    //#line 33 "MemoizedSW.x10"
    public static void printMatrix__0$1x10$lang$Long$2(final x10.array.Array_2<x10.core.Long> matrix, final long nRows, final long nCols) {
        
        //#line 34 "MemoizedSW.x10"
        final long i$7045min$7046 = 0L;
        
        //#line 34 "MemoizedSW.x10"
        final long i$7045max$7047 = ((nRows) - (((long)(1L))));
        
        //#line 34 "MemoizedSW.x10"
        long i$8051 = i$7045min$7046;
        
        //#line 34 "MemoizedSW.x10"
        for (;
             true;
             ) {
            
            //#line 34 "MemoizedSW.x10"
            final long t$8052 = i$8051;
            
            //#line 34 "MemoizedSW.x10"
            final boolean t$8053 = ((t$8052) <= (((long)(i$7045max$7047))));
            
            //#line 34 "MemoizedSW.x10"
            if (!(t$8053)) {
                
                //#line 34 "MemoizedSW.x10"
                break;
            }
            
            //#line 34 "MemoizedSW.x10"
            final long i$8048 = i$8051;
            
            //#line 35 "MemoizedSW.x10"
            final long i$7027min$8045 = 0L;
            
            //#line 35 "MemoizedSW.x10"
            final long i$7027max$8046 = ((nCols) - (((long)(1L))));
            
            //#line 35 "MemoizedSW.x10"
            long i$8042 = i$7027min$8045;
            
            //#line 35 "MemoizedSW.x10"
            for (;
                 true;
                 ) {
                
                //#line 35 "MemoizedSW.x10"
                final long t$8043 = i$8042;
                
                //#line 35 "MemoizedSW.x10"
                final boolean t$8044 = ((t$8043) <= (((long)(i$7027max$8046))));
                
                //#line 35 "MemoizedSW.x10"
                if (!(t$8044)) {
                    
                    //#line 35 "MemoizedSW.x10"
                    break;
                }
                
                //#line 35 "MemoizedSW.x10"
                final long j$8039 = i$8042;
                
                //#line 36 "MemoizedSW.x10"
                final x10.io.Printer t$8036 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
                //#line 36 "MemoizedSW.x10"
                final long t$8037 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(i$8048), (long)(j$8039)));
                
                //#line 36 "MemoizedSW.x10"
                final java.lang.String t$8038 = (((x10.core.Long.$box(t$8037))) + (" "));
                
                //#line 36 "MemoizedSW.x10"
                t$8036.println(((java.lang.Object)(t$8038)));
                
                //#line 35 "MemoizedSW.x10"
                final long t$8040 = i$8042;
                
                //#line 35 "MemoizedSW.x10"
                final long t$8041 = ((t$8040) + (((long)(1L))));
                
                //#line 35 "MemoizedSW.x10"
                i$8042 = t$8041;
            }
            
            //#line 38 "MemoizedSW.x10"
            final x10.io.Printer t$8047 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
            
            //#line 38 "MemoizedSW.x10"
            t$8047.println();
            
            //#line 34 "MemoizedSW.x10"
            final long t$8049 = i$8051;
            
            //#line 34 "MemoizedSW.x10"
            final long t$8050 = ((t$8049) + (((long)(1L))));
            
            //#line 34 "MemoizedSW.x10"
            i$8051 = t$8050;
        }
    }
    
    
    //#line 42 "MemoizedSW.x10"
    public static void railBacktrack__2$1x10$lang$Long$2__3$1x10$lang$Long$2__4$1x10$lang$Long$3x10$lang$Long$2(final java.lang.String string1, final java.lang.String string2, final x10.array.Array_2<x10.core.Long> matrix, final x10.array.Array_2<x10.core.Long> directions, final x10.util.Pair<x10.core.Long, x10.core.Long> maxCoordinates) {
        
        //#line 44 "MemoizedSW.x10"
        long i = x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)maxCoordinates).first));
        
        //#line 45 "MemoizedSW.x10"
        long j = x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)maxCoordinates).second));
        
        //#line 46 "MemoizedSW.x10"
        final int t$7352 = (string1).length();
        
        //#line 46 "MemoizedSW.x10"
        final int t$7353 = (string2).length();
        
        //#line 46 "MemoizedSW.x10"
        final int t$7354 = ((t$7352) + (((int)(t$7353))));
        
        //#line 46 "MemoizedSW.x10"
        final long t$7355 = ((long)(((int)(t$7354))));
        
        //#line 46 "MemoizedSW.x10"
        final x10.core.Rail result1 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Char>(x10.rtt.Types.CHAR, t$7355)));
        
        //#line 47 "MemoizedSW.x10"
        final int t$7356 = (string1).length();
        
        //#line 47 "MemoizedSW.x10"
        final int t$7357 = (string2).length();
        
        //#line 47 "MemoizedSW.x10"
        final int t$7358 = ((t$7356) + (((int)(t$7357))));
        
        //#line 47 "MemoizedSW.x10"
        final long t$7359 = ((long)(((int)(t$7358))));
        
        //#line 47 "MemoizedSW.x10"
        final x10.core.Rail result2 = ((x10.core.Rail)(new x10.core.Rail<x10.core.Char>(x10.rtt.Types.CHAR, t$7359)));
        
        //#line 48 "MemoizedSW.x10"
        long resultSize = 0L;
        
        //#line 50 "MemoizedSW.x10"
        long stringLength = 0L;
        
        //#line 51 "MemoizedSW.x10"
        long matchCount = 0L;
        
        //#line 52 "MemoizedSW.x10"
        long gapCount = 0L;
        {
            
            //#line 53 "MemoizedSW.x10"
            final char[] result1$value$8591 = ((char[])result1.value);
            
            //#line 53 "MemoizedSW.x10"
            final char[] result2$value$8592 = ((char[])result2.value);
            
            //#line 53 "MemoizedSW.x10"
            while (true) {
                
                //#line 53 "MemoizedSW.x10"
                final long t$7360 = i;
                
                //#line 53 "MemoizedSW.x10"
                final long t$7361 = j;
                
                //#line 53 "MemoizedSW.x10"
                final long t$7362 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(t$7360), (long)(t$7361)));
                
                //#line 53 "MemoizedSW.x10"
                final boolean t$7459 = ((long) t$7362) != ((long) 0L);
                
                //#line 53 "MemoizedSW.x10"
                if (!(t$7459)) {
                    
                    //#line 53 "MemoizedSW.x10"
                    break;
                }
                
                //#line 54 "MemoizedSW.x10"
                final long t$8099 = i;
                
                //#line 54 "MemoizedSW.x10"
                final long t$8100 = j;
                
                //#line 54 "MemoizedSW.x10"
                final long t$8101 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8099), (long)(t$8100)));
                
                //#line 54 "MemoizedSW.x10"
                final boolean t$8102 = ((long) t$8101) == ((long) 0L);
                
                //#line 54 "MemoizedSW.x10"
                if (t$8102) {
                    
                    //#line 55 "MemoizedSW.x10"
                    final long t$8103 = resultSize;
                    
                    //#line 55 "MemoizedSW.x10"
                    final long t$8104 = i;
                    
                    //#line 55 "MemoizedSW.x10"
                    final long t$8105 = ((t$8104) - (((long)(1L))));
                    
                    //#line 55 "MemoizedSW.x10"
                    final int t$8106 = ((int)(long)(((long)(t$8105))));
                    
                    //#line 55 "MemoizedSW.x10"
                    final char t$8107 = (string1).charAt(((int)(t$8106)));
                    
                    //#line 55 "MemoizedSW.x10"
                    result1$value$8591[(int)t$8103]=t$8107;
                    
                    //#line 56 "MemoizedSW.x10"
                    final long t$8108 = resultSize;
                    
                    //#line 56 "MemoizedSW.x10"
                    final long t$8109 = j;
                    
                    //#line 56 "MemoizedSW.x10"
                    final long t$8110 = ((t$8109) - (((long)(1L))));
                    
                    //#line 56 "MemoizedSW.x10"
                    final int t$8111 = ((int)(long)(((long)(t$8110))));
                    
                    //#line 56 "MemoizedSW.x10"
                    final char t$8112 = (string2).charAt(((int)(t$8111)));
                    
                    //#line 56 "MemoizedSW.x10"
                    result2$value$8592[(int)t$8108]=t$8112;
                    
                    //#line 57 "MemoizedSW.x10"
                    final long t$8113 = resultSize;
                    
                    //#line 57 "MemoizedSW.x10"
                    final long t$8114 = ((t$8113) + (((long)(1L))));
                    
                    //#line 57 "MemoizedSW.x10"
                    resultSize = t$8114;
                    
                    //#line 59 "MemoizedSW.x10"
                    final long t$8115 = i;
                    
                    //#line 59 "MemoizedSW.x10"
                    final long t$8116 = ((t$8115) - (((long)(1L))));
                    
                    //#line 59 "MemoizedSW.x10"
                    final int t$8117 = ((int)(long)(((long)(t$8116))));
                    
                    //#line 59 "MemoizedSW.x10"
                    final char t$8118 = (string1).charAt(((int)(t$8117)));
                    
                    //#line 59 "MemoizedSW.x10"
                    final long t$8119 = j;
                    
                    //#line 59 "MemoizedSW.x10"
                    final long t$8120 = ((t$8119) - (((long)(1L))));
                    
                    //#line 59 "MemoizedSW.x10"
                    final int t$8121 = ((int)(long)(((long)(t$8120))));
                    
                    //#line 59 "MemoizedSW.x10"
                    final char t$8122 = (string2).charAt(((int)(t$8121)));
                    
                    //#line 59 "MemoizedSW.x10"
                    final boolean t$8123 = ((char) t$8118) == ((char) t$8122);
                    
                    //#line 59 "MemoizedSW.x10"
                    if (t$8123) {
                        
                        //#line 60 "MemoizedSW.x10"
                        final long t$8124 = matchCount;
                        
                        //#line 60 "MemoizedSW.x10"
                        final long t$8125 = ((t$8124) + (((long)(1L))));
                        
                        //#line 60 "MemoizedSW.x10"
                        matchCount = t$8125;
                    }
                    
                    //#line 62 "MemoizedSW.x10"
                    final long t$8126 = i;
                    
                    //#line 62 "MemoizedSW.x10"
                    final long t$8127 = ((t$8126) - (((long)(1L))));
                    
                    //#line 62 "MemoizedSW.x10"
                    i = t$8127;
                    
                    //#line 63 "MemoizedSW.x10"
                    final long t$8128 = j;
                    
                    //#line 63 "MemoizedSW.x10"
                    final long t$8129 = ((t$8128) - (((long)(1L))));
                    
                    //#line 63 "MemoizedSW.x10"
                    j = t$8129;
                    
                    //#line 64 "MemoizedSW.x10"
                    final long t$8130 = stringLength;
                    
                    //#line 64 "MemoizedSW.x10"
                    final long t$8131 = ((t$8130) + (((long)(1L))));
                    
                    //#line 64 "MemoizedSW.x10"
                    stringLength = t$8131;
                } else {
                    
                    //#line 65 "MemoizedSW.x10"
                    final long t$8132 = i;
                    
                    //#line 65 "MemoizedSW.x10"
                    final long t$8133 = j;
                    
                    //#line 65 "MemoizedSW.x10"
                    final long t$8134 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8132), (long)(t$8133)));
                    
                    //#line 65 "MemoizedSW.x10"
                    final boolean t$8135 = ((t$8134) > (((long)(0L))));
                    
                    //#line 65 "MemoizedSW.x10"
                    if (t$8135) {
                        
                        //#line 66 "MemoizedSW.x10"
                        final long i$7063min$8071 = 0L;
                        
                        //#line 66 "MemoizedSW.x10"
                        final long t$8072 = i;
                        
                        //#line 66 "MemoizedSW.x10"
                        final long t$8073 = j;
                        
                        //#line 66 "MemoizedSW.x10"
                        final long t$8074 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8072), (long)(t$8073)));
                        
                        //#line 66 "MemoizedSW.x10"
                        final long i$7063max$8075 = ((t$8074) - (((long)(1L))));
                        
                        //#line 66 "MemoizedSW.x10"
                        long i$8068 = i$7063min$8071;
                        {
                            
                            //#line 66 "MemoizedSW.x10"
                            for (;
                                 true;
                                 ) {
                                
                                //#line 66 "MemoizedSW.x10"
                                final long t$8069 = i$8068;
                                
                                //#line 66 "MemoizedSW.x10"
                                final boolean t$8070 = ((t$8069) <= (((long)(i$7063max$8075))));
                                
                                //#line 66 "MemoizedSW.x10"
                                if (!(t$8070)) {
                                    
                                    //#line 66 "MemoizedSW.x10"
                                    break;
                                }
                                
                                //#line 66 "MemoizedSW.x10"
                                final long k$8065 = i$8068;
                                
                                //#line 67 "MemoizedSW.x10"
                                final long t$8054 = resultSize;
                                
                                //#line 67 "MemoizedSW.x10"
                                final long t$8055 = i;
                                
                                //#line 67 "MemoizedSW.x10"
                                final long t$8056 = ((t$8055) - (((long)(k$8065))));
                                
                                //#line 67 "MemoizedSW.x10"
                                final long t$8057 = ((t$8056) - (((long)(1L))));
                                
                                //#line 67 "MemoizedSW.x10"
                                final int t$8058 = ((int)(long)(((long)(t$8057))));
                                
                                //#line 67 "MemoizedSW.x10"
                                final char t$8059 = (string1).charAt(((int)(t$8058)));
                                
                                //#line 67 "MemoizedSW.x10"
                                result1$value$8591[(int)t$8054]=t$8059;
                                
                                //#line 68 "MemoizedSW.x10"
                                final long t$8060 = resultSize;
                                
                                //#line 68 "MemoizedSW.x10"
                                result2$value$8592[(int)t$8060]='-';
                                
                                //#line 69 "MemoizedSW.x10"
                                final long t$8061 = resultSize;
                                
                                //#line 69 "MemoizedSW.x10"
                                final long t$8062 = ((t$8061) + (((long)(1L))));
                                
                                //#line 69 "MemoizedSW.x10"
                                resultSize = t$8062;
                                
                                //#line 70 "MemoizedSW.x10"
                                final long t$8063 = stringLength;
                                
                                //#line 70 "MemoizedSW.x10"
                                final long t$8064 = ((t$8063) + (((long)(1L))));
                                
                                //#line 70 "MemoizedSW.x10"
                                stringLength = t$8064;
                                
                                //#line 66 "MemoizedSW.x10"
                                final long t$8066 = i$8068;
                                
                                //#line 66 "MemoizedSW.x10"
                                final long t$8067 = ((t$8066) + (((long)(1L))));
                                
                                //#line 66 "MemoizedSW.x10"
                                i$8068 = t$8067;
                            }
                        }
                        
                        //#line 72 "MemoizedSW.x10"
                        final long t$8136 = gapCount;
                        
                        //#line 72 "MemoizedSW.x10"
                        final long t$8137 = i;
                        
                        //#line 72 "MemoizedSW.x10"
                        final long t$8138 = j;
                        
                        //#line 72 "MemoizedSW.x10"
                        final long t$8139 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8137), (long)(t$8138)));
                        
                        //#line 72 "MemoizedSW.x10"
                        final long t$8140 = ((t$8136) + (((long)(t$8139))));
                        
                        //#line 72 "MemoizedSW.x10"
                        gapCount = t$8140;
                        
                        //#line 73 "MemoizedSW.x10"
                        final long t$8141 = i;
                        
                        //#line 73 "MemoizedSW.x10"
                        final long t$8142 = i;
                        
                        //#line 73 "MemoizedSW.x10"
                        final long t$8143 = j;
                        
                        //#line 73 "MemoizedSW.x10"
                        final long t$8144 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8142), (long)(t$8143)));
                        
                        //#line 73 "MemoizedSW.x10"
                        final long t$8145 = ((t$8141) - (((long)(t$8144))));
                        
                        //#line 73 "MemoizedSW.x10"
                        i = t$8145;
                    } else {
                        
                        //#line 75 "MemoizedSW.x10"
                        final long i$7081min$8093 = 0L;
                        
                        //#line 75 "MemoizedSW.x10"
                        final long t$8094 = i;
                        
                        //#line 75 "MemoizedSW.x10"
                        final long t$8095 = j;
                        
                        //#line 75 "MemoizedSW.x10"
                        final long t$8096 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8094), (long)(t$8095)));
                        
                        //#line 75 "MemoizedSW.x10"
                        final long t$8097 = (-(t$8096));
                        
                        //#line 75 "MemoizedSW.x10"
                        final long i$7081max$8098 = ((t$8097) - (((long)(1L))));
                        
                        //#line 75 "MemoizedSW.x10"
                        long i$8090 = i$7081min$8093;
                        {
                            
                            //#line 75 "MemoizedSW.x10"
                            final char[] result1$value$8593 = result1$value$8591;
                            
                            //#line 75 "MemoizedSW.x10"
                            final char[] result2$value$8594 = result2$value$8592;
                            
                            //#line 75 "MemoizedSW.x10"
                            for (;
                                 true;
                                 ) {
                                
                                //#line 75 "MemoizedSW.x10"
                                final long t$8091 = i$8090;
                                
                                //#line 75 "MemoizedSW.x10"
                                final boolean t$8092 = ((t$8091) <= (((long)(i$7081max$8098))));
                                
                                //#line 75 "MemoizedSW.x10"
                                if (!(t$8092)) {
                                    
                                    //#line 75 "MemoizedSW.x10"
                                    break;
                                }
                                
                                //#line 75 "MemoizedSW.x10"
                                final long k$8087 = i$8090;
                                
                                //#line 76 "MemoizedSW.x10"
                                final long t$8076 = resultSize;
                                
                                //#line 76 "MemoizedSW.x10"
                                result1$value$8593[(int)t$8076]='-';
                                
                                //#line 77 "MemoizedSW.x10"
                                final long t$8077 = resultSize;
                                
                                //#line 77 "MemoizedSW.x10"
                                final long t$8078 = j;
                                
                                //#line 77 "MemoizedSW.x10"
                                final long t$8079 = ((t$8078) - (((long)(k$8087))));
                                
                                //#line 77 "MemoizedSW.x10"
                                final long t$8080 = ((t$8079) - (((long)(1L))));
                                
                                //#line 77 "MemoizedSW.x10"
                                final int t$8081 = ((int)(long)(((long)(t$8080))));
                                
                                //#line 77 "MemoizedSW.x10"
                                final char t$8082 = (string2).charAt(((int)(t$8081)));
                                
                                //#line 77 "MemoizedSW.x10"
                                result2$value$8594[(int)t$8077]=t$8082;
                                
                                //#line 78 "MemoizedSW.x10"
                                final long t$8083 = resultSize;
                                
                                //#line 78 "MemoizedSW.x10"
                                final long t$8084 = ((t$8083) + (((long)(1L))));
                                
                                //#line 78 "MemoizedSW.x10"
                                resultSize = t$8084;
                                
                                //#line 79 "MemoizedSW.x10"
                                final long t$8085 = stringLength;
                                
                                //#line 79 "MemoizedSW.x10"
                                final long t$8086 = ((t$8085) + (((long)(1L))));
                                
                                //#line 79 "MemoizedSW.x10"
                                stringLength = t$8086;
                                
                                //#line 75 "MemoizedSW.x10"
                                final long t$8088 = i$8090;
                                
                                //#line 75 "MemoizedSW.x10"
                                final long t$8089 = ((t$8088) + (((long)(1L))));
                                
                                //#line 75 "MemoizedSW.x10"
                                i$8090 = t$8089;
                            }
                        }
                        
                        //#line 81 "MemoizedSW.x10"
                        final long t$8146 = gapCount;
                        
                        //#line 81 "MemoizedSW.x10"
                        final long t$8147 = i;
                        
                        //#line 81 "MemoizedSW.x10"
                        final long t$8148 = j;
                        
                        //#line 81 "MemoizedSW.x10"
                        final long t$8149 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8147), (long)(t$8148)));
                        
                        //#line 81 "MemoizedSW.x10"
                        final long t$8150 = ((t$8146) - (((long)(t$8149))));
                        
                        //#line 81 "MemoizedSW.x10"
                        gapCount = t$8150;
                        
                        //#line 82 "MemoizedSW.x10"
                        final long t$8151 = j;
                        
                        //#line 82 "MemoizedSW.x10"
                        final long t$8152 = i;
                        
                        //#line 82 "MemoizedSW.x10"
                        final long t$8153 = j;
                        
                        //#line 82 "MemoizedSW.x10"
                        final long t$8154 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8152), (long)(t$8153)));
                        
                        //#line 82 "MemoizedSW.x10"
                        final long t$8155 = ((t$8151) + (((long)(t$8154))));
                        
                        //#line 82 "MemoizedSW.x10"
                        j = t$8155;
                    }
                }
            }
        }
        
        //#line 85 "MemoizedSW.x10"
        final x10.io.Printer t$7464 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 85 "MemoizedSW.x10"
        final long t$7460 = matchCount;
        
        //#line 85 "MemoizedSW.x10"
        final java.lang.String t$7461 = (("Identity: ") + ((x10.core.Long.$box(t$7460))));
        
        //#line 85 "MemoizedSW.x10"
        final java.lang.String t$7462 = ((t$7461) + ("/"));
        
        //#line 85 "MemoizedSW.x10"
        final long t$7463 = stringLength;
        
        //#line 85 "MemoizedSW.x10"
        final java.lang.String t$7465 = ((t$7462) + ((x10.core.Long.$box(t$7463))));
        
        //#line 85 "MemoizedSW.x10"
        t$7464.println(((java.lang.Object)(t$7465)));
        
        //#line 86 "MemoizedSW.x10"
        final x10.io.Printer t$7470 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 86 "MemoizedSW.x10"
        final long t$7466 = gapCount;
        
        //#line 86 "MemoizedSW.x10"
        final java.lang.String t$7467 = (("Gaps: ") + ((x10.core.Long.$box(t$7466))));
        
        //#line 86 "MemoizedSW.x10"
        final java.lang.String t$7468 = ((t$7467) + ("/"));
        
        //#line 86 "MemoizedSW.x10"
        final long t$7469 = stringLength;
        
        //#line 86 "MemoizedSW.x10"
        final java.lang.String t$7471 = ((t$7468) + ((x10.core.Long.$box(t$7469))));
        
        //#line 86 "MemoizedSW.x10"
        t$7470.println(((java.lang.Object)(t$7471)));
        
        //#line 87 "MemoizedSW.x10"
        final x10.io.Printer t$7475 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 87 "MemoizedSW.x10"
        final long t$7472 = x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)maxCoordinates).first));
        
        //#line 87 "MemoizedSW.x10"
        final long t$7473 = x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)maxCoordinates).second));
        
        //#line 87 "MemoizedSW.x10"
        final long t$7474 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(t$7472), (long)(t$7473)));
        
        //#line 87 "MemoizedSW.x10"
        final java.lang.String t$7476 = (("Score: ") + ((x10.core.Long.$box(t$7474))));
        
        //#line 87 "MemoizedSW.x10"
        t$7475.println(((java.lang.Object)(t$7476)));
        
        //#line 89 "MemoizedSW.x10"
        final long i$7099min$8172 = 0L;
        
        //#line 89 "MemoizedSW.x10"
        final long t$8173 = resultSize;
        
        //#line 89 "MemoizedSW.x10"
        final long i$7099max$8174 = ((t$8173) - (((long)(1L))));
        
        //#line 89 "MemoizedSW.x10"
        long i$8161 = i$7099min$8172;
        {
            
            //#line 89 "MemoizedSW.x10"
            final char[] result1$value$8595 = ((char[])result1.value);
            
            //#line 89 "MemoizedSW.x10"
            for (;
                 true;
                 ) {
                
                //#line 89 "MemoizedSW.x10"
                final long t$8162 = i$8161;
                
                //#line 89 "MemoizedSW.x10"
                final boolean t$8163 = ((t$8162) <= (((long)(i$7099max$8174))));
                
                //#line 89 "MemoizedSW.x10"
                if (!(t$8163)) {
                    
                    //#line 89 "MemoizedSW.x10"
                    break;
                }
                
                //#line 89 "MemoizedSW.x10"
                final long k$8158 = i$8161;
                
                //#line 90 "MemoizedSW.x10"
                final x10.io.Printer t$8156 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
                //#line 90 "MemoizedSW.x10"
                final char t$8157 = ((char)result1$value$8595[(int)k$8158]);
                
                //#line 90 "MemoizedSW.x10"
                t$8156.print(x10.core.Char.$box(t$8157));
                
                //#line 89 "MemoizedSW.x10"
                final long t$8159 = i$8161;
                
                //#line 89 "MemoizedSW.x10"
                final long t$8160 = ((t$8159) + (((long)(1L))));
                
                //#line 89 "MemoizedSW.x10"
                i$8161 = t$8160;
            }
        }
        
        //#line 92 "MemoizedSW.x10"
        final x10.io.Printer t$7485 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 92 "MemoizedSW.x10"
        t$7485.println();
        
        //#line 93 "MemoizedSW.x10"
        final long i$7117min$8175 = 0L;
        
        //#line 93 "MemoizedSW.x10"
        final long t$8176 = resultSize;
        
        //#line 93 "MemoizedSW.x10"
        final long i$7117max$8177 = ((t$8176) - (((long)(1L))));
        
        //#line 93 "MemoizedSW.x10"
        long i$8169 = i$7117min$8175;
        {
            
            //#line 93 "MemoizedSW.x10"
            final char[] result2$value$8596 = ((char[])result2.value);
            
            //#line 93 "MemoizedSW.x10"
            for (;
                 true;
                 ) {
                
                //#line 93 "MemoizedSW.x10"
                final long t$8170 = i$8169;
                
                //#line 93 "MemoizedSW.x10"
                final boolean t$8171 = ((t$8170) <= (((long)(i$7117max$8177))));
                
                //#line 93 "MemoizedSW.x10"
                if (!(t$8171)) {
                    
                    //#line 93 "MemoizedSW.x10"
                    break;
                }
                
                //#line 93 "MemoizedSW.x10"
                final long k$8166 = i$8169;
                
                //#line 94 "MemoizedSW.x10"
                final x10.io.Printer t$8164 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
                //#line 94 "MemoizedSW.x10"
                final char t$8165 = ((char)result2$value$8596[(int)k$8166]);
                
                //#line 94 "MemoizedSW.x10"
                t$8164.print(x10.core.Char.$box(t$8165));
                
                //#line 93 "MemoizedSW.x10"
                final long t$8167 = i$8169;
                
                //#line 93 "MemoizedSW.x10"
                final long t$8168 = ((t$8167) + (((long)(1L))));
                
                //#line 93 "MemoizedSW.x10"
                i$8169 = t$8168;
            }
        }
        
        //#line 96 "MemoizedSW.x10"
        final x10.io.Printer t$7494 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 96 "MemoizedSW.x10"
        t$7494.println();
    }
    
    
    //#line 99 "MemoizedSW.x10"
    public static void backtrack__2$1x10$lang$Long$2__3$1x10$lang$Long$2__4$1x10$lang$Long$3x10$lang$Long$2(final java.lang.String string1, final java.lang.String string2, final x10.array.Array_2<x10.core.Long> matrix, final x10.array.Array_2<x10.core.Long> directions, final x10.util.Pair<x10.core.Long, x10.core.Long> maxCoordinates) {
        
        //#line 101 "MemoizedSW.x10"
        long i = x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)maxCoordinates).first));
        
        //#line 102 "MemoizedSW.x10"
        long j = x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)maxCoordinates).second));
        
        //#line 103 "MemoizedSW.x10"
        java.lang.String result1 = "";
        
        //#line 104 "MemoizedSW.x10"
        java.lang.String result2 = "";
        
        //#line 106 "MemoizedSW.x10"
        long stringLength = 0L;
        
        //#line 107 "MemoizedSW.x10"
        long matchCount = 0L;
        
        //#line 108 "MemoizedSW.x10"
        long gapCount = 0L;
        
        //#line 109 "MemoizedSW.x10"
        while (true) {
            
            //#line 109 "MemoizedSW.x10"
            final long t$7495 = i;
            
            //#line 109 "MemoizedSW.x10"
            final long t$7496 = j;
            
            //#line 109 "MemoizedSW.x10"
            final long t$7497 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(t$7495), (long)(t$7496)));
            
            //#line 109 "MemoizedSW.x10"
            final boolean t$7594 = ((long) t$7497) != ((long) 0L);
            
            //#line 109 "MemoizedSW.x10"
            if (!(t$7594)) {
                
                //#line 109 "MemoizedSW.x10"
                break;
            }
            
            //#line 110 "MemoizedSW.x10"
            final long t$8223 = i;
            
            //#line 110 "MemoizedSW.x10"
            final long t$8224 = j;
            
            //#line 110 "MemoizedSW.x10"
            final long t$8225 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8223), (long)(t$8224)));
            
            //#line 110 "MemoizedSW.x10"
            final boolean t$8226 = ((long) t$8225) == ((long) 0L);
            
            //#line 110 "MemoizedSW.x10"
            if (t$8226) {
                
                //#line 111 "MemoizedSW.x10"
                final long t$8227 = i;
                
                //#line 111 "MemoizedSW.x10"
                final long t$8228 = ((t$8227) - (((long)(1L))));
                
                //#line 111 "MemoizedSW.x10"
                final int t$8229 = ((int)(long)(((long)(t$8228))));
                
                //#line 111 "MemoizedSW.x10"
                final char t$8230 = (string1).charAt(((int)(t$8229)));
                
                //#line 111 "MemoizedSW.x10"
                final java.lang.String t$8231 = ((java.lang.String)(result1));
                
                //#line 111 "MemoizedSW.x10"
                final java.lang.String t$8232 = (((x10.core.Char.$box(t$8230))) + (t$8231));
                
                //#line 111 "MemoizedSW.x10"
                result1 = ((java.lang.String)(t$8232));
                
                //#line 112 "MemoizedSW.x10"
                final long t$8233 = j;
                
                //#line 112 "MemoizedSW.x10"
                final long t$8234 = ((t$8233) - (((long)(1L))));
                
                //#line 112 "MemoizedSW.x10"
                final int t$8235 = ((int)(long)(((long)(t$8234))));
                
                //#line 112 "MemoizedSW.x10"
                final char t$8236 = (string2).charAt(((int)(t$8235)));
                
                //#line 112 "MemoizedSW.x10"
                final java.lang.String t$8237 = ((java.lang.String)(result2));
                
                //#line 112 "MemoizedSW.x10"
                final java.lang.String t$8238 = (((x10.core.Char.$box(t$8236))) + (t$8237));
                
                //#line 112 "MemoizedSW.x10"
                result2 = ((java.lang.String)(t$8238));
                
                //#line 113 "MemoizedSW.x10"
                final long t$8239 = i;
                
                //#line 113 "MemoizedSW.x10"
                final long t$8240 = ((t$8239) - (((long)(1L))));
                
                //#line 113 "MemoizedSW.x10"
                final int t$8241 = ((int)(long)(((long)(t$8240))));
                
                //#line 113 "MemoizedSW.x10"
                final char t$8242 = (string1).charAt(((int)(t$8241)));
                
                //#line 113 "MemoizedSW.x10"
                final long t$8243 = j;
                
                //#line 113 "MemoizedSW.x10"
                final long t$8244 = ((t$8243) - (((long)(1L))));
                
                //#line 113 "MemoizedSW.x10"
                final int t$8245 = ((int)(long)(((long)(t$8244))));
                
                //#line 113 "MemoizedSW.x10"
                final char t$8246 = (string2).charAt(((int)(t$8245)));
                
                //#line 113 "MemoizedSW.x10"
                final boolean t$8247 = ((char) t$8242) == ((char) t$8246);
                
                //#line 113 "MemoizedSW.x10"
                if (t$8247) {
                    
                    //#line 114 "MemoizedSW.x10"
                    final long t$8248 = matchCount;
                    
                    //#line 114 "MemoizedSW.x10"
                    final long t$8249 = ((t$8248) + (((long)(1L))));
                    
                    //#line 114 "MemoizedSW.x10"
                    matchCount = t$8249;
                }
                
                //#line 116 "MemoizedSW.x10"
                final long t$8250 = i;
                
                //#line 116 "MemoizedSW.x10"
                final long t$8251 = ((t$8250) - (((long)(1L))));
                
                //#line 116 "MemoizedSW.x10"
                i = t$8251;
                
                //#line 117 "MemoizedSW.x10"
                final long t$8252 = j;
                
                //#line 117 "MemoizedSW.x10"
                final long t$8253 = ((t$8252) - (((long)(1L))));
                
                //#line 117 "MemoizedSW.x10"
                j = t$8253;
                
                //#line 118 "MemoizedSW.x10"
                final long t$8254 = stringLength;
                
                //#line 118 "MemoizedSW.x10"
                final long t$8255 = ((t$8254) + (((long)(1L))));
                
                //#line 118 "MemoizedSW.x10"
                stringLength = t$8255;
            } else {
                
                //#line 119 "MemoizedSW.x10"
                final long t$8256 = i;
                
                //#line 119 "MemoizedSW.x10"
                final long t$8257 = j;
                
                //#line 119 "MemoizedSW.x10"
                final long t$8258 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8256), (long)(t$8257)));
                
                //#line 119 "MemoizedSW.x10"
                final boolean t$8259 = ((t$8258) > (((long)(0L))));
                
                //#line 119 "MemoizedSW.x10"
                if (t$8259) {
                    
                    //#line 120 "MemoizedSW.x10"
                    final long i$7135min$8195 = 0L;
                    
                    //#line 120 "MemoizedSW.x10"
                    final long t$8196 = i;
                    
                    //#line 120 "MemoizedSW.x10"
                    final long t$8197 = j;
                    
                    //#line 120 "MemoizedSW.x10"
                    final long t$8198 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8196), (long)(t$8197)));
                    
                    //#line 120 "MemoizedSW.x10"
                    final long i$7135max$8199 = ((t$8198) - (((long)(1L))));
                    
                    //#line 120 "MemoizedSW.x10"
                    long i$8192 = i$7135min$8195;
                    
                    //#line 120 "MemoizedSW.x10"
                    for (;
                         true;
                         ) {
                        
                        //#line 120 "MemoizedSW.x10"
                        final long t$8193 = i$8192;
                        
                        //#line 120 "MemoizedSW.x10"
                        final boolean t$8194 = ((t$8193) <= (((long)(i$7135max$8199))));
                        
                        //#line 120 "MemoizedSW.x10"
                        if (!(t$8194)) {
                            
                            //#line 120 "MemoizedSW.x10"
                            break;
                        }
                        
                        //#line 120 "MemoizedSW.x10"
                        final long k$8189 = i$8192;
                        
                        //#line 121 "MemoizedSW.x10"
                        final java.lang.String t$8178 = ((java.lang.String)(result2));
                        
                        //#line 121 "MemoizedSW.x10"
                        final java.lang.String t$8179 = (((x10.core.Char.$box('-'))) + (t$8178));
                        
                        //#line 121 "MemoizedSW.x10"
                        result2 = ((java.lang.String)(t$8179));
                        
                        //#line 122 "MemoizedSW.x10"
                        final long t$8180 = i;
                        
                        //#line 122 "MemoizedSW.x10"
                        final long t$8181 = ((t$8180) - (((long)(k$8189))));
                        
                        //#line 122 "MemoizedSW.x10"
                        final long t$8182 = ((t$8181) - (((long)(1L))));
                        
                        //#line 122 "MemoizedSW.x10"
                        final int t$8183 = ((int)(long)(((long)(t$8182))));
                        
                        //#line 122 "MemoizedSW.x10"
                        final char t$8184 = (string1).charAt(((int)(t$8183)));
                        
                        //#line 122 "MemoizedSW.x10"
                        final java.lang.String t$8185 = ((java.lang.String)(result1));
                        
                        //#line 122 "MemoizedSW.x10"
                        final java.lang.String t$8186 = (((x10.core.Char.$box(t$8184))) + (t$8185));
                        
                        //#line 122 "MemoizedSW.x10"
                        result1 = ((java.lang.String)(t$8186));
                        
                        //#line 123 "MemoizedSW.x10"
                        final long t$8187 = stringLength;
                        
                        //#line 123 "MemoizedSW.x10"
                        final long t$8188 = ((t$8187) + (((long)(1L))));
                        
                        //#line 123 "MemoizedSW.x10"
                        stringLength = t$8188;
                        
                        //#line 120 "MemoizedSW.x10"
                        final long t$8190 = i$8192;
                        
                        //#line 120 "MemoizedSW.x10"
                        final long t$8191 = ((t$8190) + (((long)(1L))));
                        
                        //#line 120 "MemoizedSW.x10"
                        i$8192 = t$8191;
                    }
                    
                    //#line 125 "MemoizedSW.x10"
                    final long t$8260 = gapCount;
                    
                    //#line 125 "MemoizedSW.x10"
                    final long t$8261 = i;
                    
                    //#line 125 "MemoizedSW.x10"
                    final long t$8262 = j;
                    
                    //#line 125 "MemoizedSW.x10"
                    final long t$8263 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8261), (long)(t$8262)));
                    
                    //#line 125 "MemoizedSW.x10"
                    final long t$8264 = ((t$8260) + (((long)(t$8263))));
                    
                    //#line 125 "MemoizedSW.x10"
                    gapCount = t$8264;
                    
                    //#line 126 "MemoizedSW.x10"
                    final long t$8265 = i;
                    
                    //#line 126 "MemoizedSW.x10"
                    final long t$8266 = i;
                    
                    //#line 126 "MemoizedSW.x10"
                    final long t$8267 = j;
                    
                    //#line 126 "MemoizedSW.x10"
                    final long t$8268 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8266), (long)(t$8267)));
                    
                    //#line 126 "MemoizedSW.x10"
                    final long t$8269 = ((t$8265) - (((long)(t$8268))));
                    
                    //#line 126 "MemoizedSW.x10"
                    i = t$8269;
                } else {
                    
                    //#line 128 "MemoizedSW.x10"
                    final long i$7153min$8217 = 0L;
                    
                    //#line 128 "MemoizedSW.x10"
                    final long t$8218 = i;
                    
                    //#line 128 "MemoizedSW.x10"
                    final long t$8219 = j;
                    
                    //#line 128 "MemoizedSW.x10"
                    final long t$8220 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8218), (long)(t$8219)));
                    
                    //#line 128 "MemoizedSW.x10"
                    final long t$8221 = (-(t$8220));
                    
                    //#line 128 "MemoizedSW.x10"
                    final long i$7153max$8222 = ((t$8221) - (((long)(1L))));
                    
                    //#line 128 "MemoizedSW.x10"
                    long i$8214 = i$7153min$8217;
                    
                    //#line 128 "MemoizedSW.x10"
                    for (;
                         true;
                         ) {
                        
                        //#line 128 "MemoizedSW.x10"
                        final long t$8215 = i$8214;
                        
                        //#line 128 "MemoizedSW.x10"
                        final boolean t$8216 = ((t$8215) <= (((long)(i$7153max$8222))));
                        
                        //#line 128 "MemoizedSW.x10"
                        if (!(t$8216)) {
                            
                            //#line 128 "MemoizedSW.x10"
                            break;
                        }
                        
                        //#line 128 "MemoizedSW.x10"
                        final long k$8211 = i$8214;
                        
                        //#line 129 "MemoizedSW.x10"
                        final java.lang.String t$8200 = ((java.lang.String)(result1));
                        
                        //#line 129 "MemoizedSW.x10"
                        final java.lang.String t$8201 = (((x10.core.Char.$box('-'))) + (t$8200));
                        
                        //#line 129 "MemoizedSW.x10"
                        result1 = ((java.lang.String)(t$8201));
                        
                        //#line 130 "MemoizedSW.x10"
                        final long t$8202 = j;
                        
                        //#line 130 "MemoizedSW.x10"
                        final long t$8203 = ((t$8202) - (((long)(k$8211))));
                        
                        //#line 130 "MemoizedSW.x10"
                        final long t$8204 = ((t$8203) - (((long)(1L))));
                        
                        //#line 130 "MemoizedSW.x10"
                        final int t$8205 = ((int)(long)(((long)(t$8204))));
                        
                        //#line 130 "MemoizedSW.x10"
                        final char t$8206 = (string2).charAt(((int)(t$8205)));
                        
                        //#line 130 "MemoizedSW.x10"
                        final java.lang.String t$8207 = ((java.lang.String)(result2));
                        
                        //#line 130 "MemoizedSW.x10"
                        final java.lang.String t$8208 = (((x10.core.Char.$box(t$8206))) + (t$8207));
                        
                        //#line 130 "MemoizedSW.x10"
                        result2 = ((java.lang.String)(t$8208));
                        
                        //#line 131 "MemoizedSW.x10"
                        final long t$8209 = stringLength;
                        
                        //#line 131 "MemoizedSW.x10"
                        final long t$8210 = ((t$8209) + (((long)(1L))));
                        
                        //#line 131 "MemoizedSW.x10"
                        stringLength = t$8210;
                        
                        //#line 128 "MemoizedSW.x10"
                        final long t$8212 = i$8214;
                        
                        //#line 128 "MemoizedSW.x10"
                        final long t$8213 = ((t$8212) + (((long)(1L))));
                        
                        //#line 128 "MemoizedSW.x10"
                        i$8214 = t$8213;
                    }
                    
                    //#line 133 "MemoizedSW.x10"
                    final long t$8270 = gapCount;
                    
                    //#line 133 "MemoizedSW.x10"
                    final long t$8271 = i;
                    
                    //#line 133 "MemoizedSW.x10"
                    final long t$8272 = j;
                    
                    //#line 133 "MemoizedSW.x10"
                    final long t$8273 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8271), (long)(t$8272)));
                    
                    //#line 133 "MemoizedSW.x10"
                    final long t$8274 = ((t$8270) - (((long)(t$8273))));
                    
                    //#line 133 "MemoizedSW.x10"
                    gapCount = t$8274;
                    
                    //#line 134 "MemoizedSW.x10"
                    final long t$8275 = j;
                    
                    //#line 134 "MemoizedSW.x10"
                    final long t$8276 = i;
                    
                    //#line 134 "MemoizedSW.x10"
                    final long t$8277 = j;
                    
                    //#line 134 "MemoizedSW.x10"
                    final long t$8278 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)directions).$apply$G((long)(t$8276), (long)(t$8277)));
                    
                    //#line 134 "MemoizedSW.x10"
                    final long t$8279 = ((t$8275) + (((long)(t$8278))));
                    
                    //#line 134 "MemoizedSW.x10"
                    j = t$8279;
                }
            }
        }
        
        //#line 137 "MemoizedSW.x10"
        final x10.io.Printer t$7599 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 137 "MemoizedSW.x10"
        final long t$7595 = matchCount;
        
        //#line 137 "MemoizedSW.x10"
        final java.lang.String t$7596 = (("Identity: ") + ((x10.core.Long.$box(t$7595))));
        
        //#line 137 "MemoizedSW.x10"
        final java.lang.String t$7597 = ((t$7596) + ("/"));
        
        //#line 137 "MemoizedSW.x10"
        final long t$7598 = stringLength;
        
        //#line 137 "MemoizedSW.x10"
        final java.lang.String t$7600 = ((t$7597) + ((x10.core.Long.$box(t$7598))));
        
        //#line 137 "MemoizedSW.x10"
        t$7599.println(((java.lang.Object)(t$7600)));
        
        //#line 138 "MemoizedSW.x10"
        final x10.io.Printer t$7605 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 138 "MemoizedSW.x10"
        final long t$7601 = gapCount;
        
        //#line 138 "MemoizedSW.x10"
        final java.lang.String t$7602 = (("Gaps: ") + ((x10.core.Long.$box(t$7601))));
        
        //#line 138 "MemoizedSW.x10"
        final java.lang.String t$7603 = ((t$7602) + ("/"));
        
        //#line 138 "MemoizedSW.x10"
        final long t$7604 = stringLength;
        
        //#line 138 "MemoizedSW.x10"
        final java.lang.String t$7606 = ((t$7603) + ((x10.core.Long.$box(t$7604))));
        
        //#line 138 "MemoizedSW.x10"
        t$7605.println(((java.lang.Object)(t$7606)));
        
        //#line 139 "MemoizedSW.x10"
        final x10.io.Printer t$7610 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 139 "MemoizedSW.x10"
        final long t$7607 = x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)maxCoordinates).first));
        
        //#line 139 "MemoizedSW.x10"
        final long t$7608 = x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)maxCoordinates).second));
        
        //#line 139 "MemoizedSW.x10"
        final long t$7609 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(t$7607), (long)(t$7608)));
        
        //#line 139 "MemoizedSW.x10"
        final java.lang.String t$7611 = (("Score: ") + ((x10.core.Long.$box(t$7609))));
        
        //#line 139 "MemoizedSW.x10"
        t$7610.println(((java.lang.Object)(t$7611)));
        
        //#line 140 "MemoizedSW.x10"
        final x10.io.Printer t$7612 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 140 "MemoizedSW.x10"
        final java.lang.String t$7613 = ((java.lang.String)(result1));
        
        //#line 140 "MemoizedSW.x10"
        t$7612.println(((java.lang.Object)(t$7613)));
        
        //#line 141 "MemoizedSW.x10"
        final x10.io.Printer t$7614 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 141 "MemoizedSW.x10"
        final java.lang.String t$7615 = ((java.lang.String)(result2));
        
        //#line 141 "MemoizedSW.x10"
        t$7614.println(((java.lang.Object)(t$7615)));
    }
    
    
    //#line 144 "MemoizedSW.x10"
    public static void match__2$1x10$lang$Long$2(final java.lang.String string1, final java.lang.String string2, final x10.array.Array_2<x10.core.Long> blosum, final long gapOpening, final long gapExtension) {
        
        //#line 147 "MemoizedSW.x10"
        final int t$7616 = (string1).length();
        
        //#line 147 "MemoizedSW.x10"
        final long t$7617 = ((long)(((int)(t$7616))));
        
        //#line 147 "MemoizedSW.x10"
        final long t$7620 = ((t$7617) + (((long)(1L))));
        
        //#line 147 "MemoizedSW.x10"
        final int t$7618 = (string2).length();
        
        //#line 147 "MemoizedSW.x10"
        final long t$7619 = ((long)(((int)(t$7618))));
        
        //#line 147 "MemoizedSW.x10"
        final long t$7621 = ((t$7619) + (((long)(1L))));
        
        //#line 147 "MemoizedSW.x10"
        final x10.array.Array_2 bestLeftwards = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(t$7620, t$7621, (x10.core.Long.$box(0L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 148 "MemoizedSW.x10"
        final int t$7622 = (string1).length();
        
        //#line 148 "MemoizedSW.x10"
        final long t$7623 = ((long)(((int)(t$7622))));
        
        //#line 148 "MemoizedSW.x10"
        final long t$7626 = ((t$7623) + (((long)(1L))));
        
        //#line 148 "MemoizedSW.x10"
        final int t$7624 = (string2).length();
        
        //#line 148 "MemoizedSW.x10"
        final long t$7625 = ((long)(((int)(t$7624))));
        
        //#line 148 "MemoizedSW.x10"
        final long t$7627 = ((t$7625) + (((long)(1L))));
        
        //#line 148 "MemoizedSW.x10"
        final x10.array.Array_2 bestUpwards = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(t$7626, t$7627, (x10.core.Long.$box(0L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 149 "MemoizedSW.x10"
        final int t$7628 = (string1).length();
        
        //#line 149 "MemoizedSW.x10"
        final long t$7629 = ((long)(((int)(t$7628))));
        
        //#line 149 "MemoizedSW.x10"
        final long t$7632 = ((t$7629) + (((long)(1L))));
        
        //#line 149 "MemoizedSW.x10"
        final int t$7630 = (string2).length();
        
        //#line 149 "MemoizedSW.x10"
        final long t$7631 = ((long)(((int)(t$7630))));
        
        //#line 149 "MemoizedSW.x10"
        final long t$7633 = ((t$7631) + (((long)(1L))));
        
        //#line 149 "MemoizedSW.x10"
        final x10.array.Array_2 matrix = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(t$7632, t$7633, (x10.core.Long.$box(0L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 150 "MemoizedSW.x10"
        final int t$7634 = (string1).length();
        
        //#line 150 "MemoizedSW.x10"
        final long t$7635 = ((long)(((int)(t$7634))));
        
        //#line 150 "MemoizedSW.x10"
        final long t$7638 = ((t$7635) + (((long)(1L))));
        
        //#line 150 "MemoizedSW.x10"
        final int t$7636 = (string2).length();
        
        //#line 150 "MemoizedSW.x10"
        final long t$7637 = ((long)(((int)(t$7636))));
        
        //#line 150 "MemoizedSW.x10"
        final long t$7639 = ((t$7637) + (((long)(1L))));
        
        //#line 150 "MemoizedSW.x10"
        final x10.array.Array_2 directions = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(t$7638, t$7639, (x10.core.Long.$box(-1L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 151 "MemoizedSW.x10"
        long globalMax = java.lang.Long.MIN_VALUE;
        
        //#line 152 "MemoizedSW.x10"
        x10.util.Pair maxCoordinates = new x10.util.Pair<x10.core.Long, x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG, x10.rtt.Types.LONG).x10$util$Pair$$init$S((x10.core.Long.$box(0L)), (x10.core.Long.$box(0L)), (x10.util.Pair.__0x10$util$Pair$$T__1x10$util$Pair$$U) null);
        
        //#line 154 "MemoizedSW.x10"
        final long i$7189min$8377 = 1L;
        
        //#line 154 "MemoizedSW.x10"
        final int t$8378 = (string1).length();
        
        //#line 154 "MemoizedSW.x10"
        final long i$7189max$8379 = ((long)(((int)(t$8378))));
        
        //#line 154 "MemoizedSW.x10"
        long i$8374 = i$7189min$8377;
        
        //#line 154 "MemoizedSW.x10"
        for (;
             true;
             ) {
            
            //#line 154 "MemoizedSW.x10"
            final long t$8375 = i$8374;
            
            //#line 154 "MemoizedSW.x10"
            final boolean t$8376 = ((t$8375) <= (((long)(i$7189max$8379))));
            
            //#line 154 "MemoizedSW.x10"
            if (!(t$8376)) {
                
                //#line 154 "MemoizedSW.x10"
                break;
            }
            
            //#line 154 "MemoizedSW.x10"
            final long i$8371 = i$8374;
            
            //#line 155 "MemoizedSW.x10"
            final long i$7171min$8368 = 1L;
            
            //#line 155 "MemoizedSW.x10"
            final int t$8369 = (string2).length();
            
            //#line 155 "MemoizedSW.x10"
            final long i$7171max$8370 = ((long)(((int)(t$8369))));
            
            //#line 155 "MemoizedSW.x10"
            long i$8365 = i$7171min$8368;
            
            //#line 155 "MemoizedSW.x10"
            for (;
                 true;
                 ) {
                
                //#line 155 "MemoizedSW.x10"
                final long t$8366 = i$8365;
                
                //#line 155 "MemoizedSW.x10"
                final boolean t$8367 = ((t$8366) <= (((long)(i$7171max$8370))));
                
                //#line 155 "MemoizedSW.x10"
                if (!(t$8367)) {
                    
                    //#line 155 "MemoizedSW.x10"
                    break;
                }
                
                //#line 155 "MemoizedSW.x10"
                final long j$8362 = i$8365;
                
                //#line 156 "MemoizedSW.x10"
                long max$8280 = java.lang.Long.MIN_VALUE;
                
                //#line 158 "MemoizedSW.x10"
                final long t$8281 = ((i$8371) - (((long)(1L))));
                
                //#line 158 "MemoizedSW.x10"
                final int t$8282 = ((int)(long)(((long)(t$8281))));
                
                //#line 158 "MemoizedSW.x10"
                char firstChar$8283 = (string1).charAt(((int)(t$8282)));
                
                //#line 159 "MemoizedSW.x10"
                final long t$8284 = ((j$8362) - (((long)(1L))));
                
                //#line 159 "MemoizedSW.x10"
                final int t$8285 = ((int)(long)(((long)(t$8284))));
                
                //#line 159 "MemoizedSW.x10"
                char secondChar$8286 = (string2).charAt(((int)(t$8285)));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8287 = ((i$8371) - (((long)(1L))));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8288 = ((j$8362) - (((long)(1L))));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8289 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(t$8287), (long)(t$8288)));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8290 = ((i$8371) - (((long)(1L))));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8291 = ((j$8362) - (((long)(1L))));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8292 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(t$8290), (long)(t$8291)));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8293 = ((i$8371) - (((long)(1L))));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8294 = ((j$8362) - (((long)(1L))));
                
                //#line 161 "MemoizedSW.x10"
                final long t$8295 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(t$8293), (long)(t$8294)));
                
                //#line 161 "MemoizedSW.x10"
                long diagScore$8296 = MemoizedSW.max$O((long)(t$8289), (long)(t$8292), (long)(t$8295));
                
                //#line 162 "MemoizedSW.x10"
                final long t$8297 = diagScore$8296;
                
                //#line 162 "MemoizedSW.x10"
                final char t$8298 = firstChar$8283;
                
                //#line 162 "MemoizedSW.x10"
                final int t$8299 = ((int) (t$8298));
                
                //#line 162 "MemoizedSW.x10"
                final long t$8300 = ((long)(((int)(t$8299))));
                
                //#line 162 "MemoizedSW.x10"
                final char t$8301 = secondChar$8286;
                
                //#line 162 "MemoizedSW.x10"
                final int t$8302 = ((int) (t$8301));
                
                //#line 162 "MemoizedSW.x10"
                final long t$8303 = ((long)(((int)(t$8302))));
                
                //#line 162 "MemoizedSW.x10"
                final long t$8304 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)blosum).$apply$G((long)(t$8300), (long)(t$8303)));
                
                //#line 162 "MemoizedSW.x10"
                final long t$8305 = ((t$8297) + (((long)(t$8304))));
                
                //#line 162 "MemoizedSW.x10"
                ((x10.array.Array_2<x10.core.Long>)matrix).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(t$8305));
                
                //#line 163 "MemoizedSW.x10"
                final long t$8306 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(i$8371), (long)(j$8362)));
                
                //#line 163 "MemoizedSW.x10"
                final boolean t$8307 = ((t$8306) < (((long)(0L))));
                
                //#line 163 "MemoizedSW.x10"
                if (t$8307) {
                    
                    //#line 163 "MemoizedSW.x10"
                    ((x10.array.Array_2<x10.core.Long>)matrix).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(0L));
                }
                
                //#line 165 "MemoizedSW.x10"
                final long t$8308 = ((i$8371) - (((long)(1L))));
                
                //#line 165 "MemoizedSW.x10"
                final long t$8309 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(t$8308), (long)(j$8362)));
                
                //#line 165 "MemoizedSW.x10"
                final long t$8310 = ((gapOpening) + (((long)(t$8309))));
                
                //#line 166 "MemoizedSW.x10"
                final long t$8311 = ((i$8371) - (((long)(1L))));
                
                //#line 166 "MemoizedSW.x10"
                final long t$8312 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(t$8311), (long)(j$8362)));
                
                //#line 166 "MemoizedSW.x10"
                final long t$8313 = ((gapOpening) + (((long)(t$8312))));
                
                //#line 167 "MemoizedSW.x10"
                final long t$8314 = ((i$8371) - (((long)(1L))));
                
                //#line 167 "MemoizedSW.x10"
                final long t$8315 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(t$8314), (long)(j$8362)));
                
                //#line 167 "MemoizedSW.x10"
                final long t$8316 = ((gapExtension) + (((long)(t$8315))));
                
                //#line 165 "MemoizedSW.x10"
                final long t$8317 = MemoizedSW.max$O((long)(t$8310), (long)(t$8313), (long)(t$8316));
                
                //#line 165 "MemoizedSW.x10"
                ((x10.array.Array_2<x10.core.Long>)bestUpwards).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(t$8317));
                
                //#line 168 "MemoizedSW.x10"
                final long t$8318 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(i$8371), (long)(j$8362)));
                
                //#line 168 "MemoizedSW.x10"
                final long t$8319 = ((i$8371) - (((long)(1L))));
                
                //#line 168 "MemoizedSW.x10"
                final long t$8320 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(t$8319), (long)(j$8362)));
                
                //#line 168 "MemoizedSW.x10"
                final long t$8321 = ((t$8320) + (((long)(gapOpening))));
                
                //#line 168 "MemoizedSW.x10"
                final long t$8322 = java.lang.Math.max(((long)(t$8318)),((long)(t$8321)));
                
                //#line 168 "MemoizedSW.x10"
                ((x10.array.Array_2<x10.core.Long>)bestUpwards).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(t$8322));
                
                //#line 169 "MemoizedSW.x10"
                final long t$8323 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(i$8371), (long)(j$8362)));
                
                //#line 169 "MemoizedSW.x10"
                final boolean t$8324 = ((t$8323) < (((long)(0L))));
                
                //#line 169 "MemoizedSW.x10"
                if (t$8324) {
                    
                    //#line 169 "MemoizedSW.x10"
                    ((x10.array.Array_2<x10.core.Long>)bestUpwards).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(0L));
                }
                
                //#line 171 "MemoizedSW.x10"
                final long t$8325 = ((j$8362) - (((long)(1L))));
                
                //#line 171 "MemoizedSW.x10"
                final long t$8326 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(i$8371), (long)(t$8325)));
                
                //#line 171 "MemoizedSW.x10"
                final long t$8327 = ((gapOpening) + (((long)(t$8326))));
                
                //#line 172 "MemoizedSW.x10"
                final long t$8328 = ((j$8362) - (((long)(1L))));
                
                //#line 172 "MemoizedSW.x10"
                final long t$8329 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(i$8371), (long)(t$8328)));
                
                //#line 172 "MemoizedSW.x10"
                final long t$8330 = ((gapExtension) + (((long)(t$8329))));
                
                //#line 173 "MemoizedSW.x10"
                final long t$8331 = ((j$8362) - (((long)(1L))));
                
                //#line 173 "MemoizedSW.x10"
                final long t$8332 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(i$8371), (long)(t$8331)));
                
                //#line 173 "MemoizedSW.x10"
                final long t$8333 = ((gapOpening) + (((long)(t$8332))));
                
                //#line 171 "MemoizedSW.x10"
                final long t$8334 = MemoizedSW.max$O((long)(t$8327), (long)(t$8330), (long)(t$8333));
                
                //#line 171 "MemoizedSW.x10"
                ((x10.array.Array_2<x10.core.Long>)bestLeftwards).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(t$8334));
                
                //#line 174 "MemoizedSW.x10"
                final long t$8335 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(i$8371), (long)(j$8362)));
                
                //#line 174 "MemoizedSW.x10"
                final long t$8336 = ((j$8362) - (((long)(1L))));
                
                //#line 174 "MemoizedSW.x10"
                final long t$8337 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(i$8371), (long)(t$8336)));
                
                //#line 174 "MemoizedSW.x10"
                final long t$8338 = ((t$8337) + (((long)(gapOpening))));
                
                //#line 174 "MemoizedSW.x10"
                final long t$8339 = java.lang.Math.max(((long)(t$8335)),((long)(t$8338)));
                
                //#line 174 "MemoizedSW.x10"
                ((x10.array.Array_2<x10.core.Long>)bestLeftwards).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(t$8339));
                
                //#line 175 "MemoizedSW.x10"
                final long t$8340 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(i$8371), (long)(j$8362)));
                
                //#line 175 "MemoizedSW.x10"
                final boolean t$8341 = ((t$8340) < (((long)(0L))));
                
                //#line 175 "MemoizedSW.x10"
                if (t$8341) {
                    
                    //#line 175 "MemoizedSW.x10"
                    ((x10.array.Array_2<x10.core.Long>)bestLeftwards).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(0L));
                }
                
                //#line 177 "MemoizedSW.x10"
                final long t$8342 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(i$8371), (long)(j$8362)));
                
                //#line 177 "MemoizedSW.x10"
                final long t$8343 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(i$8371), (long)(j$8362)));
                
                //#line 177 "MemoizedSW.x10"
                boolean t$8344 = ((t$8342) >= (((long)(t$8343))));
                
                //#line 177 "MemoizedSW.x10"
                if (t$8344) {
                    
                    //#line 177 "MemoizedSW.x10"
                    final long t$8345 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(i$8371), (long)(j$8362)));
                    
                    //#line 177 "MemoizedSW.x10"
                    final long t$8346 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(i$8371), (long)(j$8362)));
                    
                    //#line 177 "MemoizedSW.x10"
                    t$8344 = ((t$8345) >= (((long)(t$8346))));
                }
                
                //#line 177 "MemoizedSW.x10"
                final boolean t$8347 = t$8344;
                
                //#line 177 "MemoizedSW.x10"
                if (t$8347) {
                    
                    //#line 178 "MemoizedSW.x10"
                    ((x10.array.Array_2<x10.core.Long>)directions).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(0L));
                    
                    //#line 179 "MemoizedSW.x10"
                    final long t$8348 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(i$8371), (long)(j$8362)));
                    
                    //#line 179 "MemoizedSW.x10"
                    max$8280 = t$8348;
                } else {
                    
                    //#line 180 "MemoizedSW.x10"
                    final long t$8349 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(i$8371), (long)(j$8362)));
                    
                    //#line 180 "MemoizedSW.x10"
                    final long t$8350 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)matrix).$apply$G((long)(i$8371), (long)(j$8362)));
                    
                    //#line 180 "MemoizedSW.x10"
                    boolean t$8351 = ((t$8349) >= (((long)(t$8350))));
                    
                    //#line 180 "MemoizedSW.x10"
                    if (t$8351) {
                        
                        //#line 180 "MemoizedSW.x10"
                        final long t$8352 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(i$8371), (long)(j$8362)));
                        
                        //#line 180 "MemoizedSW.x10"
                        final long t$8353 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(i$8371), (long)(j$8362)));
                        
                        //#line 180 "MemoizedSW.x10"
                        t$8351 = ((t$8352) >= (((long)(t$8353))));
                    }
                    
                    //#line 180 "MemoizedSW.x10"
                    final boolean t$8354 = t$8351;
                    
                    //#line 180 "MemoizedSW.x10"
                    if (t$8354) {
                        
                        //#line 181 "MemoizedSW.x10"
                        ((x10.array.Array_2<x10.core.Long>)directions).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(-1L));
                        
                        //#line 182 "MemoizedSW.x10"
                        final long t$8355 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestLeftwards).$apply$G((long)(i$8371), (long)(j$8362)));
                        
                        //#line 182 "MemoizedSW.x10"
                        max$8280 = t$8355;
                    } else {
                        
                        //#line 184 "MemoizedSW.x10"
                        ((x10.array.Array_2<x10.core.Long>)directions).$set__2x10$array$Array_2$$T$G((long)(i$8371), (long)(j$8362), x10.core.Long.$box(1L));
                        
                        //#line 185 "MemoizedSW.x10"
                        final long t$8356 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)bestUpwards).$apply$G((long)(i$8371), (long)(j$8362)));
                        
                        //#line 185 "MemoizedSW.x10"
                        max$8280 = t$8356;
                    }
                }
                
                //#line 188 "MemoizedSW.x10"
                final long t$8357 = max$8280;
                
                //#line 188 "MemoizedSW.x10"
                final long t$8358 = globalMax;
                
                //#line 188 "MemoizedSW.x10"
                final boolean t$8359 = ((t$8357) > (((long)(t$8358))));
                
                //#line 188 "MemoizedSW.x10"
                if (t$8359) {
                    
                    //#line 189 "MemoizedSW.x10"
                    final long t$8360 = max$8280;
                    
                    //#line 189 "MemoizedSW.x10"
                    globalMax = t$8360;
                    
                    //#line 190 "MemoizedSW.x10"
                    final x10.util.Pair t$8361 = new x10.util.Pair<x10.core.Long, x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG, x10.rtt.Types.LONG).x10$util$Pair$$init$S((x10.core.Long.$box(i$8371)), (x10.core.Long.$box(j$8362)), (x10.util.Pair.__0x10$util$Pair$$T__1x10$util$Pair$$U) null);
                    
                    //#line 190 "MemoizedSW.x10"
                    maxCoordinates = ((x10.util.Pair)(t$8361));
                }
                
                //#line 155 "MemoizedSW.x10"
                final long t$8363 = i$8365;
                
                //#line 155 "MemoizedSW.x10"
                final long t$8364 = ((t$8363) + (((long)(1L))));
                
                //#line 155 "MemoizedSW.x10"
                i$8365 = t$8364;
            }
            
            //#line 154 "MemoizedSW.x10"
            final long t$8372 = i$8374;
            
            //#line 154 "MemoizedSW.x10"
            final long t$8373 = ((t$8372) + (((long)(1L))));
            
            //#line 154 "MemoizedSW.x10"
            i$8374 = t$8373;
        }
        
        //#line 194 "MemoizedSW.x10"
        final x10.util.Pair t$7730 = ((x10.util.Pair)(maxCoordinates));
        
        //#line 194 "MemoizedSW.x10"
        MemoizedSW.backtrack__2$1x10$lang$Long$2__3$1x10$lang$Long$2__4$1x10$lang$Long$3x10$lang$Long$2(((java.lang.String)(string1)), ((java.lang.String)(string2)), ((x10.array.Array_2)(matrix)), ((x10.array.Array_2)(directions)), ((x10.util.Pair)(t$7730)));
    }
    
    
    //#line 197 "MemoizedSW.x10"
    public static long max$O(final long first, final long second, final long third) {
        
        //#line 198 "MemoizedSW.x10"
        boolean t$7731 = ((first) >= (((long)(second))));
        
        //#line 198 "MemoizedSW.x10"
        if (t$7731) {
            
            //#line 198 "MemoizedSW.x10"
            t$7731 = ((first) >= (((long)(third))));
        }
        
        //#line 198 "MemoizedSW.x10"
        final boolean t$7734 = t$7731;
        
        //#line 198 "MemoizedSW.x10"
        if (t$7734) {
            
            //#line 199 "MemoizedSW.x10"
            return first;
        } else {
            
            //#line 200 "MemoizedSW.x10"
            boolean t$7732 = ((second) >= (((long)(third))));
            
            //#line 200 "MemoizedSW.x10"
            if (t$7732) {
                
                //#line 200 "MemoizedSW.x10"
                t$7732 = ((second) >= (((long)(first))));
            }
            
            //#line 200 "MemoizedSW.x10"
            final boolean t$7733 = t$7732;
            
            //#line 200 "MemoizedSW.x10"
            if (t$7733) {
                
                //#line 201 "MemoizedSW.x10"
                return second;
            } else {
                
                //#line 203 "MemoizedSW.x10"
                return third;
            }
        }
    }
    
    
    //#line 207 "MemoizedSW.x10"
    public static void parallelMatch__2$1x10$lang$Long$2(final java.lang.String string1, final java.lang.String string2, final x10.array.Array_2<x10.core.Long> blosum, final long gapOpening, final long gapExtension, final long cutoff) {
        
        //#line 210 "MemoizedSW.x10"
        final int t$7735 = (string1).length();
        
        //#line 210 "MemoizedSW.x10"
        long maxRow = ((long)(((int)(t$7735))));
        
        //#line 211 "MemoizedSW.x10"
        final int t$7736 = (string2).length();
        
        //#line 211 "MemoizedSW.x10"
        long maxCol = ((long)(((int)(t$7736))));
        
        //#line 213 "MemoizedSW.x10"
        final long t$7737 = maxRow;
        
        //#line 213 "MemoizedSW.x10"
        final long t$7739 = ((t$7737) + (((long)(1L))));
        
        //#line 213 "MemoizedSW.x10"
        final long t$7738 = maxCol;
        
        //#line 213 "MemoizedSW.x10"
        final long t$7740 = ((t$7738) + (((long)(1L))));
        
        //#line 213 "MemoizedSW.x10"
        final x10.array.Array_2 bestLeftwards = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(t$7739, t$7740, (x10.core.Long.$box(0L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 214 "MemoizedSW.x10"
        final long t$7741 = maxRow;
        
        //#line 214 "MemoizedSW.x10"
        final long t$7743 = ((t$7741) + (((long)(1L))));
        
        //#line 214 "MemoizedSW.x10"
        final long t$7742 = maxCol;
        
        //#line 214 "MemoizedSW.x10"
        final long t$7744 = ((t$7742) + (((long)(1L))));
        
        //#line 214 "MemoizedSW.x10"
        final x10.array.Array_2 bestUpwards = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(t$7743, t$7744, (x10.core.Long.$box(0L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 215 "MemoizedSW.x10"
        final long t$7745 = maxRow;
        
        //#line 215 "MemoizedSW.x10"
        final long t$7747 = ((t$7745) + (((long)(1L))));
        
        //#line 215 "MemoizedSW.x10"
        final long t$7746 = maxCol;
        
        //#line 215 "MemoizedSW.x10"
        final long t$7748 = ((t$7746) + (((long)(1L))));
        
        //#line 215 "MemoizedSW.x10"
        final x10.array.Array_2 matrix = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(t$7747, t$7748, (x10.core.Long.$box(0L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 216 "MemoizedSW.x10"
        final long t$7749 = maxRow;
        
        //#line 216 "MemoizedSW.x10"
        final long t$7751 = ((t$7749) + (((long)(1L))));
        
        //#line 216 "MemoizedSW.x10"
        final long t$7750 = maxCol;
        
        //#line 216 "MemoizedSW.x10"
        final long t$7752 = ((t$7750) + (((long)(1L))));
        
        //#line 216 "MemoizedSW.x10"
        final x10.array.Array_2 directions = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(t$7751, t$7752, (x10.core.Long.$box(0L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 218 "MemoizedSW.x10"
        final long t$7753 = maxRow;
        
        //#line 218 "MemoizedSW.x10"
        final double t$7754 = ((double)(long)(((long)(t$7753))));
        
        //#line 218 "MemoizedSW.x10"
        final double t$7755 = ((double)(long)(((long)(cutoff))));
        
        //#line 218 "MemoizedSW.x10"
        final double t$7756 = ((t$7754) / (((double)(t$7755))));
        
        //#line 218 "MemoizedSW.x10"
        final double t$7757 = java.lang.Math.ceil(((double)(t$7756)));
        
        //#line 218 "MemoizedSW.x10"
        final int t$7758 = ((int)(double)(((double)(t$7757))));
        
        //#line 218 "MemoizedSW.x10"
        final long t$7759 = ((long)(((int)(t$7758))));
        
        //#line 218 "MemoizedSW.x10"
        maxRow = t$7759;
        
        //#line 219 "MemoizedSW.x10"
        final long t$7760 = maxCol;
        
        //#line 219 "MemoizedSW.x10"
        final double t$7761 = ((double)(long)(((long)(t$7760))));
        
        //#line 219 "MemoizedSW.x10"
        final double t$7762 = ((double)(long)(((long)(cutoff))));
        
        //#line 219 "MemoizedSW.x10"
        final double t$7763 = ((t$7761) / (((double)(t$7762))));
        
        //#line 219 "MemoizedSW.x10"
        final double t$7764 = java.lang.Math.ceil(((double)(t$7763)));
        
        //#line 219 "MemoizedSW.x10"
        final int t$7765 = ((int)(double)(((double)(t$7764))));
        
        //#line 219 "MemoizedSW.x10"
        final long t$7766 = ((long)(((int)(t$7765))));
        
        //#line 219 "MemoizedSW.x10"
        maxCol = t$7766;
        
        //#line 221 "MemoizedSW.x10"
        long globalMax = java.lang.Long.MIN_VALUE;
        
        //#line 222 "MemoizedSW.x10"
        x10.util.Pair maxCoordinates = new x10.util.Pair<x10.core.Long, x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG, x10.rtt.Types.LONG).x10$util$Pair$$init$S((x10.core.Long.$box(0L)), (x10.core.Long.$box(0L)), (x10.util.Pair.__0x10$util$Pair$$T__1x10$util$Pair$$U) null);
        
        //#line 224 "MemoizedSW.x10"
        final long i$7261min$8546 = 1L;
        
        //#line 224 "MemoizedSW.x10"
        final long t$8547 = maxRow;
        
        //#line 224 "MemoizedSW.x10"
        final long t$8548 = maxCol;
        
        //#line 224 "MemoizedSW.x10"
        final long i$7261max$8549 = ((t$8547) + (((long)(t$8548))));
        
        //#line 224 "MemoizedSW.x10"
        long i$8543 = i$7261min$8546;
        
        //#line 224 "MemoizedSW.x10"
        for (;
             true;
             ) {
            
            //#line 224 "MemoizedSW.x10"
            final long t$8544 = i$8543;
            
            //#line 224 "MemoizedSW.x10"
            final boolean t$8545 = ((t$8544) <= (((long)(i$7261max$8549))));
            
            //#line 224 "MemoizedSW.x10"
            if (!(t$8545)) {
                
                //#line 224 "MemoizedSW.x10"
                break;
            }
            
            //#line 224 "MemoizedSW.x10"
            final long line$8540 = i$8543;
            
            //#line 226 "MemoizedSW.x10"
            long startCol$8518 = 0L;
            
            //#line 227 "MemoizedSW.x10"
            final long t$8519 = maxRow;
            
            //#line 227 "MemoizedSW.x10"
            final long t$8520 = ((line$8540) - (((long)(t$8519))));
            
            //#line 227 "MemoizedSW.x10"
            final boolean t$8521 = ((t$8520) > (((long)(0L))));
            
            //#line 227 "MemoizedSW.x10"
            if (t$8521) {
                
                //#line 228 "MemoizedSW.x10"
                final long t$8522 = maxRow;
                
                //#line 228 "MemoizedSW.x10"
                final long t$8523 = ((line$8540) - (((long)(t$8522))));
                
                //#line 228 "MemoizedSW.x10"
                startCol$8518 = t$8523;
            }
            
            //#line 231 "MemoizedSW.x10"
            final long t$8524 = maxCol;
            
            //#line 231 "MemoizedSW.x10"
            final long t$8525 = startCol$8518;
            
            //#line 231 "MemoizedSW.x10"
            final long t$8526 = ((t$8524) - (((long)(t$8525))));
            
            //#line 231 "MemoizedSW.x10"
            final boolean t$8527 = ((line$8540) < (((long)(t$8526))));
            
            //#line 231 "MemoizedSW.x10"
            long t$8528 =  0;
            
            //#line 231 "MemoizedSW.x10"
            if (t$8527) {
                
                //#line 231 "MemoizedSW.x10"
                t$8528 = line$8540;
            } else {
                
                //#line 231 "MemoizedSW.x10"
                final long t$8529 = maxCol;
                
                //#line 231 "MemoizedSW.x10"
                final long t$8530 = startCol$8518;
                
                //#line 231 "MemoizedSW.x10"
                t$8528 = ((t$8529) - (((long)(t$8530))));
            }
            
            //#line 231 "MemoizedSW.x10"
            long count$8531 = t$8528;
            
            //#line 232 "MemoizedSW.x10"
            final long t$8532 = count$8531;
            
            //#line 232 "MemoizedSW.x10"
            final long t$8533 = maxRow;
            
            //#line 232 "MemoizedSW.x10"
            final boolean t$8534 = ((t$8532) < (((long)(t$8533))));
            
            //#line 232 "MemoizedSW.x10"
            long t$8535 =  0;
            
            //#line 232 "MemoizedSW.x10"
            if (t$8534) {
                
                //#line 232 "MemoizedSW.x10"
                t$8535 = count$8531;
            } else {
                
                //#line 232 "MemoizedSW.x10"
                t$8535 = maxRow;
            }
            
            //#line 232 "MemoizedSW.x10"
            final long t$8536 = t$8535;
            
            //#line 232 "MemoizedSW.x10"
            count$8531 = t$8536;
            {
                
                //#line 235 "MemoizedSW.x10"
                x10.xrx.Runtime.ensureNotInAtomic();
                
                //#line 235 "MemoizedSW.x10"
                final x10.xrx.FinishState fs$8585 = x10.xrx.Runtime.startFinish();
                {
                    
                    //#line 235 "MemoizedSW.x10"
                    final long[] $maxRow$8587 = new long[1];
                    
                    //#line 235 "MemoizedSW.x10"
                    $maxRow$8587[(int)0]=maxRow;
                    
                    //#line 235 "MemoizedSW.x10"
                    final long[] $startCol$8518$8588 = new long[1];
                    
                    //#line 235 "MemoizedSW.x10"
                    $startCol$8518$8588[(int)0]=startCol$8518;
                    
                    //#line 235 "MemoizedSW.x10"
                    final long[] $globalMax$8589 = new long[1];
                    
                    //#line 235 "MemoizedSW.x10"
                    $globalMax$8589[(int)0]=globalMax;
                    
                    //#line 235 "MemoizedSW.x10"
                    final x10.util.Pair[] $maxCoordinates$8590 = new x10.util.Pair[1];
                    
                    //#line 235 "MemoizedSW.x10"
                    $maxCoordinates$8590[(int)0]=maxCoordinates;
                    
                    //#line 235 "MemoizedSW.x10"
                    try {{
                        {
                            
                            //#line 235 "MemoizedSW.x10"
                            final long i$7243min$8537 = 0L;
                            
                            //#line 235 "MemoizedSW.x10"
                            final long t$8538 = count$8531;
                            
                            //#line 235 "MemoizedSW.x10"
                            final long i$7243max$8539 = ((t$8538) - (((long)(1L))));
                            
                            //#line 235 "MemoizedSW.x10"
                            long i$8515 = i$7243min$8537;
                            
                            //#line 235 "MemoizedSW.x10"
                            for (;
                                 true;
                                 ) {
                                
                                //#line 235 "MemoizedSW.x10"
                                final long t$8516 = i$8515;
                                
                                //#line 235 "MemoizedSW.x10"
                                final boolean t$8517 = ((t$8516) <= (((long)(i$7243max$8539))));
                                
                                //#line 235 "MemoizedSW.x10"
                                if (!(t$8517)) {
                                    
                                    //#line 235 "MemoizedSW.x10"
                                    break;
                                }
                                
                                //#line 235 "MemoizedSW.x10"
                                final long k$8512 = i$8515;
                                
                                //#line 235 "MemoizedSW.x10"
                                x10.xrx.Runtime.runAsync(((x10.core.fun.VoidFun_0_0)(new MemoizedSW.$Closure$0($maxRow$8587, line$8540, k$8512, $startCol$8518$8588, cutoff, string1, string2, bestLeftwards, bestUpwards, matrix, blosum, gapOpening, gapExtension, directions, $globalMax$8589, $maxCoordinates$8590, (MemoizedSW.$Closure$0.__7$1x10$lang$Long$2__8$1x10$lang$Long$2__9$1x10$lang$Long$2__10$1x10$lang$Long$2__13$1x10$lang$Long$2) null))));
                                
                                //#line 235 "MemoizedSW.x10"
                                final long t$8513 = i$8515;
                                
                                //#line 235 "MemoizedSW.x10"
                                final long t$8514 = ((t$8513) + (((long)(1L))));
                                
                                //#line 235 "MemoizedSW.x10"
                                i$8515 = t$8514;
                            }
                        }
                    }}catch (java.lang.Throwable ct$8583) {
                        
                        //#line 235 "MemoizedSW.x10"
                        x10.xrx.Runtime.pushException(((java.lang.Throwable)(ct$8583)));
                        
                        //#line 235 "MemoizedSW.x10"
                        throw new java.lang.RuntimeException();
                    }finally {{
                         
                         //#line 235 "MemoizedSW.x10"
                         x10.xrx.Runtime.stopFinish(((x10.xrx.FinishState)(fs$8585)));
                     }}
                    
                    //#line 235 "MemoizedSW.x10"
                    maxRow = ((long)$maxRow$8587[(int)0]);
                    
                    //#line 235 "MemoizedSW.x10"
                    startCol$8518 = ((long)$startCol$8518$8588[(int)0]);
                    
                    //#line 235 "MemoizedSW.x10"
                    globalMax = ((long)$globalMax$8589[(int)0]);
                    
                    //#line 235 "MemoizedSW.x10"
                    maxCoordinates = ((x10.util.Pair<x10.core.Long, x10.core.Long>)$maxCoordinates$8590[(int)0]);
                    }
                }
            
            //#line 224 "MemoizedSW.x10"
            final long t$8541 = i$8543;
            
            //#line 224 "MemoizedSW.x10"
            final long t$8542 = ((t$8541) + (((long)(1L))));
            
            //#line 224 "MemoizedSW.x10"
            i$8543 = t$8542;
            }
        
        //#line 303 "MemoizedSW.x10"
        final x10.util.Pair t$7915 = ((x10.util.Pair)(maxCoordinates));
        
        //#line 303 "MemoizedSW.x10"
        MemoizedSW.railBacktrack__2$1x10$lang$Long$2__3$1x10$lang$Long$2__4$1x10$lang$Long$3x10$lang$Long$2(((java.lang.String)(string1)), ((java.lang.String)(string2)), ((x10.array.Array_2)(matrix)), ((x10.array.Array_2)(directions)), ((x10.util.Pair)(t$7915)));
        }
    
    
    //#line 306 "MemoizedSW.x10"
    public static class $Main extends x10.runtime.impl.java.Runtime
    {
        // java main method
        public static void main(java.lang.String[] args) {
            // start native runtime
            new $Main().start(args);
        }
        
        // called by native runtime inside main x10 thread
        public void runtimeCallback(final x10.core.Rail<java.lang.String> args) {
            // call the original app-main method
            MemoizedSW.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
        //#line 307 "MemoizedSW.x10"
        java.lang.String firstStringFile = ((java.lang.String[])args.value)[(int)0L];
        
        //#line 308 "MemoizedSW.x10"
        java.lang.String secondStringFile = ((java.lang.String[])args.value)[(int)1L];
        
        //#line 309 "MemoizedSW.x10"
        java.lang.String matchFile = ((java.lang.String[])args.value)[(int)2L];
        
        //#line 310 "MemoizedSW.x10"
        final java.lang.String t$7916 = ((java.lang.String[])args.value)[(int)3L];
        
        //#line 310 "MemoizedSW.x10"
        final int t$7917 = java.lang.Integer.parseInt(t$7916);
        
        //#line 310 "MemoizedSW.x10"
        final int t$7918 = (-(t$7917));
        
        //#line 310 "MemoizedSW.x10"
        long gapOpening = ((long)(((int)(t$7918))));
        
        //#line 311 "MemoizedSW.x10"
        final java.lang.String t$7919 = ((java.lang.String[])args.value)[(int)4L];
        
        //#line 311 "MemoizedSW.x10"
        final int t$7920 = java.lang.Integer.parseInt(t$7919);
        
        //#line 311 "MemoizedSW.x10"
        final int t$7921 = (-(t$7920));
        
        //#line 311 "MemoizedSW.x10"
        long gapExtension = ((long)(((int)(t$7921))));
        
        //#line 312 "MemoizedSW.x10"
        final java.lang.String t$7922 = ((java.lang.String[])args.value)[(int)5L];
        
        //#line 312 "MemoizedSW.x10"
        final int t$7923 = java.lang.Integer.parseInt(t$7922);
        
        //#line 312 "MemoizedSW.x10"
        long cutoff = ((long)(((int)(t$7923))));
        
        //#line 314 "MemoizedSW.x10"
        java.lang.String string1 = "";
        
        //#line 315 "MemoizedSW.x10"
        java.lang.String string2 = "";
        
        //#line 317 "MemoizedSW.x10"
        final java.lang.String t$7924 = ((java.lang.String)(firstStringFile));
        
        //#line 317 "MemoizedSW.x10"
        final x10.io.File FIRST_STRING_FILE = ((x10.io.File)(new x10.io.File((java.lang.System[]) null).x10$io$File$$init$S(t$7924)));
        
        //#line 318 "MemoizedSW.x10"
        final x10.io.FileReader reader1 = ((x10.io.FileReader)(new x10.io.FileReader((java.lang.System[]) null).x10$io$FileReader$$init$S(((x10.io.File)(FIRST_STRING_FILE)))));
        
        //#line 319 "MemoizedSW.x10"
        java.lang.String line =  null;
        
        //#line 320 "MemoizedSW.x10"
        final java.lang.String t$7925 = reader1.readLine();
        
        //#line 320 "MemoizedSW.x10"
        line = ((java.lang.String)(t$7925));
        
        //#line 321 "MemoizedSW.x10"
        while (true) {
            
            //#line 322 "MemoizedSW.x10"
            try {{
                
                //#line 323 "MemoizedSW.x10"
                final java.lang.String t$7926 = reader1.readLine();
                
                //#line 323 "MemoizedSW.x10"
                line = ((java.lang.String)(t$7926));
            }}catch (final java.lang.RuntimeException id$0) {
                
                //#line 326 "MemoizedSW.x10"
                break;
            }
            
            //#line 328 "MemoizedSW.x10"
            final java.lang.String t$7928 = ((java.lang.String)(string1));
            
            //#line 328 "MemoizedSW.x10"
            final java.lang.String t$7927 = ((java.lang.String)(line));
            
            //#line 328 "MemoizedSW.x10"
            final java.lang.String t$7929 = (t$7927).trim();
            
            //#line 328 "MemoizedSW.x10"
            final java.lang.String t$7930 = ((t$7928) + (t$7929));
            
            //#line 328 "MemoizedSW.x10"
            string1 = ((java.lang.String)(t$7930));
        }
        
        //#line 330 "MemoizedSW.x10"
        final java.lang.String t$7931 = ((java.lang.String)(secondStringFile));
        
        //#line 330 "MemoizedSW.x10"
        final x10.io.File SECOND_STRING_FILE = ((x10.io.File)(new x10.io.File((java.lang.System[]) null).x10$io$File$$init$S(t$7931)));
        
        //#line 331 "MemoizedSW.x10"
        final x10.io.FileReader reader2 = ((x10.io.FileReader)(new x10.io.FileReader((java.lang.System[]) null).x10$io$FileReader$$init$S(((x10.io.File)(SECOND_STRING_FILE)))));
        
        //#line 332 "MemoizedSW.x10"
        final java.lang.String t$7932 = reader2.readLine();
        
        //#line 332 "MemoizedSW.x10"
        line = ((java.lang.String)(t$7932));
        
        //#line 333 "MemoizedSW.x10"
        while (true) {
            
            //#line 334 "MemoizedSW.x10"
            try {{
                
                //#line 335 "MemoizedSW.x10"
                final java.lang.String t$7933 = reader2.readLine();
                
                //#line 335 "MemoizedSW.x10"
                line = ((java.lang.String)(t$7933));
            }}catch (final java.lang.RuntimeException id$1) {
                
                //#line 338 "MemoizedSW.x10"
                break;
            }
            
            //#line 340 "MemoizedSW.x10"
            final java.lang.String t$7935 = ((java.lang.String)(string2));
            
            //#line 340 "MemoizedSW.x10"
            final java.lang.String t$7934 = ((java.lang.String)(line));
            
            //#line 340 "MemoizedSW.x10"
            final java.lang.String t$7936 = (t$7934).trim();
            
            //#line 340 "MemoizedSW.x10"
            final java.lang.String t$7937 = ((t$7935) + (t$7936));
            
            //#line 340 "MemoizedSW.x10"
            string2 = ((java.lang.String)(t$7937));
        }
        
        //#line 343 "MemoizedSW.x10"
        final x10.core.Rail indexMap = ((x10.core.Rail)(new x10.core.Rail<x10.core.Long>(x10.rtt.Types.LONG, ((long)(100L)))));
        
        //#line 344 "MemoizedSW.x10"
        final x10.array.Array_2 blosum = ((x10.array.Array_2)(new x10.array.Array_2<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$array$Array_2$$init$S(((long)(127L)), ((long)(127L)), (x10.core.Long.$box(0L)), (x10.array.Array_2.__2x10$array$Array_2$$T) null)));
        
        //#line 346 "MemoizedSW.x10"
        final java.lang.String t$7938 = ((java.lang.String)(matchFile));
        
        //#line 346 "MemoizedSW.x10"
        final x10.io.File MATCH_FILE = ((x10.io.File)(new x10.io.File((java.lang.System[]) null).x10$io$File$$init$S(t$7938)));
        
        //#line 347 "MemoizedSW.x10"
        final x10.io.FileReader matchReader = ((x10.io.FileReader)(new x10.io.FileReader((java.lang.System[]) null).x10$io$FileReader$$init$S(((x10.io.File)(MATCH_FILE)))));
        
        //#line 348 "MemoizedSW.x10"
        final x10.util.ArrayList headerOrder = ((x10.util.ArrayList)(new x10.util.ArrayList<x10.core.Char>((java.lang.System[]) null, x10.rtt.Types.CHAR).x10$util$ArrayList$$init$S()));
        
        //#line 349 "MemoizedSW.x10"
        while (true) {
            
            //#line 349 "MemoizedSW.x10"
            final java.lang.String t$7939 = matchReader.readLine();
            
            //#line 349 "MemoizedSW.x10"
            final java.lang.String t$7940 = line = ((java.lang.String)(t$7939));
            
            //#line 349 "MemoizedSW.x10"
            boolean t$7945 = ((t$7940) != (null));
            
            //#line 349 "MemoizedSW.x10"
            if (t$7945) {
                
                //#line 349 "MemoizedSW.x10"
                final java.lang.String t$7941 = ((java.lang.String)(line));
                
                //#line 349 "MemoizedSW.x10"
                final java.lang.String t$7942 = (t$7941).trim();
                
                //#line 349 "MemoizedSW.x10"
                final int t$7943 = ((int)(long)(((long)(0L))));
                
                //#line 349 "MemoizedSW.x10"
                final char t$7944 = (t$7942).charAt(((int)(t$7943)));
                
                //#line 349 "MemoizedSW.x10"
                t$7945 = ((char) t$7944) == ((char) '#');
            }
            
            //#line 349 "MemoizedSW.x10"
            final boolean t$7946 = t$7945;
            
            //#line 349 "MemoizedSW.x10"
            if (!(t$7946)) {
                
                //#line 349 "MemoizedSW.x10"
                break;
            }
        }
        
        //#line 351 "MemoizedSW.x10"
        final java.lang.String t$7947 = ((java.lang.String)(line));
        
        //#line 351 "MemoizedSW.x10"
        final java.lang.String t$7948 = (t$7947).trim();
        
        //#line 351 "MemoizedSW.x10"
        final x10.util.ArrayList headerLine = ((x10.util.ArrayList)(MemoizedSW.splitString(((java.lang.String)(t$7948)))));
        
        //#line 352 "MemoizedSW.x10"
        final long i$7279min$8578 = 0L;
        
        //#line 352 "MemoizedSW.x10"
        final long t$8579 = ((x10.util.ArrayList<java.lang.String>)headerLine).size$O();
        
        //#line 352 "MemoizedSW.x10"
        final long i$7279max$8580 = ((t$8579) - (((long)(1L))));
        
        //#line 352 "MemoizedSW.x10"
        long i$8556 = i$7279min$8578;
        
        //#line 352 "MemoizedSW.x10"
        for (;
             true;
             ) {
            
            //#line 352 "MemoizedSW.x10"
            final long t$8557 = i$8556;
            
            //#line 352 "MemoizedSW.x10"
            final boolean t$8558 = ((t$8557) <= (((long)(i$7279max$8580))));
            
            //#line 352 "MemoizedSW.x10"
            if (!(t$8558)) {
                
                //#line 352 "MemoizedSW.x10"
                break;
            }
            
            //#line 352 "MemoizedSW.x10"
            final long i$8553 = i$8556;
            
            //#line 353 "MemoizedSW.x10"
            final java.lang.String t$8550 = ((x10.util.ArrayList<java.lang.String>)headerLine).get$G((long)(i$8553));
            
            //#line 353 "MemoizedSW.x10"
            final int t$8551 = ((int)(long)(((long)(0L))));
            
            //#line 353 "MemoizedSW.x10"
            final char t$8552 = (t$8550).charAt(((int)(t$8551)));
            
            //#line 353 "MemoizedSW.x10"
            ((x10.util.ArrayList<x10.core.Char>)headerOrder).add__0x10$util$ArrayList$$T$O(x10.core.Char.$box(t$8552));
            
            //#line 352 "MemoizedSW.x10"
            final long t$8554 = i$8556;
            
            //#line 352 "MemoizedSW.x10"
            final long t$8555 = ((t$8554) + (((long)(1L))));
            
            //#line 352 "MemoizedSW.x10"
            i$8556 = t$8555;
        }
        
        //#line 355 "MemoizedSW.x10"
        while (true) {
            
            //#line 356 "MemoizedSW.x10"
            try {{
                
                //#line 357 "MemoizedSW.x10"
                final java.lang.String t$7958 = matchReader.readLine();
                
                //#line 357 "MemoizedSW.x10"
                line = ((java.lang.String)(t$7958));
            }}catch (final java.lang.RuntimeException id$2) {
                
                //#line 360 "MemoizedSW.x10"
                break;
            }
            
            //#line 362 "MemoizedSW.x10"
            final java.lang.String t$7959 = ((java.lang.String)(line));
            
            //#line 362 "MemoizedSW.x10"
            final java.lang.String t$7960 = (t$7959).trim();
            
            //#line 362 "MemoizedSW.x10"
            final x10.util.ArrayList currLine = ((x10.util.ArrayList)(MemoizedSW.splitString(((java.lang.String)(t$7960)))));
            
            //#line 363 "MemoizedSW.x10"
            final java.lang.String t$7961 = ((x10.util.ArrayList<java.lang.String>)currLine).get$G((long)(0L));
            
            //#line 363 "MemoizedSW.x10"
            final int t$7962 = ((int)(long)(((long)(0L))));
            
            //#line 363 "MemoizedSW.x10"
            char currChar = (t$7961).charAt(((int)(t$7962)));
            
            //#line 364 "MemoizedSW.x10"
            final long i$7297min$8575 = 1L;
            
            //#line 364 "MemoizedSW.x10"
            final long t$8576 = ((x10.util.ArrayList<java.lang.String>)currLine).size$O();
            
            //#line 364 "MemoizedSW.x10"
            final long i$7297max$8577 = ((t$8576) - (((long)(1L))));
            
            //#line 364 "MemoizedSW.x10"
            long i$8572 = i$7297min$8575;
            
            //#line 364 "MemoizedSW.x10"
            for (;
                 true;
                 ) {
                
                //#line 364 "MemoizedSW.x10"
                final long t$8573 = i$8572;
                
                //#line 364 "MemoizedSW.x10"
                final boolean t$8574 = ((t$8573) <= (((long)(i$7297max$8577))));
                
                //#line 364 "MemoizedSW.x10"
                if (!(t$8574)) {
                    
                    //#line 364 "MemoizedSW.x10"
                    break;
                }
                
                //#line 364 "MemoizedSW.x10"
                final long i$8569 = i$8572;
                
                //#line 365 "MemoizedSW.x10"
                final char t$8559 = currChar;
                
                //#line 365 "MemoizedSW.x10"
                final int t$8560 = ((int) (t$8559));
                
                //#line 365 "MemoizedSW.x10"
                final long t$8561 = ((long)(((int)(t$8560))));
                
                //#line 365 "MemoizedSW.x10"
                final long t$8562 = ((i$8569) - (((long)(1L))));
                
                //#line 365 "MemoizedSW.x10"
                final char t$8563 = x10.core.Char.$unbox(((x10.util.ArrayList<x10.core.Char>)headerOrder).get$G((long)(t$8562)));
                
                //#line 365 "MemoizedSW.x10"
                final int t$8564 = ((int) (t$8563));
                
                //#line 365 "MemoizedSW.x10"
                final long t$8565 = ((long)(((int)(t$8564))));
                
                //#line 365 "MemoizedSW.x10"
                final java.lang.String t$8566 = ((x10.util.ArrayList<java.lang.String>)currLine).get$G((long)(i$8569));
                
                //#line 365 "MemoizedSW.x10"
                final int t$8567 = java.lang.Integer.parseInt(t$8566);
                
                //#line 365 "MemoizedSW.x10"
                final long t$8568 = ((long)(((int)(t$8567))));
                
                //#line 365 "MemoizedSW.x10"
                ((x10.array.Array_2<x10.core.Long>)blosum).$set__2x10$array$Array_2$$T$G((long)(t$8561), (long)(t$8565), x10.core.Long.$box(t$8568));
                
                //#line 364 "MemoizedSW.x10"
                final long t$8570 = i$8572;
                
                //#line 364 "MemoizedSW.x10"
                final long t$8571 = ((t$8570) + (((long)(1L))));
                
                //#line 364 "MemoizedSW.x10"
                i$8572 = t$8571;
            }
        }
        
        //#line 369 "MemoizedSW.x10"
        final x10.io.Printer t$7979 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 369 "MemoizedSW.x10"
        t$7979.println(((java.lang.Object)("==================== Memoized Smith Waterman ==================")));
        
        //#line 370 "MemoizedSW.x10"
        final x10.io.Printer t$7985 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 370 "MemoizedSW.x10"
        final long t$7980 = cutoff;
        
        //#line 370 "MemoizedSW.x10"
        final java.lang.String t$7981 = (("Cutoff = ") + ((x10.core.Long.$box(t$7980))));
        
        //#line 370 "MemoizedSW.x10"
        final java.lang.String t$7983 = ((t$7981) + (" ----- Size = "));
        
        //#line 370 "MemoizedSW.x10"
        final java.lang.String t$7982 = ((java.lang.String)(string1));
        
        //#line 370 "MemoizedSW.x10"
        final int t$7984 = (t$7982).length();
        
        //#line 370 "MemoizedSW.x10"
        final java.lang.String t$7986 = ((t$7983) + ((x10.core.Int.$box(t$7984))));
        
        //#line 370 "MemoizedSW.x10"
        t$7985.println(((java.lang.Object)(t$7986)));
        
        //#line 371 "MemoizedSW.x10"
        long startTime = x10.lang.System.nanoTime$O();
        
        //#line 372 "MemoizedSW.x10"
        final java.lang.String t$7987 = ((java.lang.String)(string1));
        
        //#line 372 "MemoizedSW.x10"
        final java.lang.String t$7988 = ((java.lang.String)(string2));
        
        //#line 372 "MemoizedSW.x10"
        final long t$7989 = gapOpening;
        
        //#line 372 "MemoizedSW.x10"
        final long t$7990 = gapExtension;
        
        //#line 372 "MemoizedSW.x10"
        final long t$7991 = cutoff;
        
        //#line 372 "MemoizedSW.x10"
        MemoizedSW.parallelMatch__2$1x10$lang$Long$2(((java.lang.String)(t$7987)), ((java.lang.String)(t$7988)), ((x10.array.Array_2)(blosum)), (long)(t$7989), (long)(t$7990), (long)(t$7991));
        
        //#line 373 "MemoizedSW.x10"
        final long t$7992 = x10.lang.System.nanoTime$O();
        
        //#line 373 "MemoizedSW.x10"
        final long t$7993 = startTime;
        
        //#line 373 "MemoizedSW.x10"
        long finalTime = ((t$7992) - (((long)(t$7993))));
        
        //#line 374 "MemoizedSW.x10"
        final x10.io.Printer t$7998 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 374 "MemoizedSW.x10"
        final long t$7994 = finalTime;
        
        //#line 374 "MemoizedSW.x10"
        final double t$7995 = ((double)(long)(((long)(t$7994))));
        
        //#line 374 "MemoizedSW.x10"
        final double t$7996 = ((t$7995) / (((double)(1000000.0))));
        
        //#line 374 "MemoizedSW.x10"
        final java.lang.String t$7997 = (("Parallel Runtime: ") + ((x10.core.Double.$box(t$7996))));
        
        //#line 374 "MemoizedSW.x10"
        final java.lang.String t$7999 = ((t$7997) + ("ms"));
        
        //#line 374 "MemoizedSW.x10"
        t$7998.println(((java.lang.Object)(t$7999)));
        
        //#line 376 "MemoizedSW.x10"
        final long t$8000 = x10.lang.System.nanoTime$O();
        
        //#line 376 "MemoizedSW.x10"
        startTime = t$8000;
        
        //#line 377 "MemoizedSW.x10"
        final java.lang.String t$8001 = ((java.lang.String)(string1));
        
        //#line 377 "MemoizedSW.x10"
        final java.lang.String t$8002 = ((java.lang.String)(string2));
        
        //#line 377 "MemoizedSW.x10"
        final long t$8003 = gapOpening;
        
        //#line 377 "MemoizedSW.x10"
        final long t$8004 = gapExtension;
        
        //#line 377 "MemoizedSW.x10"
        MemoizedSW.match__2$1x10$lang$Long$2(((java.lang.String)(t$8001)), ((java.lang.String)(t$8002)), ((x10.array.Array_2)(blosum)), (long)(t$8003), (long)(t$8004));
        
        //#line 378 "MemoizedSW.x10"
        final long t$8005 = x10.lang.System.nanoTime$O();
        
        //#line 378 "MemoizedSW.x10"
        final long t$8006 = startTime;
        
        //#line 378 "MemoizedSW.x10"
        final long t$8007 = ((t$8005) - (((long)(t$8006))));
        
        //#line 378 "MemoizedSW.x10"
        finalTime = t$8007;
        
        //#line 379 "MemoizedSW.x10"
        final x10.io.Printer t$8012 = ((x10.io.Printer)(x10.io.Console.get$OUT()));
        
        //#line 379 "MemoizedSW.x10"
        final long t$8008 = finalTime;
        
        //#line 379 "MemoizedSW.x10"
        final double t$8009 = ((double)(long)(((long)(t$8008))));
        
        //#line 379 "MemoizedSW.x10"
        final double t$8010 = ((t$8009) / (((double)(1000000.0))));
        
        //#line 379 "MemoizedSW.x10"
        final java.lang.String t$8011 = (("Sequential Runtime: ") + ((x10.core.Double.$box(t$8010))));
        
        //#line 379 "MemoizedSW.x10"
        final java.lang.String t$8013 = ((t$8011) + ("ms"));
        
        //#line 379 "MemoizedSW.x10"
        t$8012.println(((java.lang.Object)(t$8013)));
    }
    
    
    //#line 11 "MemoizedSW.x10"
    final public MemoizedSW MemoizedSW$$this$MemoizedSW() {
        
        //#line 11 "MemoizedSW.x10"
        return MemoizedSW.this;
    }
    
    
    //#line 11 "MemoizedSW.x10"
    // creation method for java code (1-phase java constructor)
    public MemoizedSW() {
        this((java.lang.System[]) null);
        MemoizedSW$$init$S();
    }
    
    // constructor for non-virtual call
    final public MemoizedSW MemoizedSW$$init$S() {
         {
            
            //#line 11 "MemoizedSW.x10"
            
            
            //#line 11 "MemoizedSW.x10"
            this.__fieldInitializers_MemoizedSW();
        }
        return this;
    }
    
    
    
    //#line 11 "MemoizedSW.x10"
    final public void __fieldInitializers_MemoizedSW() {
        
    }
    
    @x10.runtime.impl.java.X10Generated
    final public static class $Closure$0 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
    {
        public static final x10.rtt.RuntimeType<$Closure$0> $RTT = 
            x10.rtt.StaticVoidFunType.<$Closure$0> make($Closure$0.class,
                                                        new x10.rtt.Type[] {
                                                            x10.core.fun.VoidFun_0_0.$RTT
                                                        });
        
        public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
        
        public x10.rtt.Type<?> $getParam(int i) { return null; }
        
        private Object writeReplace() throws java.io.ObjectStreamException {
            return new x10.serialization.SerializationProxy(this);
        }
        
        public static x10.serialization.X10JavaSerializable $_deserialize_body(MemoizedSW.$Closure$0 $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
            $_obj.$globalMax$8589 = $deserializer.readObject();
            $_obj.$maxCoordinates$8590 = $deserializer.readObject();
            $_obj.$maxRow$8587 = $deserializer.readObject();
            $_obj.$startCol$8518$8588 = $deserializer.readObject();
            $_obj.bestLeftwards = $deserializer.readObject();
            $_obj.bestUpwards = $deserializer.readObject();
            $_obj.blosum = $deserializer.readObject();
            $_obj.cutoff = $deserializer.readLong();
            $_obj.directions = $deserializer.readObject();
            $_obj.gapExtension = $deserializer.readLong();
            $_obj.gapOpening = $deserializer.readLong();
            $_obj.k$8512 = $deserializer.readLong();
            $_obj.line$8540 = $deserializer.readLong();
            $_obj.matrix = $deserializer.readObject();
            $_obj.string1 = $deserializer.readObject();
            $_obj.string2 = $deserializer.readObject();
            return $_obj;
        }
        
        public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            MemoizedSW.$Closure$0 $_obj = new MemoizedSW.$Closure$0((java.lang.System[]) null);
            $deserializer.record_reference($_obj);
            return $_deserialize_body($_obj, $deserializer);
        }
        
        public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            $serializer.write(this.$globalMax$8589);
            $serializer.write(this.$maxCoordinates$8590);
            $serializer.write(this.$maxRow$8587);
            $serializer.write(this.$startCol$8518$8588);
            $serializer.write(this.bestLeftwards);
            $serializer.write(this.bestUpwards);
            $serializer.write(this.blosum);
            $serializer.write(this.cutoff);
            $serializer.write(this.directions);
            $serializer.write(this.gapExtension);
            $serializer.write(this.gapOpening);
            $serializer.write(this.k$8512);
            $serializer.write(this.line$8540);
            $serializer.write(this.matrix);
            $serializer.write(this.string1);
            $serializer.write(this.string2);
            
        }
        
        // constructor just for allocation
        public $Closure$0(final java.lang.System[] $dummy) {
            
        }
        
        // synthetic type for parameter mangling
        public static final class __7$1x10$lang$Long$2__8$1x10$lang$Long$2__9$1x10$lang$Long$2__10$1x10$lang$Long$2__13$1x10$lang$Long$2 {}
        
    
        
        public void $apply() {
            
            //#line 235 "MemoizedSW.x10"
            try {{
                
                //#line 237 "MemoizedSW.x10"
                long i$8478 = ((long)this.$maxRow$8587[(int)0]);
                
                //#line 238 "MemoizedSW.x10"
                final long t$8479 = ((long)this.$maxRow$8587[(int)0]);
                
                //#line 238 "MemoizedSW.x10"
                final boolean t$8480 = ((t$8479) > (((long)(this.line$8540))));
                
                //#line 238 "MemoizedSW.x10"
                if (t$8480) {
                    
                    //#line 239 "MemoizedSW.x10"
                    i$8478 = this.line$8540;
                }
                
                //#line 241 "MemoizedSW.x10"
                final long t$8481 = i$8478;
                
                //#line 241 "MemoizedSW.x10"
                final long t$8482 = ((t$8481) - (((long)(this.k$8512))));
                
                //#line 241 "MemoizedSW.x10"
                i$8478 = t$8482;
                
                //#line 242 "MemoizedSW.x10"
                final long t$8483 = ((long)this.$startCol$8518$8588[(int)0]);
                
                //#line 242 "MemoizedSW.x10"
                final long t$8484 = ((t$8483) + (((long)(this.k$8512))));
                
                //#line 242 "MemoizedSW.x10"
                long j$8485 = ((t$8484) + (((long)(1L))));
                
                //#line 246 "MemoizedSW.x10"
                final long t$8486 = i$8478;
                
                //#line 246 "MemoizedSW.x10"
                final long t$8487 = ((t$8486) - (((long)(1L))));
                
                //#line 246 "MemoizedSW.x10"
                final long t$8488 = ((t$8487) * (((long)(this.cutoff))));
                
                //#line 246 "MemoizedSW.x10"
                final long t$8489 = ((t$8488) + (((long)(1L))));
                
                //#line 246 "MemoizedSW.x10"
                i$8478 = t$8489;
                
                //#line 247 "MemoizedSW.x10"
                final long t$8490 = j$8485;
                
                //#line 247 "MemoizedSW.x10"
                final long t$8491 = ((t$8490) - (((long)(1L))));
                
                //#line 247 "MemoizedSW.x10"
                final long t$8492 = ((t$8491) * (((long)(this.cutoff))));
                
                //#line 247 "MemoizedSW.x10"
                final long t$8493 = ((t$8492) + (((long)(1L))));
                
                //#line 247 "MemoizedSW.x10"
                j$8485 = t$8493;
                
                //#line 249 "MemoizedSW.x10"
                final long t$8494 = i$8478;
                
                //#line 249 "MemoizedSW.x10"
                final long t$8495 = ((t$8494) + (((long)(this.cutoff))));
                
                //#line 249 "MemoizedSW.x10"
                long cellMaxRow$8496 = ((t$8495) - (((long)(1L))));
                
                //#line 250 "MemoizedSW.x10"
                final long t$8497 = j$8485;
                
                //#line 250 "MemoizedSW.x10"
                final long t$8498 = ((t$8497) + (((long)(this.cutoff))));
                
                //#line 250 "MemoizedSW.x10"
                long cellMaxCol$8499 = ((t$8498) - (((long)(1L))));
                
                //#line 253 "MemoizedSW.x10"
                final long t$8500 = cellMaxRow$8496;
                
                //#line 253 "MemoizedSW.x10"
                final int t$8501 = (this.string1).length();
                
                //#line 253 "MemoizedSW.x10"
                final long t$8502 = ((long)(((int)(t$8501))));
                
                //#line 253 "MemoizedSW.x10"
                final boolean t$8503 = ((t$8500) > (((long)(t$8502))));
                
                //#line 253 "MemoizedSW.x10"
                if (t$8503) {
                    
                    //#line 254 "MemoizedSW.x10"
                    final int t$8504 = (this.string1).length();
                    
                    //#line 254 "MemoizedSW.x10"
                    final long t$8505 = ((long)(((int)(t$8504))));
                    
                    //#line 254 "MemoizedSW.x10"
                    cellMaxRow$8496 = t$8505;
                }
                
                //#line 256 "MemoizedSW.x10"
                final long t$8506 = cellMaxCol$8499;
                
                //#line 256 "MemoizedSW.x10"
                final int t$8507 = (this.string2).length();
                
                //#line 256 "MemoizedSW.x10"
                final long t$8508 = ((long)(((int)(t$8507))));
                
                //#line 256 "MemoizedSW.x10"
                final boolean t$8509 = ((t$8506) > (((long)(t$8508))));
                
                //#line 256 "MemoizedSW.x10"
                if (t$8509) {
                    
                    //#line 257 "MemoizedSW.x10"
                    final int t$8510 = (this.string2).length();
                    
                    //#line 257 "MemoizedSW.x10"
                    final long t$8511 = ((long)(((int)(t$8510))));
                    
                    //#line 257 "MemoizedSW.x10"
                    cellMaxCol$8499 = t$8511;
                }
                
                //#line 260 "MemoizedSW.x10"
                final long i$7225min$8476 = i$8478;
                
                //#line 260 "MemoizedSW.x10"
                final long i$7225max$8477 = cellMaxRow$8496;
                
                //#line 260 "MemoizedSW.x10"
                long i$8473 = i$7225min$8476;
                
                //#line 260 "MemoizedSW.x10"
                for (;
                     true;
                     ) {
                    
                    //#line 260 "MemoizedSW.x10"
                    final long t$8474 = i$8473;
                    
                    //#line 260 "MemoizedSW.x10"
                    final boolean t$8475 = ((t$8474) <= (((long)(i$7225max$8477))));
                    
                    //#line 260 "MemoizedSW.x10"
                    if (!(t$8475)) {
                        
                        //#line 260 "MemoizedSW.x10"
                        break;
                    }
                    
                    //#line 260 "MemoizedSW.x10"
                    final long a$8470 = i$8473;
                    
                    //#line 261 "MemoizedSW.x10"
                    final long i$7207min$8468 = j$8485;
                    
                    //#line 261 "MemoizedSW.x10"
                    final long i$7207max$8469 = cellMaxCol$8499;
                    
                    //#line 261 "MemoizedSW.x10"
                    long i$8465 = i$7207min$8468;
                    
                    //#line 261 "MemoizedSW.x10"
                    for (;
                         true;
                         ) {
                        
                        //#line 261 "MemoizedSW.x10"
                        final long t$8466 = i$8465;
                        
                        //#line 261 "MemoizedSW.x10"
                        final boolean t$8467 = ((t$8466) <= (((long)(i$7207max$8469))));
                        
                        //#line 261 "MemoizedSW.x10"
                        if (!(t$8467)) {
                            
                            //#line 261 "MemoizedSW.x10"
                            break;
                        }
                        
                        //#line 261 "MemoizedSW.x10"
                        final long b$8462 = i$8465;
                        
                        //#line 262 "MemoizedSW.x10"
                        long max$8380 = java.lang.Long.MIN_VALUE;
                        
                        //#line 264 "MemoizedSW.x10"
                        final long t$8381 = ((a$8470) - (((long)(1L))));
                        
                        //#line 264 "MemoizedSW.x10"
                        final int t$8382 = ((int)(long)(((long)(t$8381))));
                        
                        //#line 264 "MemoizedSW.x10"
                        char firstChar$8383 = (this.string1).charAt(((int)(t$8382)));
                        
                        //#line 265 "MemoizedSW.x10"
                        final long t$8384 = ((b$8462) - (((long)(1L))));
                        
                        //#line 265 "MemoizedSW.x10"
                        final int t$8385 = ((int)(long)(((long)(t$8384))));
                        
                        //#line 265 "MemoizedSW.x10"
                        char secondChar$8386 = (this.string2).charAt(((int)(t$8385)));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8387 = ((a$8470) - (((long)(1L))));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8388 = ((b$8462) - (((long)(1L))));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8389 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(t$8387), (long)(t$8388)));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8390 = ((a$8470) - (((long)(1L))));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8391 = ((b$8462) - (((long)(1L))));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8392 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(t$8390), (long)(t$8391)));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8393 = ((a$8470) - (((long)(1L))));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8394 = ((b$8462) - (((long)(1L))));
                        
                        //#line 267 "MemoizedSW.x10"
                        final long t$8395 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.matrix).$apply$G((long)(t$8393), (long)(t$8394)));
                        
                        //#line 267 "MemoizedSW.x10"
                        long diagScore$8396 = MemoizedSW.max$O((long)(t$8389), (long)(t$8392), (long)(t$8395));
                        
                        //#line 268 "MemoizedSW.x10"
                        final long t$8397 = diagScore$8396;
                        
                        //#line 268 "MemoizedSW.x10"
                        final char t$8398 = firstChar$8383;
                        
                        //#line 268 "MemoizedSW.x10"
                        final int t$8399 = ((int) (t$8398));
                        
                        //#line 268 "MemoizedSW.x10"
                        final long t$8400 = ((long)(((int)(t$8399))));
                        
                        //#line 268 "MemoizedSW.x10"
                        final char t$8401 = secondChar$8386;
                        
                        //#line 268 "MemoizedSW.x10"
                        final int t$8402 = ((int) (t$8401));
                        
                        //#line 268 "MemoizedSW.x10"
                        final long t$8403 = ((long)(((int)(t$8402))));
                        
                        //#line 268 "MemoizedSW.x10"
                        final long t$8404 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.blosum).$apply$G((long)(t$8400), (long)(t$8403)));
                        
                        //#line 268 "MemoizedSW.x10"
                        final long t$8405 = ((t$8397) + (((long)(t$8404))));
                        
                        //#line 268 "MemoizedSW.x10"
                        ((x10.array.Array_2<x10.core.Long>)this.matrix).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(t$8405));
                        
                        //#line 269 "MemoizedSW.x10"
                        final long t$8406 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.matrix).$apply$G((long)(a$8470), (long)(b$8462)));
                        
                        //#line 269 "MemoizedSW.x10"
                        final boolean t$8407 = ((t$8406) < (((long)(0L))));
                        
                        //#line 269 "MemoizedSW.x10"
                        if (t$8407) {
                            
                            //#line 269 "MemoizedSW.x10"
                            ((x10.array.Array_2<x10.core.Long>)this.matrix).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(0L));
                        }
                        
                        //#line 271 "MemoizedSW.x10"
                        final long t$8408 = ((a$8470) - (((long)(1L))));
                        
                        //#line 271 "MemoizedSW.x10"
                        final long t$8409 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.matrix).$apply$G((long)(t$8408), (long)(b$8462)));
                        
                        //#line 271 "MemoizedSW.x10"
                        final long t$8410 = ((this.gapOpening) + (((long)(t$8409))));
                        
                        //#line 272 "MemoizedSW.x10"
                        final long t$8411 = ((a$8470) - (((long)(1L))));
                        
                        //#line 272 "MemoizedSW.x10"
                        final long t$8412 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(t$8411), (long)(b$8462)));
                        
                        //#line 272 "MemoizedSW.x10"
                        final long t$8413 = ((this.gapOpening) + (((long)(t$8412))));
                        
                        //#line 273 "MemoizedSW.x10"
                        final long t$8414 = ((a$8470) - (((long)(1L))));
                        
                        //#line 273 "MemoizedSW.x10"
                        final long t$8415 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(t$8414), (long)(b$8462)));
                        
                        //#line 273 "MemoizedSW.x10"
                        final long t$8416 = ((this.gapExtension) + (((long)(t$8415))));
                        
                        //#line 271 "MemoizedSW.x10"
                        final long t$8417 = MemoizedSW.max$O((long)(t$8410), (long)(t$8413), (long)(t$8416));
                        
                        //#line 271 "MemoizedSW.x10"
                        ((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(t$8417));
                        
                        //#line 274 "MemoizedSW.x10"
                        final long t$8418 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(a$8470), (long)(b$8462)));
                        
                        //#line 274 "MemoizedSW.x10"
                        final long t$8419 = ((a$8470) - (((long)(1L))));
                        
                        //#line 274 "MemoizedSW.x10"
                        final long t$8420 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(t$8419), (long)(b$8462)));
                        
                        //#line 274 "MemoizedSW.x10"
                        final long t$8421 = ((t$8420) + (((long)(this.gapOpening))));
                        
                        //#line 274 "MemoizedSW.x10"
                        final long t$8422 = java.lang.Math.max(((long)(t$8418)),((long)(t$8421)));
                        
                        //#line 274 "MemoizedSW.x10"
                        ((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(t$8422));
                        
                        //#line 275 "MemoizedSW.x10"
                        final long t$8423 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(a$8470), (long)(b$8462)));
                        
                        //#line 275 "MemoizedSW.x10"
                        final boolean t$8424 = ((t$8423) < (((long)(0L))));
                        
                        //#line 275 "MemoizedSW.x10"
                        if (t$8424) {
                            
                            //#line 275 "MemoizedSW.x10"
                            ((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(0L));
                        }
                        
                        //#line 277 "MemoizedSW.x10"
                        final long t$8425 = ((b$8462) - (((long)(1L))));
                        
                        //#line 277 "MemoizedSW.x10"
                        final long t$8426 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.matrix).$apply$G((long)(a$8470), (long)(t$8425)));
                        
                        //#line 277 "MemoizedSW.x10"
                        final long t$8427 = ((this.gapOpening) + (((long)(t$8426))));
                        
                        //#line 278 "MemoizedSW.x10"
                        final long t$8428 = ((b$8462) - (((long)(1L))));
                        
                        //#line 278 "MemoizedSW.x10"
                        final long t$8429 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(a$8470), (long)(t$8428)));
                        
                        //#line 278 "MemoizedSW.x10"
                        final long t$8430 = ((this.gapExtension) + (((long)(t$8429))));
                        
                        //#line 279 "MemoizedSW.x10"
                        final long t$8431 = ((b$8462) - (((long)(1L))));
                        
                        //#line 279 "MemoizedSW.x10"
                        final long t$8432 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(a$8470), (long)(t$8431)));
                        
                        //#line 279 "MemoizedSW.x10"
                        final long t$8433 = ((this.gapOpening) + (((long)(t$8432))));
                        
                        //#line 277 "MemoizedSW.x10"
                        final long t$8434 = MemoizedSW.max$O((long)(t$8427), (long)(t$8430), (long)(t$8433));
                        
                        //#line 277 "MemoizedSW.x10"
                        ((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(t$8434));
                        
                        //#line 280 "MemoizedSW.x10"
                        final long t$8435 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(a$8470), (long)(b$8462)));
                        
                        //#line 280 "MemoizedSW.x10"
                        final long t$8436 = ((b$8462) - (((long)(1L))));
                        
                        //#line 280 "MemoizedSW.x10"
                        final long t$8437 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(a$8470), (long)(t$8436)));
                        
                        //#line 280 "MemoizedSW.x10"
                        final long t$8438 = ((t$8437) + (((long)(this.gapOpening))));
                        
                        //#line 280 "MemoizedSW.x10"
                        final long t$8439 = java.lang.Math.max(((long)(t$8435)),((long)(t$8438)));
                        
                        //#line 280 "MemoizedSW.x10"
                        ((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(t$8439));
                        
                        //#line 281 "MemoizedSW.x10"
                        final long t$8440 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(a$8470), (long)(b$8462)));
                        
                        //#line 281 "MemoizedSW.x10"
                        final boolean t$8441 = ((t$8440) < (((long)(0L))));
                        
                        //#line 281 "MemoizedSW.x10"
                        if (t$8441) {
                            
                            //#line 281 "MemoizedSW.x10"
                            ((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(0L));
                        }
                        
                        //#line 284 "MemoizedSW.x10"
                        final long t$8442 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.matrix).$apply$G((long)(a$8470), (long)(b$8462)));
                        
                        //#line 284 "MemoizedSW.x10"
                        final long t$8443 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(a$8470), (long)(b$8462)));
                        
                        //#line 284 "MemoizedSW.x10"
                        boolean t$8444 = ((t$8442) >= (((long)(t$8443))));
                        
                        //#line 284 "MemoizedSW.x10"
                        if (t$8444) {
                            
                            //#line 284 "MemoizedSW.x10"
                            final long t$8445 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.matrix).$apply$G((long)(a$8470), (long)(b$8462)));
                            
                            //#line 284 "MemoizedSW.x10"
                            final long t$8446 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(a$8470), (long)(b$8462)));
                            
                            //#line 284 "MemoizedSW.x10"
                            t$8444 = ((t$8445) >= (((long)(t$8446))));
                        }
                        
                        //#line 284 "MemoizedSW.x10"
                        final boolean t$8447 = t$8444;
                        
                        //#line 284 "MemoizedSW.x10"
                        if (t$8447) {
                            
                            //#line 285 "MemoizedSW.x10"
                            ((x10.array.Array_2<x10.core.Long>)this.directions).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(0L));
                            
                            //#line 286 "MemoizedSW.x10"
                            final long t$8448 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.matrix).$apply$G((long)(a$8470), (long)(b$8462)));
                            
                            //#line 286 "MemoizedSW.x10"
                            max$8380 = t$8448;
                        } else {
                            
                            //#line 287 "MemoizedSW.x10"
                            final long t$8449 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(a$8470), (long)(b$8462)));
                            
                            //#line 287 "MemoizedSW.x10"
                            final long t$8450 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.matrix).$apply$G((long)(a$8470), (long)(b$8462)));
                            
                            //#line 287 "MemoizedSW.x10"
                            boolean t$8451 = ((t$8449) >= (((long)(t$8450))));
                            
                            //#line 287 "MemoizedSW.x10"
                            if (t$8451) {
                                
                                //#line 287 "MemoizedSW.x10"
                                final long t$8452 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(a$8470), (long)(b$8462)));
                                
                                //#line 287 "MemoizedSW.x10"
                                final long t$8453 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(a$8470), (long)(b$8462)));
                                
                                //#line 287 "MemoizedSW.x10"
                                t$8451 = ((t$8452) >= (((long)(t$8453))));
                            }
                            
                            //#line 287 "MemoizedSW.x10"
                            final boolean t$8454 = t$8451;
                            
                            //#line 287 "MemoizedSW.x10"
                            if (t$8454) {
                                
                                //#line 288 "MemoizedSW.x10"
                                ((x10.array.Array_2<x10.core.Long>)this.directions).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(-1L));
                                
                                //#line 289 "MemoizedSW.x10"
                                final long t$8455 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestLeftwards).$apply$G((long)(a$8470), (long)(b$8462)));
                                
                                //#line 289 "MemoizedSW.x10"
                                max$8380 = t$8455;
                            } else {
                                
                                //#line 291 "MemoizedSW.x10"
                                ((x10.array.Array_2<x10.core.Long>)this.directions).$set__2x10$array$Array_2$$T$G((long)(a$8470), (long)(b$8462), x10.core.Long.$box(1L));
                                
                                //#line 292 "MemoizedSW.x10"
                                final long t$8456 = x10.core.Long.$unbox(((x10.array.Array_2<x10.core.Long>)this.bestUpwards).$apply$G((long)(a$8470), (long)(b$8462)));
                                
                                //#line 292 "MemoizedSW.x10"
                                max$8380 = t$8456;
                            }
                        }
                        
                        //#line 295 "MemoizedSW.x10"
                        final long t$8457 = max$8380;
                        
                        //#line 295 "MemoizedSW.x10"
                        final long t$8458 = ((long)this.$globalMax$8589[(int)0]);
                        
                        //#line 295 "MemoizedSW.x10"
                        final boolean t$8459 = ((t$8457) > (((long)(t$8458))));
                        
                        //#line 295 "MemoizedSW.x10"
                        if (t$8459) {
                            
                            //#line 296 "MemoizedSW.x10"
                            final long t$8460 = max$8380;
                            
                            //#line 296 "MemoizedSW.x10"
                            this.$globalMax$8589[(int)0]=t$8460;
                            
                            //#line 297 "MemoizedSW.x10"
                            final x10.util.Pair t$8461 = new x10.util.Pair<x10.core.Long, x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG, x10.rtt.Types.LONG).x10$util$Pair$$init$S((x10.core.Long.$box(a$8470)), (x10.core.Long.$box(b$8462)), (x10.util.Pair.__0x10$util$Pair$$T__1x10$util$Pair$$U) null);
                            
                            //#line 297 "MemoizedSW.x10"
                            this.$maxCoordinates$8590[(int)0]=t$8461;
                        }
                        
                        //#line 261 "MemoizedSW.x10"
                        final long t$8463 = i$8465;
                        
                        //#line 261 "MemoizedSW.x10"
                        final long t$8464 = ((t$8463) + (((long)(1L))));
                        
                        //#line 261 "MemoizedSW.x10"
                        i$8465 = t$8464;
                    }
                    
                    //#line 260 "MemoizedSW.x10"
                    final long t$8471 = i$8473;
                    
                    //#line 260 "MemoizedSW.x10"
                    final long t$8472 = ((t$8471) + (((long)(1L))));
                    
                    //#line 260 "MemoizedSW.x10"
                    i$8473 = t$8472;
                }
            }}catch (java.lang.Error __lowerer__var__0__) {
                
                //#line 235 "MemoizedSW.x10"
                throw __lowerer__var__0__;
            }catch (java.lang.Throwable __lowerer__var__1__) {
                
                //#line 235 "MemoizedSW.x10"
                throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
            }
        }
        
        public long[] $maxRow$8587;
        public long line$8540;
        public long k$8512;
        public long[] $startCol$8518$8588;
        public long cutoff;
        public java.lang.String string1;
        public java.lang.String string2;
        public x10.array.Array_2<x10.core.Long> bestLeftwards;
        public x10.array.Array_2<x10.core.Long> bestUpwards;
        public x10.array.Array_2<x10.core.Long> matrix;
        public x10.array.Array_2<x10.core.Long> blosum;
        public long gapOpening;
        public long gapExtension;
        public x10.array.Array_2<x10.core.Long> directions;
        public long[] $globalMax$8589;
        public x10.util.Pair[] $maxCoordinates$8590;
        
        public $Closure$0(final long[] $maxRow$8587, final long line$8540, final long k$8512, final long[] $startCol$8518$8588, final long cutoff, final java.lang.String string1, final java.lang.String string2, final x10.array.Array_2<x10.core.Long> bestLeftwards, final x10.array.Array_2<x10.core.Long> bestUpwards, final x10.array.Array_2<x10.core.Long> matrix, final x10.array.Array_2<x10.core.Long> blosum, final long gapOpening, final long gapExtension, final x10.array.Array_2<x10.core.Long> directions, final long[] $globalMax$8589, final x10.util.Pair[] $maxCoordinates$8590, __7$1x10$lang$Long$2__8$1x10$lang$Long$2__9$1x10$lang$Long$2__10$1x10$lang$Long$2__13$1x10$lang$Long$2 $dummy) {
             {
                this.$maxRow$8587 = $maxRow$8587;
                this.line$8540 = line$8540;
                this.k$8512 = k$8512;
                this.$startCol$8518$8588 = $startCol$8518$8588;
                this.cutoff = cutoff;
                this.string1 = ((java.lang.String)(string1));
                this.string2 = ((java.lang.String)(string2));
                this.bestLeftwards = ((x10.array.Array_2)(bestLeftwards));
                this.bestUpwards = ((x10.array.Array_2)(bestUpwards));
                this.matrix = ((x10.array.Array_2)(matrix));
                this.blosum = ((x10.array.Array_2)(blosum));
                this.gapOpening = gapOpening;
                this.gapExtension = gapExtension;
                this.directions = ((x10.array.Array_2)(directions));
                this.$globalMax$8589 = $globalMax$8589;
                this.$maxCoordinates$8590 = $maxCoordinates$8590;
            }
        }
        
    }
    
    }
    
    