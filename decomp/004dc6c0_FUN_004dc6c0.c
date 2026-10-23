// FUN_004dc6c0 @ 4dc6c0 size=420

void FUN_004dc6c0(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_c;
  
  local_c = param_3;
  do {
    local_c = local_c + -1;
    iVar4 = 1 << ((byte)param_3 & 0x1f);
    uVar5 = (uint)*(byte *)(DAT_00aa0cd0 + DAT_00aa0cc4) & DAT_00aa0cd4 & 0xff;
    bVar7 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar7;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar7;
    if (uVar5 == 0) {
LAB_004dc816:
      uVar2 = (&DAT_00aa4324)[DAT_00aa7338];
      DAT_00aa7338 = DAT_00aa7338 + 1;
      if (0 < iVar4) {
        param_2 = param_2 << 6;
        param_3 = iVar4;
        do {
          iVar6 = 0;
          do {
            iVar3 = iVar6 + param_2;
            iVar6 = iVar6 + 1;
            PTR_DAT_00847868[param_1 + iVar3] = uVar2;
          } while (iVar6 < iVar4);
          param_2 = param_2 + 0x40;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      return;
    }
    if (param_3 < 2) {
      if (uVar5 != 0) {
        puVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar4 = param_2 * 0x40;
        PTR_DAT_00847868[param_1 + iVar4 + 0x41] = *puVar1;
        puVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        PTR_DAT_00847868[param_1 + (param_2 + 1) * 0x40] = *puVar1;
        puVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        PTR_DAT_00847868[param_1 + iVar4 + 1] = *puVar1;
        puVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        PTR_DAT_00847868[param_1 + iVar4] = *puVar1;
        return;
      }
      goto LAB_004dc816;
    }
    iVar6 = (iVar4 >> 1) + param_2;
    iVar4 = (iVar4 >> 1) + param_1;
    FUN_004dc6c0(iVar4,iVar6,local_c);
    FUN_004dc6c0(param_1,iVar6,local_c);
    FUN_004dc6c0(iVar4,param_2,local_c);
    param_3 = param_3 + -1;
  } while( true );
}


