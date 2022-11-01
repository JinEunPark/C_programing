echo "buf size:128 10번 실행"
for i in 1 2 3 4 5 6 7 8 9 10
  do
    echo $(time ./3_128)
  done
echo "buf size:256 10번 실행"
for i in 1 2 3 4 5 6 7 8 9 10
  do
    echo $(time ./3)
  done
echo "buf size:1024 10번 실행"
for i in 1 2 3 4 5 6 7 8 9 10
  do
    echo $(time ./3_1024)
  done
