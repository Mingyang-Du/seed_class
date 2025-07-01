# 种子班日测解题

项目包含四个部分：环境配置与编译运行、终端原始模式、文本显示、文本编辑、增量搜索

## 环境配置与编译运行
理解：主要是为接下来的代码工程准备环境，给linux系统配置C++/C的编译环境

效果展示：
![level0](https://github.com/Mingyang-Du/seed_class/blob/main/images/level0.png)

## 终端原始模式
解题思路：
获取终端属性--->更改属性--->程序结束时复原原始属性
代码页：
- `termical.c`：获取终端属性更改终端模式的源代码文件，包含变更属性、恢复属性、报错说明等。
- `termical.h`：terminal头文件。

效果展示：
[video:level0](https://github.com/Mingyang-Du/seed_class/blob/main/images/level2.mp4)
<video width="320" height="240" controls> 
  <source src="https://www.runoob.com/try/demo_source/movie.mp4" type="video/mp4"> 
</video>
## 文本显示
解题思路：
1、基础任务分解：
    文件读取--->终端输出
    单字符查看--->单行查看--->多行查看
    光标移动--->End等光标跳跃行为实现--->翻页滚动功能实现--->横向滚动功能实现
    文本渲染--->状态栏实现
2、报错注意
    内存访问与越限分配（core dump）
    光标消失

代码页：
- `fileio.c`：包含文件读入等
- `fileio.h`：fileio.c的头文件
- `input.c`：包含字符读入、单行读入、多行读入的逻辑代码等
- `input.h`：input.c的头文件
- `output.c`：包含单行显示、多行显示的逻辑代码等
- `output.h`：output.c的头文件
- `row.c`：包含状态栏行输出、光标行变化等在内的逻辑代码
- `row.h`：row.c的头文件


效果展示：
[video:level23](https://github.com/Mingyang-Du/seed_class/blob/main/images/level2_3.mp4)
## 文本编辑
解题思路：
1、基础任务分解
    字符插入--->更新插入后显示内容
    特殊字符编码
    字符读入--->文件输出（保存）
    修改内容与原始内容对比--->脏标志显示
    删除字符--->更新删除后显示内容
    扩增行指针--->新行插入

代码页：
- `editor.c`：包含字符插入，行插入的逻辑代码等
- `editor.h`：editor.c的头文件
- `input.c`：包含字符读入、单行读入、多行读入的逻辑代码等
- `input.h`：input.c的头文件
- `output.c`：包含单行显示刷新、多行显示刷新的逻辑代码等
- `output.h`：output.c的头文件
- `row.c`：包含状态栏行输出、光标行变化等在内的逻辑代码
- `row.h`：row.c的头文件

效果展示：
[video:level4](https://github.com/Mingyang-Du/seed_class/blob/main/images/level4.mp4)

## 增量搜索
解题思路：

代码页：
- `find.c`：包含增量搜索、drawbar等在内的逻辑代码
- `find.h`：find.c的头文件

效果展示：
[video:level5](https://github.com/Mingyang-Du/seed_class/blob/main/images/level5.mp4)
