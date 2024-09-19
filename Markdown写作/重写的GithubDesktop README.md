# 重写的GithubDesktopZhTool

本仓库为GitHubDesktop汉化工具。



删除了微信公众号相关部分



GitHubDesktop官网：https://desktop.github.com

注：遇到汉化失败，重试一下子。

意：请一定保持Github Desktop版本与本汉化工具版本对应，否则汉化后Github Desktop可能会打不开。

---
- [x] 2022年小目标：实现Windows、Mac、Linux汉化。

- [x] 2023年小目标：实现更多汉化。
  
- [ ] 2024年小目标：实现更多汉化。当前进度：60%

| 🟩     | 🟩      | 🟩     | 🟩      | 🟩     | 🟩      | ⬜️     | ⬜️      | ⬜️     | ⬜️      |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |


---
### Windows汉化
打开GithubDesktopZhTool.exe，点击汉化即可。

视频教程：[https://www.bilibili.com/video/BV1Gr4y177aE](https://www.bilibili.com/video/BV1Gr4y177aE)

![](https://upload-images.jianshu.io/upload_images/8833471-5b79738a38b98bee.png?imageMogr2/auto-orient/strip|imageView2/2/w/959/format/webp)

![](https://upload-images.jianshu.io/upload_images/8833471-f215d172dbe85d58.png?imageMogr2/auto-orient/strip|imageView2/2/w/986/format/webp)

---
### Mac汉化
将本仓库中Mac文件夹下的main.js和renderer.js拷贝替换本地GithubDesktop的资源目录

本地GithubDesktop资源目录一般为：/Applications/GitHub Desktop.app/Contents/Resources/app

视频教程：[https://www.bilibili.com/video/BV1514y1w7Mb](https://www.bilibili.com/video/BV1514y1w7Mb)

![](https://upload-images.jianshu.io/upload_images/8833471-059ebc4cecfa31c6.png?imageMogr2/auto-orient/strip|imageView2/2/w/1200/format/webp)



---
### Linux汉化
Linux版GithubDesktop仓库：https://github.com/shiftkey/desktop

将本仓库中Linux文件夹下的main.js和renderer.js复制替换本地GithubDesktop的资源目录

本地GithubDesktop资源目录一般为：/usr/lib/github-desktop/resources/app

视频教程：[https://www.bilibili.com/video/BV17v4y1z79h](https://www.bilibili.com/video/BV17v4y1z79h)

![](https://upload-images.jianshu.io/upload_images/8833471-e1e555687f41789f.png?imageMogr2/auto-orient/strip|imageView2/2/w/1025/format/webp)

---
地址：山东青岛



# 数学语法

来源:[使用Markdown语法编写数学公式（详细版）_markdown写公式-CSDN博客](https://blog.csdn.net/wzk4869/article/details/126863936)

1. 希腊字母LaTex语法: ![希腊字母](https://i-blog.csdnimg.cn/blog_migrate/c9d0c6bef37185f69397a3811c3e56f1.png)

2. 数学结构:![数学结构](https://i-blog.csdnimg.cn/blog_migrate/be41ccfc7f6da7a6bf3ea2402b72087d.png)

3. 定界符(开始看不懂了):![](https://i-blog.csdnimg.cn/blog_migrate/3584ca9757b18ccda9fc2df09049b410.png)
4. 可变大小符号:![](https://i-blog.csdnimg.cn/blog_migrate/63f120e5a92375eabbeb19290819eb53.png)
5. 函数名称:![](https://i-blog.csdnimg.cn/blog_migrate/9e16f03fea6a3469ae4af49718decd81.png)
6. 二进制运算符和关系运算符(啊啊看不懂了啊):<img src="https://i-blog.csdnimg.cn/blog_migrate/ed74f0d61156d8ad809fd6588385895e.png" style="zoom:200%;" />
7. 箭头符号:![](https://i-blog.csdnimg.cn/blog_migrate/7bcd894d0256856484511485f89592e3.png)
8. 其他符号:![](https://i-blog.csdnimg.cn/blog_migrate/4ab5708b902c7e815de4f4e97587aadb.png)
9. 上下标:使用`^`输出上标,  使用`_`输出上标,  使用`{}`输出包含作用范围

​		例:

$$
\sin^2(\theta) + \cos^2(\theta) = 1
$$


$$
\sum_{n=1}^\infty k
$$

$$
\int_a^bf(x)\,dx
$$

$$
\lim\limits_{x\to\infty}\exp(-x) = 0
$$

10. 输出矩阵:各元素通过`$`分隔,`\\`来换行
11. 输出分段函数:使用`\begin{cases}`和`\end{cases}`构造分段函数,中间则用`\\`来分段

12.字体:`\mathbf``\mathcal``\mathfrak``\mathsf``\mathbb`
