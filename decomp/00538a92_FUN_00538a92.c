// FUN_00538a92 @ 538a92 size=1246

void __thiscall FUN_00538a92(int param_1,undefined4 param_2,char param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  *(undefined4 *)(param_1 + 6) = param_2;
  bVar1 = false;
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 0x13e8a) = 0;
    *(undefined1 *)(param_1 + 0x1428a) = 0;
    *(undefined1 *)(param_1 + 0x148be) = 0;
    *(undefined1 *)(param_1 + 0x149be) = 0;
    iVar3 = (&DAT_0089cad8)[*(int *)(param_1 + 6)];
    if (iVar3 != 0) {
      FUN_007a74f0(param_1 + 0x149be,iVar3 + 0x41a);
      FUN_007a74f0(param_1 + 0x148be,iVar3 + 0x31a);
    }
  }
  if (*(char *)(param_1 + 0x13e8a) == '\0') {
    if (*(int *)(DAT_00d685a6 + 0x2d0a) == -1) {
      uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6),(int)*(short *)(DAT_00d685a6 + 0x57a));
      FUN_007a630a(param_1 + 0x13e8a,s__s__d_DESC_00850f90,uVar2);
      uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6),(int)*(short *)(DAT_00d685a6 + 0x57a));
      FUN_007a630a(param_1 + 0x1428a,s__s__d_DESC_00850f9c,uVar2);
    }
    else {
      uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6),*(undefined4 *)(DAT_00d685a6 + 0x2d0a));
      FUN_007a630a(param_1 + 0x13e8a,s__s__d_DESC_00850f78,uVar2);
      uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6),*(undefined4 *)(DAT_00d685a6 + 0x2d0a));
      FUN_007a630a(param_1 + 0x1428a,s__s__d_DESC_00850f84,uVar2);
    }
    pcVar4 = s_UNKNOWN_STRING_WANTED_00850fa8;
    uVar2 = FUN_0042b6c9(param_1 + 0x13e8a);
    iVar3 = FUN_007a8730(uVar2,pcVar4);
    if (iVar3 == 0) {
      if (*(short *)(DAT_00d685a6 + 0x57a) < 0x799) {
        if (*(short *)(DAT_00d685a6 + 0x57a) < 0x798) {
          if (*(short *)(DAT_00d685a6 + 0x57a) < 0x795) {
            if (*(short *)(DAT_00d685a6 + 0x57a) < 0x793) {
              if (*(short *)(DAT_00d685a6 + 0x57a) == 0x790) {
                uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
                FUN_007a630a(param_1 + 0x13e8a,s__s_36_DESC_00851020,uVar2);
                uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
                FUN_007a630a(param_1 + 0x1428a,s__s_36_DESC_0085102c,uVar2);
                bVar1 = true;
              }
            }
            else {
              uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
              FUN_007a630a(param_1 + 0x13e8a,s__s_39_DESC_00851008,uVar2);
              uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
              FUN_007a630a(param_1 + 0x1428a,s__s_39_DESC_00851014,uVar2);
              bVar1 = true;
            }
          }
          else {
            uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
            FUN_007a630a(param_1 + 0x13e8a,s__s_41_DESC_00850ff0,uVar2);
            uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
            FUN_007a630a(param_1 + 0x1428a,s__s_41_DESC_00850ffc,uVar2);
            bVar1 = true;
          }
        }
        else {
          uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
          FUN_007a630a(param_1 + 0x13e8a,s__s_44_DESC_00850fd8,uVar2);
          uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
          FUN_007a630a(param_1 + 0x1428a,s__s_44_DESC_00850fe4,uVar2);
          bVar1 = true;
        }
      }
      else {
        uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
        FUN_007a630a(param_1 + 0x13e8a,s__s_45_DESC_00850fc0,uVar2);
        uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
        FUN_007a630a(param_1 + 0x1428a,s__s_45_DESC_00850fcc,uVar2);
        bVar1 = true;
      }
      if (bVar1) {
        pcVar4 = s_UNKNOWN_STRING_WANTED_00851038;
        uVar2 = FUN_0042b6c9(param_1 + 0x13e8a);
        iVar3 = FUN_007a8730(uVar2,pcVar4);
        if (iVar3 == 0) {
          bVar1 = false;
        }
      }
      if (!bVar1) {
        uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
        FUN_007a630a(param_1 + 0x13e8a,s__s_DESC_00851050,uVar2);
        uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
        FUN_007a630a(param_1 + 0x1428a,s__s_DESC_00851058,uVar2);
      }
    }
  }
  FUN_00538a27();
  return;
}


