#!/bin/bash

ecalc() {
    let n=1000
    let m=n
    #(( n < 22 )) && m=22

    echo -n 2.

    for (( j = m; j >= 2; j-- )); do
        coef[j]=1
    done

    for (( i = 1; i <= n; i++ )); do
        let carry=0
        for (( j = m; j >= 2; j-- )); do
            let temp=coef[j]*10+carry
            let carry=temp/j
            let coef[j]=temp-carry*j
        done
        echo -n $carry
    done
    echo
}

ecalc
