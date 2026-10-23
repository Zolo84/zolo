// FUN_00577a40 @ 577a40 size=367

void __fastcall FUN_00577a40(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *unaff_EBX;
  uint uVar7;
  undefined4 *puVar8;
  int local_4;
  
  local_4 = param_1;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(&local_4);
  while (unaff_EBX != (int *)0x0) {
    piVar1 = (int *)unaff_EBX[2];
    puVar8 = (undefined4 *)*unaff_EBX;
    unaff_EBX = piVar1;
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x14))();
  puVar8 = *(undefined4 **)(param_1 + 4);
  if (puVar8 != (undefined4 *)0x0) {
    uVar7 = *(uint *)(param_1 + 8);
    if (uVar7 == 1) {
      puVar5 = (undefined4 *)*puVar8;
      FUN_00796cd8(puVar8);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xc);
      uVar4 = uVar2 >> 1;
      uVar6 = uVar2 + uVar4;
      if (uVar7 < uVar6) {
        puVar8 = puVar8 + 1;
        uVar6 = uVar2;
      }
      else {
        puVar8 = puVar8 + 2;
      }
      if (uVar4 == 1) {
        puVar5 = *(undefined4 **)*puVar8;
        FUN_00796cd8((undefined4 *)*puVar8);
        *puVar8 = 0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00579600(uVar7,uVar6,uVar4);
      }
    }
    uVar7 = *(int *)(param_1 + 8) - 1;
    *(uint *)(param_1 + 8) = uVar7;
    if (uVar7 < *(uint *)(param_1 + 0xc)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
    }
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      puVar8 = *(undefined4 **)(param_1 + 4);
      if (puVar8 == (undefined4 *)0x0) break;
      uVar7 = *(uint *)(param_1 + 8);
      if (uVar7 == 1) {
        puVar5 = (undefined4 *)*puVar8;
        FUN_00796cd8(puVar8);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0xc);
        uVar4 = uVar2 >> 1;
        uVar6 = uVar2 + uVar4;
        if (uVar7 < uVar6) {
          puVar8 = puVar8 + 1;
          uVar6 = uVar2;
        }
        else {
          puVar8 = puVar8 + 2;
        }
        if (uVar4 == 1) {
          puVar5 = *(undefined4 **)*puVar8;
          FUN_00796cd8((undefined4 *)*puVar8);
          *puVar8 = 0;
        }
        else {
          puVar5 = (undefined4 *)FUN_00579600(uVar7,uVar6,uVar4);
        }
      }
      uVar7 = *(int *)(param_1 + 8) - 1;
      *(uint *)(param_1 + 8) = uVar7;
      if (uVar7 < *(uint *)(param_1 + 0xc)) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
      }
    }
  }
  piVar1 = *(int **)(param_1 + 0x26);
  while (piVar1 != (int *)0x0) {
    piVar3 = (int *)piVar1[2];
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    FUN_00796cd8(piVar1);
    piVar1 = piVar3;
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return;
}


