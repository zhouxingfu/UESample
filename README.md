# UESample


## 为什么会有这个工程

* 学而不思则罔，思而不学则殆
* 实践出真知
* 《认知革命》


## 用来做什么

UE5学习过程中

* 对学习到的新知识点进行验证，比如这个知识点的使用流程
* 对自己的想法进行验证，比如架构上的设计，代码如何组织


## 包括哪些

每个工程有可能包括不止一个技能点，有的工程是为了验证自己的设计思路，所以不能一概而论，但在下面列出的每一个工程目录，都会跟一段简短的说明，当然在每个工程目录下都会有一个单独的Readme，更详细的信息在这里。  

### SubSystemSample

GamePlay架构中有一项SubSystemSample技术，就是依托于 UEngineSubsystem UEditorSubSystem ULocalPlayerSubsystem UGameInstanceSubsystem，派生自这四个类的子类，可以获得跟父类一样的lifetime，当我们需要添加某些功能的时候，可以用到，比如玩家得分（如果是全局性的得分的话），具体还可以用到哪里，我现在也没有什么思路，一边写sample，一边从网上找例子吧。


### ThreadsSample

在UE中有很多种类型的Threads，https://docs.unrealengine.com/4.27/en-US/API/Runtime/Core/Async/ENamedThreads__Type/  在本例中我们将对每一种类型的线程进行实践。

### GameFeatures



