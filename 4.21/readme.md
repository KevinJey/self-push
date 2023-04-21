# Daily Task

## Main

今天上午结束了米哈游的面，当然是99%的面试内容全部回答上来，很荣幸的进入到二面。
面试官真的跟我上海的这个理发师好像啊哈哈哈... 今天coding的时候测试代码还把面试官给逗乐了 绝..。

## Work Record

今天下午来了之后就一直在搞KMD debug的事情，原先的那个kmd发现之所以有问题 ，很有可能是跟我的编译源代码有关，很有可能是因为我无脑git reset --hard CommitID导致的。 所以现在回归原始，从编译最原始的代码开始，然后一点一点的增添新东西
```
git reset --hard NewestCommitID
git status
git pull
git submodule update
```

另外一条任务是，auto sanity check，这个可能要等到下下周Jason有空之后才再展开，目前的情况就暂且搁置。 沟通部分其实也主要是Leo和Jason去沟通，但是估计后面脚本代码的编写是由我去完成。

脚本应该不是很难，之前Daniel给过我跑3D在commandline下的，所以难度不会很大
