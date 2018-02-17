#!/bin/sh
echo -n $(groups $FT_USER) | tr ' ' ,
