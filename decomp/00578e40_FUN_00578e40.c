// FUN_00578e40 @ 578e40 size=258

void __fastcall FUN_00578e40(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 4);
  if (piVar6 != (int *)0x0) {
    uVar5 = *(uint *)(param_1 + 8);
    if (uVar5 == 1) {
      iVar3 = *piVar6;
      FUN_00796cd8(piVar6);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xc);
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
    uVar5 = *(int *)(param_1 + 8) - 1;
    *(uint *)(param_1 + 8) = uVar5;
    if (uVar5 < *(uint *)(param_1 + 0xc)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
    }
    while ((iVar3 != 0 && (piVar6 = *(int **)(param_1 + 4), piVar6 != (int *)0x0))) {
      if (uVar5 == 1) {
        iVar3 = *piVar6;
        FUN_00796cd8(piVar6);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0xc);
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
      uVar5 = *(int *)(param_1 + 8) - 1;
      *(uint *)(param_1 + 8) = uVar5;
      if (uVar5 < *(uint *)(param_1 + 0xc)) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
      }
    }
  }
  return;
}


