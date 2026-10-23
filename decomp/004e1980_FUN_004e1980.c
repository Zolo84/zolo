// FUN_004e1980 @ 4e1980 size=331

undefined4 FUN_004e1980(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar1 = FUN_00535490(), iVar1 != 1) {
            if (iVar1 == 2) {
              return 0xfffffffe;
            }
            piVar4 = (int *)FUN_00534391();
            if (*piVar4 == 4) {
              FUN_005343dc();
              return 0;
            }
          }
          iVar1 = *(int *)(param_1 + 4);
          if (iVar1 < 0x245) break;
          if (iVar1 != 0x245) goto LAB_004e1aa3;
          FUN_00424e00(param_1);
        }
        if (iVar1 != 0x244) break;
        FUN_00424e00(param_1);
      }
      if (iVar1 != 0x111) break;
      if (*(int *)(param_1 + 0x40c) == 0x243) {
        iVar1 = 0;
        if (0 < DAT_00877690) {
          do {
            iVar2 = FUN_004e9370(iVar1);
            *(undefined1 *)(iVar2 + 0x180) = 0;
            iVar1 = iVar1 + 1;
          } while (iVar1 < DAT_00877690);
        }
      }
      else {
        uVar3 = FUN_007a7b3c(param_1 + 0x410);
        iVar1 = FUN_004e9370(uVar3);
        *(undefined1 *)(iVar1 + 0x180) = 0;
      }
    }
    if (iVar1 != 0x112) break;
    if (*(int *)(param_1 + 0x40c) == 0x243) {
      iVar1 = 0;
      if (0 < DAT_00877690) {
        do {
          iVar2 = FUN_004e9370(iVar1);
          *(undefined1 *)(iVar2 + 0x180) = 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_00877690);
      }
    }
    else {
      uVar3 = FUN_007a7b3c(param_1 + 0x410);
      iVar1 = FUN_004e9370(uVar3);
      *(undefined1 *)(iVar1 + 0x180) = 1;
    }
  }
LAB_004e1aa3:
  FUN_005349b0(s_unknown_Map_Definition_00847da0);
  return 0xfffffffe;
}


