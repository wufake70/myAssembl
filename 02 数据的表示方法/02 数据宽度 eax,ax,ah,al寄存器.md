# 数据宽度

## eax,ax,ah,al寄存器
```
    32位系统中
    EAX与AX不是独立的，EAX是32位的寄存器，而AX是EAX的低16位。
    举例来说
    mov eax, 12345678h (mov写入数据)
    那么AX将会是eax的低16位，也就是5678h。
    而如果此时
    mov ax，3344h
    那么eax的值将变为12343344h，所以对ax的赋值是会影响eax的。

    同样，AH是ax的高8位，而AL是ax的低8位，这就是说ah为33h，al为44h。

```

## 代码练习
* ![](./img/02%20写入al,0xff.png)