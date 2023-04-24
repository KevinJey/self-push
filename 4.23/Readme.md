# Daily Record

## Main Event

* 美团二面通过，约了美团（下周一）上午十点的面试，时间是半个小时，应该是技术面
* 看到不少美团三面结束，在HR面排序被挂的，害有的面就好了，平常心
* 的确要肯定一下自己的面试感，还是不错的，具体表现在...能说会道...


## Work Flow

* 今天Build出DEBUG版本的KMD
* uninstall的问题已经浮现了，Leo说那个问题他已经看完了，交给另外一个team去解决了，是shader的问题

## Update

* 昨天忘记push了，昨天走的时候编译UMD有问题，KMD的问题已经解决了KMD的函数调用有：

```
KMDFunction Call Stack:
ProxySetPointerShape
ProxySetPointerPosition
ProxyQueryAdapterInfo
ProxyCreateProcess
ProxyCreateDevice
ProxyEscape
ProxyCreateContext
ProxyCreateAllocation
ProxyOpenAllocation
ProxyDescribeAllocation
ProxyPresent
ProxyDestroyContext
ProxyCloseAllocation
ProxyDestroyAllocation
```