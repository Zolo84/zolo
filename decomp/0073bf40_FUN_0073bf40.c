// FUN_0073bf40 @ 73bf40 size=145

undefined4 __thiscall FUN_0073bf40(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  while( true ) {
    while (iVar1 = FUN_00535490(), iVar1 == 1) {
      if (param_2[1] == 0x1f1) {
        uVar2 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else if (param_2[1] == 0x523) {
        FUN_00427ed0(param_2);
      }
      else {
        FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,param_2 + 2,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    if (iVar1 == 2) break;
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 4) {
      FUN_005343dc();
      return 0;
    }
  }
  return 0;
}


