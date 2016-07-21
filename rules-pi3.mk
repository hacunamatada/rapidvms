export VE_PATH=/home/user/arm/ve/

export VE_OS=linux
export VE_ARCH=64
export VE_VER=pi3
export VE_CROSS_COMPILER_PATH=/home/user/arm/gcc-ri-x64
export VE_CROSS_COMPILER=arm-linux-gnueabihf-
export VE_CROSS_TOOL=arm-linux-gnueabihf
export VE_INSTALL_DIR=$VE_OS-$VE_VER-$VE_ARCH"bit"
export LD_LIBRARY_PATH=$VE_PATH/output/$VE_INSTALL_DIR/lib/:$LD_LIBRARY_PATH
export PATH=$VE_PATH/output/$VE_INSTALL_DIR"/bin:"$VE_CROSS_COMPILER_PATH"/bin:"$PATH 


