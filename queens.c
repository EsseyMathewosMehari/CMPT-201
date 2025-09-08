/*  queens.c
 *
 *  https://www.ioccc.org/
 *
 *  7th International Obfuscated C Code Contest Rules
 *
 *  Copyright (c) 1990, Landon Curt Noll & Larry Bassel.
 *  All Rights Reserved.  Permission for personal, educational or non-profit use is
 *  granted provided this this copyright and notice are included in its entirety
 *  and remains unaltered.  All other uses must receive prior permission in writing
 *  from both Landon Curt Noll and Larry Bassel.
 *
 *  Obfuscate:  tr.v.  -cated, -cating, -cates.  1. a.  To render obscure.
 *      b.  To darken.  2. To confuse:  Their emotions obfuscated their
 *      judgment.  [LLat. obfuscare, to darken : ob(intensive) +
 *      Lat. fuscare, to darken < fuscus, dark.] -obfuscation n.
 *      obfuscatory adj.
 *
 *  GOALS OF THE CONTEST:
 *      - To write the most Obscure/Obfuscated C program under the rules below.
 *      - To show what should NOT be done in C programs.
 *      - To provide a safe forum for poor C code.  :-)
 *
 *  DEDICATION:
 *
 *      The 1990 International Obfuscated C Code Contest is dedicated to ANSI C.
 *
 *  Ignore all the warnings when compiling:
 *  gcc -std=c99 queens.c -o queens
 */

v,i,j,k,l,s,a[99];

main()
{
    for(scanf("%d",&s);*a-s;v=a[j*=v]-a[i],
        k=i<s,j+=(v=j<s&&(!k&&!!printf(2+"\n\n%c"-(!l<<!j),
        " #Q"[l^v?(l^j)&1:2])&&++l||a[i]<s&&v&&v-i+j&&v+i-j))
        &&!(l%=s),v||(i==j?a[i+=k]=0:++a[i])>=s*k&&++a[--i]);
}
