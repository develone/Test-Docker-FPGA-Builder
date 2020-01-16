#/bin/bash

git clone https://github.com/develone/Test-Docker-FPGA-Builder.git
cd Test-Docker-FPGA-Builder/catzip
rm -f catzip.asc catzip.blif catzip.bin

nextpnr-ice40 --seed 8 --freq 40 --hx8k --pcf catzip.pcf --json catzip.json --asc catzip.asc

icepack catzip.asc catzip.bin

icetime -d hx8k -c 40 catzip.asc

yosys -ql 'synth_ice40 -blif catzip.blif -json catzip.json -top toplevel' toplevel.v
icepack catzip.asc catzip.bin
