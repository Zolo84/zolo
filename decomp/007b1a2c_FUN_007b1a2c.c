// FUN_007b1a2c @ 7b1a2c size=386

int FUN_007b1a2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  BOOL BVar7;
  DWORD DVar8;
  DWORD *pDVar9;
  undefined4 *puVar10;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_007aae71(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_00dc5264 == 0)) {
        BVar7 = SetConsoleCtrlHandler((PHANDLER_ROUTINE)&LAB_007b1bae,1);
        if (BVar7 != 1) {
          DVar8 = GetLastError();
          pDVar9 = (DWORD *)FUN_007aadd3();
          *pDVar9 = DVar8;
          FUN_007aaed2(1);
          goto LAB_007b1b62;
        }
        DAT_00dc5264 = 1;
      }
      iVar3 = DAT_00dc5260;
      iVar2 = DAT_00dc525c;
      iVar1 = DAT_00dc5258;
      iVar4 = DAT_00dc5254;
      if (param_1 == 2) {
        DAT_00dc5254 = param_2;
        param_2 = iVar4;
      }
      else if (param_1 == 0xf) {
        DAT_00dc5260 = param_2;
        param_2 = iVar3;
      }
      else if (param_1 == 0x15) {
        DAT_00dc5258 = param_2;
        param_2 = iVar1;
      }
      else if (param_1 == 0x16) {
        DAT_00dc525c = param_2;
        param_2 = iVar2;
      }
      FUN_007aaed2(1);
      return param_2;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      iVar4 = FUN_007ad1b1();
      if (*(undefined **)(iVar4 + 0x50) == &DAT_0087f850) {
        pvVar5 = _malloc(DAT_0087f8d0);
        *(void **)(iVar4 + 0x50) = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_007b1b62;
        FUN_007a71b0(pvVar5,&DAT_0087f850,DAT_0087f8d0);
      }
      uVar6 = FUN_007b1d92(param_1,*(undefined4 *)(iVar4 + 0x50));
      if (uVar6 != 0) {
        iVar1 = *(int *)(uVar6 + 8);
        do {
          if (*(int *)(uVar6 + 4) != param_1) {
            return iVar1;
          }
          *(int *)(uVar6 + 8) = param_2;
          uVar6 = uVar6 + 0xc;
        } while (uVar6 < (uint)(*(int *)(iVar4 + 0x50) + DAT_0087f8d4 * 0xc));
        return iVar1;
      }
    }
  }
LAB_007b1b62:
  puVar10 = (undefined4 *)FUN_007aadca();
  *puVar10 = 0x16;
  return -1;
}


