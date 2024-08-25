savedcmd_/home/kristoforusapm/km/kristo.mod := printf '%s\n'   kristo.o | awk '!x[$$0]++ { print("/home/kristoforusapm/km/"$$0) }' > /home/kristoforusapm/km/kristo.mod
