// FUN_00424e00 @ 424e00 size=123

undefined4 __thiscall FUN_00424e00(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  do {
    while( true ) {
      iVar1 = FUN_00535490();
      if (iVar1 != 1) break;
      if (param_2[1] == 0x1ab) {
        uVar2 = FUN_007a7b3c(param_2 + 0x104);
        *param_1 = uVar2;
      }
      else if (param_2[1] == 0x1ac) {
        uVar2 = FUN_007a7b3c(param_2 + 0x104);
        param_1[1] = uVar2;
      }
      else {
        FUN_00405ad0(s_error_in_cpoint_at_line__d_0083a31c,*(int *)(*param_2 + 0x212) + 1);
      }
    }
    piVar3 = (int *)FUN_00534391();
  } while (*piVar3 != 4);
  FUN_005343dc();
  return 0;
}


