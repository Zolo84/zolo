// FUN_00490c80 @ 490c80 size=93

undefined4 __thiscall FUN_00490c80(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x5f98 + *(int *)(*(int *)(param_2 + 4) + 0xe) * 0x12);
  uVar3 = __ftol();
  cVar2 = (**(code **)(iVar1 + 0x24))(uVar3);
  if (cVar2 == '\0') {
    uVar3 = __ftol();
    FUN_0045af10(uVar3);
  }
  return 3;
}


