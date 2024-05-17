clear
# 设置cmake使用的环境参数(需要根据自己的实际目录进行修改)
export FmDev=$(pwd)
echo $FmDev

export fm_links_exe_flags="\
 -s FORCE_FILESYSTEM \
 --preload-file ${FmDev}/lua_demo@/ \
  "
rm -rf ./build/em
emcmake cmake -B ./build/em -S . 
cd build/em
make
# cd ..
# emcmake cmake -B ./build/mac -S . 
# cd build/mac
# make