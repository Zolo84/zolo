// FUN_006a7b90 @ 6a7b90 size=431

void __fastcall FUN_006a7b90(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_8;
  
  uVar8 = 0x6a7bb1;
  cVar1 = FUN_0052b320(param_1[0x2f]);
  local_8._3_1_ = (byte)((uint)(param_1 + 0x29) >> 0x18);
  if ((cVar1 == '\0') || (iVar2 = (**(code **)(param_1[0x24] + 4))(), iVar2 == 0)) {
    iVar2 = param_1[0x2f];
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0xcc))();
    }
    else {
      iVar5 = *(int *)(iVar2 + 0x3dc);
      if (iVar5 != 0) {
LAB_006a7cfd:
        local_8 = (uint)local_8._3_1_ << 0x18;
        FUN_0052af00(iVar5,local_8,uVar8 & 0xffff0000,1);
        return;
      }
      iVar6 = 0;
      if (0 < *(int *)(iVar2 + 0x290)) {
        iVar7 = 0;
        do {
          uVar8 = 0x6a7cc6;
          iVar2 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar2 + 0x298) + iVar7));
          if (*(int *)(iVar2 + 0x254) == 8) {
            iVar5 = *(int *)(*(int *)(param_1[0x2f] + 0x298) + iVar7);
          }
          iVar2 = param_1[0x2f];
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0xc;
        } while (iVar6 < *(int *)(iVar2 + 0x290));
        if (iVar5 != 0) goto LAB_006a7cfd;
      }
    }
  }
  else {
    cVar1 = (**(code **)(*(int *)(*(int *)param_1[0x25] + 0x22e) + 8))();
    if (cVar1 != '\0') {
      iVar2 = *(int *)((int)param_1 + 10);
      uVar3 = (**(code **)(*(int *)param_1[0x2f] + 0xc))();
      uVar8 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar3);
      FUN_00458570(s_AITransport___d_of__s__Starts_un_0086939c,*(undefined4 *)((int)param_1 + 6),
                   uVar8);
      iVar2 = (**(code **)(*param_1 + 0x218))();
      piVar4 = *(int **)(iVar2 + 4);
      if (piVar4 != (int *)0x0) {
        while (*(int *)(*piVar4 + 0x12) != *(int *)(param_1[0x2f] + 0x12)) {
          piVar4 = (int *)piVar4[2];
          if (piVar4 == (int *)0x0) {
            return;
          }
        }
        if (piVar4 != (int *)0x0) {
          local_8 = (uint)local_8._3_1_ << 0x18;
          FUN_0052af00(*(undefined4 *)(*piVar4 + 0x12),local_8,uVar8 & 0xffff0000,1);
          return;
        }
      }
    }
  }
  return;
}


