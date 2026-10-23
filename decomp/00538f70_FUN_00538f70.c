// FUN_00538f70 @ 538f70 size=1097

undefined4 __thiscall FUN_00538f70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x13e7c) = 0;
  *(undefined1 *)(param_1 + 0x1427c) = 0;
  *(undefined1 *)(param_1 + 0x148b0) = 0;
  *(undefined1 *)(param_1 + 0x149b0) = 0;
  *(undefined4 *)(param_1 + 0x14898) = 0;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x1487c + local_8 * 4) = 0;
  }
  FUN_00538a92(*(undefined4 *)(param_1 + -8),0);
code_r0x00539000:
  do {
    while( true ) {
      while (iVar1 = FUN_00535490(), iVar1 != 1) {
        piVar3 = (int *)FUN_00534391();
        if (*piVar3 == 4) {
          FUN_005343dc();
          return 0;
        }
      }
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 < 0x1dc) break;
      if (iVar1 < 0x221) {
        if (iVar1 == 0x220) {
          uVar2 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x148a8) = uVar2;
        }
        else if (iVar1 == 0x21d) {
          uVar2 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x1489c) = uVar2;
        }
        else if (iVar1 == 0x21e) {
          uVar2 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x148a0) = uVar2;
        }
        else {
          if (iVar1 != 0x21f) {
LAB_00539369:
            FUN_005349b0(s_Selectable_Nation___Unexpected_f_00851060);
            return 0xfffffffe;
          }
          uVar2 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x148a4) = uVar2;
        }
      }
      else if (iVar1 == 0x245) {
        *(bool *)(param_1 + 0x13c76) = *(int *)(param_2 + 0x40c) == 0x111;
      }
      else if (iVar1 == 0x253) {
        if (*(int *)(param_2 + 0x40c) == 0x527) {
          FUN_007a74f0(param_1 + 0x1477c,param_2 + 0x410);
        }
      }
      else {
        if (iVar1 != 0x573) goto LAB_00539369;
        FUN_007a74f0(param_1 + 0x148b0,param_2 + 0x410);
      }
    }
    if (iVar1 != 0x1db) {
      if (iVar1 < 0x199) {
        if (iVar1 != 0x198) {
          if (iVar1 == 0x73) {
            FUN_007a74f0(param_1 + 0x13c7c,param_2 + 0x410);
          }
          else if (iVar1 == 0x74) {
            FUN_007a74f0(param_1 + 0x13d7c,param_2 + 0x410);
          }
          else {
            if (iVar1 != 0xe9) goto LAB_00539369;
            FUN_007a74f0(param_1 + 0x149b0,param_2 + 0x410);
          }
          goto code_r0x00539000;
        }
      }
      else {
        if (iVar1 == 0x199) {
          if (*(int *)(param_2 + 0x40c) == 0x527) {
            FUN_00429d50(param_2 + 0x410,param_1 + 0x1467c);
          }
          goto code_r0x00539000;
        }
        if (iVar1 == 0x1d9) {
          if (*(int *)(param_2 + 0x40c) == 0x524) {
            uVar2 = FUN_007a7b3c(param_2 + 0x410);
            *(undefined4 *)(param_1 + 0x1487c + *(int *)(param_1 + 0x14898) * 4) = uVar2;
            *(int *)(param_1 + 0x14898) = *(int *)(param_1 + 0x14898) + 1;
          }
          goto code_r0x00539000;
        }
        if (iVar1 != 0x1da) goto LAB_00539369;
      }
      if (*(int *)(param_2 + 0x40c) == 0x527) {
        FUN_007a74f0(param_1 + 0x13e7c,param_2 + 0x410);
      }
      goto code_r0x00539000;
    }
    if (*(int *)(param_2 + 0x40c) == 0x527) {
      FUN_007a74f0(param_1 + 0x1427c,param_2 + 0x410);
    }
  } while( true );
}


