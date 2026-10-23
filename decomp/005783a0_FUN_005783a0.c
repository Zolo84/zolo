// FUN_005783a0 @ 5783a0 size=264

void __fastcall FUN_005783a0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1[1];
  *param_1 = &PTR_FUN_007ead2c;
  if (piVar6 != (int *)0x0) {
    uVar5 = param_1[2];
    if (uVar5 == 1) {
      iVar3 = *piVar6;
      FUN_00796cd8(piVar6);
      param_1[1] = 0;
    }
    else {
      uVar1 = param_1[3];
      uVar2 = uVar1 >> 1;
      uVar4 = uVar1 + uVar2;
      if (uVar5 < uVar4) {
        piVar6 = piVar6 + 1;
        uVar4 = uVar1;
      }
      else {
        piVar6 = piVar6 + 2;
      }
      if (uVar2 == 1) {
        iVar3 = *(int *)*piVar6;
        FUN_00796cd8((int *)*piVar6);
        *piVar6 = 0;
      }
      else {
        iVar3 = FUN_00579600(uVar5,uVar4,uVar2);
      }
    }
    uVar5 = param_1[2] - 1;
    param_1[2] = uVar5;
    if (uVar5 < (uint)param_1[3]) {
      param_1[3] = (uint)param_1[3] >> 1;
    }
    while ((iVar3 != 0 && (piVar6 = (int *)param_1[1], piVar6 != (int *)0x0))) {
      if (uVar5 == 1) {
        iVar3 = *piVar6;
        FUN_00796cd8(piVar6);
        param_1[1] = 0;
      }
      else {
        uVar1 = param_1[3];
        uVar2 = uVar1 >> 1;
        uVar4 = uVar1 + uVar2;
        if (uVar5 < uVar4) {
          piVar6 = piVar6 + 1;
          uVar4 = uVar1;
        }
        else {
          piVar6 = piVar6 + 2;
        }
        if (uVar2 == 1) {
          iVar3 = *(int *)*piVar6;
          FUN_00796cd8((int *)*piVar6);
          *piVar6 = 0;
        }
        else {
          iVar3 = FUN_00579600(uVar5,uVar4,uVar2);
        }
      }
      uVar5 = param_1[2] - 1;
      param_1[2] = uVar5;
      if (uVar5 < (uint)param_1[3]) {
        param_1[3] = (uint)param_1[3] >> 1;
      }
    }
  }
  return;
}


