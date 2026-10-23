// FUN_0078f500 @ 78f500 size=175

undefined4 FUN_0078f500(int param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
    while( true ) {
      iVar1 = FUN_00535490();
      if (iVar1 != 1) break;
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 < 0x151) {
        if (iVar1 == 0x150) {
          DAT_0087b630 = *(int *)(param_1 + 0x40c) == 0x111;
        }
        else if (iVar1 == 0xc) {
          DAT_0087b633 = *(int *)(param_1 + 0x40c) == 0x111;
        }
        else if (iVar1 == 0x134) {
          DAT_0087b631 = *(int *)(param_1 + 0x40c) == 0x111;
        }
      }
      else if (iVar1 == 0x2bd) {
        DAT_0087b632 = *(int *)(param_1 + 0x40c) == 0x111;
      }
      else if (iVar1 == 0x371) {
        DAT_0087b634 = *(int *)(param_1 + 0x40c) == 0x111;
      }
    }
    piVar2 = (int *)FUN_00534391();
  } while (*piVar2 != 4);
  FUN_005343dc();
  return 0;
}


