// FUN_0055e590 @ 55e590 size=347

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0055e590(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  short local_8 [4];
  
  iVar4 = 0;
  iVar5 = param_1;
  while( true ) {
    while( true ) {
      while( true ) {
        while (iVar1 = FUN_00535490(), iVar1 != 1) {
          piVar3 = (int *)FUN_00534391();
          if (*piVar3 == 4) {
            FUN_005343dc();
            return -(uint)(iVar4 != 0) & 0xfffffffd;
          }
        }
        iVar1 = *(int *)(param_2 + 4);
        if (0x12e < iVar1) break;
        if (iVar1 == 0x12e) {
          if (*(int *)(param_2 + 0x40c) == 0x524) {
            uVar2 = FUN_007a7b3c(param_2 + 0x410);
            *(undefined4 *)(iVar5 + 0x22) = uVar2;
          }
        }
        else if (iVar1 == 0x85) {
          uVar2 = FUN_007a7b3c(param_2 + 0x410);
          FUN_00509f50(uVar2);
        }
        else {
          if (iVar1 != 0x87) goto LAB_0055e6b7;
          fVar6 = (float10)FUN_00429d80(param_2 + 0x410);
          if (fVar6 < (float10)_DAT_007e3380) {
            fVar6 = (float10)_DAT_007e3380;
          }
          *(float *)(iVar5 + 0x36) = (float)fVar6;
        }
      }
      if (iVar1 != 0x261) break;
      uVar2 = FUN_007a7b3c(param_2 + 0x410);
      *(undefined4 *)(iVar5 + 0x1e) = uVar2;
    }
    if (iVar1 != 0x523) break;
    local_8[0] = 0;
    local_8[1] = 0;
    local_8[2] = 0;
    FUN_00427ed0(param_2);
    iVar4 = FUN_00428460(local_8);
    if (iVar4 == 0) {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))(local_8);
    }
    else if (local_8[0] == 6) {
      iVar5 = iVar4 + -0xc;
    }
  }
LAB_0055e6b7:
  FUN_005349b0(s_Leader___unexpected_field_00853080);
  return 0xfffffffe;
}


