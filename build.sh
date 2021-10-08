cd test
cmake .
make
./tests
if [ $? -eq 0 ]; then
    cd ..
    cmake .
    clear
    echo 
    echo 
    make
    if [ $? -eq 0 ]; then
        clear
        echo 
        echo 
        ./main
    fi
fi
echo 
echo 
echo 