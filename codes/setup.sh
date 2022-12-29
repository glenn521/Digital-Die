make all
sudo insmod 7seg.ko
sudo mknod /dev/sevenseg c 240 0
sudo chmod 777 /dev/sevenseg
gcc app.c -o app -lwiringPi
./app


