#!/bin/sh
ldapsearch -Q -S cn -LLL "(uid=z*)" cn | grep cn: | sort -r
