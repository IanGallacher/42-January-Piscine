#!/bin/sh
#ldapsearch -Q -LLL "(uid=igallach)" ou dc | cut -c 5-
ldapwhoami -Q | cut -c 4-
