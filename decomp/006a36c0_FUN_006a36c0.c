// FUN_006a36c0 @ 6a36c0 size=136

void __thiscall FUN_006a36c0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x22c))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_2 + 0xc);
    iVar3 = FUN_006a6370();
    if (iVar1 != iVar3) {
      uVar4 = (**(code **)(*param_1 + 0xe0))(param_2);
      FUN_006a9f80(uVar4,param_2);
      (**(code **)(*param_1 + 0x214))();
      (**(code **)(*param_1 + 0x240))();
      return;
    }
    if ((char)param_1[0x24] == '\0') {
      (**(code **)(*param_1 + 0x238))();
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x234))();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 200))();
      return;
    }
  }
  return;
}


