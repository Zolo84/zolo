// FUN_00733f10 @ 733f10 size=203

undefined4 __thiscall FUN_00733f10(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  if (param_2[0x103] == 0x524) {
    uVar1 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x12) = uVar1;
    return 0;
  }
  while( true ) {
    while (iVar2 = FUN_00535490(), iVar2 == 1) {
      if (param_2[1] == 0x299) {
        uVar1 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x16) = uVar1;
      }
      else if (param_2[1] == 0x523) {
        uVar1 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x12) = uVar1;
      }
      else {
        FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,param_2 + 2,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    if (iVar2 == 2) break;
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 4) {
      FUN_005343dc();
      return 0;
    }
  }
  return 0;
}


