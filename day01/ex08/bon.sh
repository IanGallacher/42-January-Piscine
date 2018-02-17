#!/bin/sh
ldapsearch -QLLL "(cn=*bon*)" cn | grep cn: | cut -c 5- | cut -d ' ' -f2 | grep -ic bon
