// FUN_00527c20 @ 527c20 size=67

int __thiscall FUN_00527c20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = 0;
  if (iVar2 == 0) {
    return 0;
  }
  do {
    iVar2 = *(int *)(iVar2 + 8);
    iVar1 = FUN_0051c480();
    if (((iVar3 == 0) || (*(int *)(iVar1 + 0x22) < *(int *)(iVar3 + 0x22))) && (param_2 != iVar1)) {
      iVar3 = iVar1;
    }
  } while (iVar2 != 0);
  return iVar3;
}


