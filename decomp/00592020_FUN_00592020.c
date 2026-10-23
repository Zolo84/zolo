// FUN_00592020 @ 592020 size=113

void FUN_00592020(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00428ee0((short)&param_1);
  if ((iVar1 != 0) && (iVar1 != 8)) {
    if ((*(int *)(iVar1 + 300) != 0x19) && (*(int *)(iVar1 + 300) != 0x16)) {
      FUN_0049a190((undefined2)param_1,param_1._4_2_);
      return;
    }
    FUN_0049a190((undefined2)param_1,param_1._4_2_);
  }
  return;
}


