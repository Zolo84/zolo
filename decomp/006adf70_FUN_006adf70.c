// FUN_006adf70 @ 6adf70 size=64

undefined4 __thiscall FUN_006adf70(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0xac) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1c))(*(undefined4 *)(param_2[1] + 0xe));
  }
  return 3;
}


