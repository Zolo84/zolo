// FUN_0057d5c0 @ 57d5c0 size=62

bool __thiscall FUN_0057d5c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x68))
                      (*(int **)(param_1 + 0xbc4),*(undefined4 *)(param_1 + 0x380),0,1,param_3,
                       param_2 + 3U & 0xfffffffc);
  } while (iVar1 == -0x7788fef2);
  return iVar1 == 0;
}


