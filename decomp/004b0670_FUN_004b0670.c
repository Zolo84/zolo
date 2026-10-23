// FUN_004b0670 @ 4b0670 size=341

void __thiscall FUN_004b0670(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  piVar1 = (int *)FUN_00534391();
  iVar2 = *piVar1;
  do {
    if (iVar2 == 4) {
      FUN_005343dc();
      return;
    }
    iVar2 = FUN_00535490();
    if (iVar2 != 1) {
      return;
    }
    iVar2 = *(int *)(param_2 + 4);
    uVar4 = (undefined2)param_2;
    if (iVar2 < 0x4ed) {
      if (iVar2 == 0x4ec) {
        uVar3 = FUN_007a7b3c((short)(param_2 + 0x410));
        *param_1 = uVar3;
      }
      else if (iVar2 == 0x32) {
        FUN_00427ed0(uVar4);
        FUN_0049a190(0,0);
      }
      else {
        if (iVar2 == 0x12d) {
          FUN_00427ed0(uVar4);
          goto LAB_004b07a0;
        }
        if (iVar2 != 0x168) {
          return;
        }
        uVar3 = FUN_007a7b3c((short)(param_2 + 0x410));
        *(undefined4 *)((int)param_1 + 0x2a) = uVar3;
      }
    }
    else if (iVar2 == 0x4ef) {
      FUN_00427ed0(uVar4);
LAB_004b07a0:
      FUN_004739f0(0,0);
    }
    else {
      if (iVar2 != 0x4f2) {
        return;
      }
      iVar2 = FUN_007a7b3c((short)(param_2 + 0x410));
      *(bool *)(param_1 + 1) = iVar2 != 0;
    }
    piVar1 = (int *)FUN_00534391();
    iVar2 = *piVar1;
  } while( true );
}


