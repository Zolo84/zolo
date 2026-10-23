// FUN_00578d60 @ 578d60 size=220

void __thiscall FUN_00578d60(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    uVar6 = *(int *)(param_1 + 8) + 1;
    *(uint *)(param_1 + 8) = uVar6;
    uVar7 = *(int *)(param_1 + 0xc) << 1;
    if (uVar7 <= uVar6) {
      *(uint *)(param_1 + 0xc) = uVar7;
    }
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar8 = uVar2 >> 1;
    uVar7 = uVar2 + uVar8;
    if (uVar6 < uVar7) {
      piVar9 = piVar1 + 1;
      uVar7 = uVar2;
    }
    else {
      piVar9 = piVar1 + 2;
    }
    if (uVar8 == 1) {
      puVar5 = operator_new(0xc);
      if (puVar5 == (undefined4 *)0x0) {
        *piVar9 = 0;
      }
      else {
        puVar5[1] = 0;
        *puVar5 = param_2;
        puVar5[2] = 0;
        *piVar9 = (int)puVar5;
      }
    }
    else {
      FUN_00579570(param_2,uVar6,uVar7,uVar8);
    }
    cVar4 = FUN_0042ddd0(*(int *)(*piVar1 + 4) + 2);
    if (cVar4 == '\0') {
      iVar3 = *(int *)*piVar9;
      *(int *)*piVar9 = *piVar1;
      *piVar1 = iVar3;
    }
    return;
  }
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  puVar5 = operator_new(0xc);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = param_2;
    puVar5[2] = 0;
    *(undefined4 **)(param_1 + 4) = puVar5;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


