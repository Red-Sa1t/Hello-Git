# Linux常用命令



cd /home 进入 '/ home' 目录' 
cd .. 返回上一级目录 
cd ../.. 返回上两级目录 
cd 进入个人的主目录 
cd ~user1 进入个人的主目录 
cd - 返回上次所在的目录 
pwd 显示当前工作路径 
ls 查看目录中的文件 
ls -F 查看目录中的文件 
ls -l 显示文件和目录的详细资料 
ls -a 显示隐藏文件 
ls *[0-9]* 显示包含数字的文件名和目录名 
tree 显示文件和目录由根目录开始的树形结构
lstree 显示文件和目录由根目录开始的树形结构
mkdir dir1 创建一个叫做 'dir1' 的目录
mkdir dir1 dir2 同时创建两个目录 
mkdir -p /tmp/dir1/dir2 创建一个目录树 
rm -f file1 删除一个叫做 'file1' 的文件' 

rmdir dir1 删除一个叫做 'dir1' 的目录' 
rm -rf dir1 删除一个叫做 'dir1' 的目录并同时删除其内容 
rm -rf dir1 dir2 同时删除两个目录及它们的内容 
mv dir1 new_dir 重命名/移动 一个目录 
cp file1 file2 复制一个文件 
cp dir/* . 复制一个目录下的所有文件到当前工作目录 
cp -a /tmp/dir1 . 复制一个目录到当前工作目录 
cp -a dir1 dir2 复制一个目录 
ln -s file1 lnk1 创建一个指向文件或目录的软链接 
ln file1 lnk1 创建一个指向文件或目录的物理链接 
touch -t YYMMDDhhmm file1 修改一个文件或目录的时间戳
iconv -l 列出已知的编码 



find / -name file1 从 '/' 开始进入根文件系统搜索文件和目录 

find / -user user1 搜索属于用户 'user1' 的文件和目录 

find /home/user1 -name \*.bin 在目录 '/ home/user1' 中搜索带有'.bin' 结尾的文件 

find /usr/bin -type f -atime +100 搜索在过去100天内未被使用过的执行文件 

find /usr/bin -type f -mtime -10 搜索在10天内被创建或者修改过的文件 

find / -name \*.rpm -exec chmod 755 '{}' \; 搜索以 '.rpm' 结尾的文件并定义其权限 

find / -xdev -name \*.rpm 搜索以 '.rpm' 结尾的文件，忽略光驱、捷盘等可移动设备 

locate \*.ps 寻找以'.ps'结尾的文件

whereis halt 显示一个二进制文件、源码或man的位置 

which halt 显示一个二进制文件或可执行文件的完整路径 



cat file1 从第一个字节开始正向查看文件的内容 

cat file1 file2 同时显示文件1和2的内容

cat file1 file2 > mfile 将文件file1和文件file2合并后存入文件mfile

tac file1 从最后一行开始反向查看一个文件的内容 

more file1 查看一个长文件的内容 

less file1 类似于 'more' 命令，但是它允许在文件中正向操作一样的反向操作 

head -2 file1 查看一个文件的前两行 

head -v file1 显示文件file1的内容，并给出文件标题名

tail -2 file1 查看一个文件的最后两行 

tail -c 10 file1 查看文件的最后10个字符

tail -f /var/log/messages 实时查看被添加到一个文件中的内容



shutdown -h now 关闭系统

init 0 关闭系统

telinit 0 关闭系统

shutdown -h hours:minutes & 按预定时间关闭系统 

shutdown -c 取消按预定时间关闭系统 

shutdown -r now 重启

reboot 重启

logout 注销 



下载了vim 下载安装了ubuntu,  对照教程尝试使用vim编写了shell脚本

原神启动开机音效的学习 安装了播放mp3的驱动, 用wsl.dat在windows系统里启动linux的play.sh, 在注册表中加入wsl.dat的开机启动, 最后后台运行cmd实现这个效果