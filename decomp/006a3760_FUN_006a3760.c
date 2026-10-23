// FUN_006a3760 @ 6a3760 size=138

void __thiscall FUN_006a3760(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x240);
  iVar2 = FUN_006a6370();
  if ((iVar3 == iVar2) && (cVar1 = (**(code **)(*param_1 + 0x22c))(), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar3 = FUN_0051b230();
      cVar1 = (**(code **)(*param_1 + 0x230))(iVar3);
      if (cVar1 != '\0') {
        param_1[0x23] = iVar3;
        if ((char)param_1[0x24] != '\0') {
          return;
        }
        (**(code **)(*param_1 + 0x238))();
        return;
      }
      cVar1 = (**(code **)(*param_1 + 0x234))();
      if (cVar1 != '\0') {
        return;
      }
    }
    (**(code **)(*param_1 + 200))();
  }
  return;
}


