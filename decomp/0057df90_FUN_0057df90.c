// FUN_0057df90 @ 57df90 size=351

void __thiscall FUN_0057df90(int param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  *(int *)(param_1 + 0x3b0 + *param_2 * 0x3e) = param_2[1];
  *(int *)(param_1 + 0x3b4 + *param_2 * 0x3e) = param_2[2];
  iVar2 = *(int *)(param_1 + 0x3c0 + *param_2 * 0x3e);
  if (iVar2 != 0) {
    FUN_00796cd8(iVar2);
  }
  uVar3 = 0xffffffff;
  piVar5 = param_2 + 3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    iVar2 = *piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
  } while ((char)iVar2 != '\0');
  pvVar1 = operator_new(~uVar3);
  uVar3 = 0xffffffff;
  *(void **)(param_1 + 0x3c0 + *param_2 * 0x3e) = pvVar1;
  piVar5 = param_2 + 3;
  do {
    piVar7 = piVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    piVar7 = (int *)((int)piVar5 + 1);
    iVar2 = *piVar5;
    piVar5 = piVar7;
  } while ((char)iVar2 != '\0');
  uVar3 = ~uVar3;
  puVar6 = (undefined4 *)((int)piVar7 - uVar3);
  puVar8 = *(undefined4 **)(param_1 + 0x3c0 + *param_2 * 0x3e);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(int *)(param_1 + 0x3c8 + *param_2 * 0x3e) = param_2[0x13];
  *(int *)(param_1 + 0x3cc + *param_2 * 0x3e) = param_2[0x14];
  *(undefined1 *)(param_1 + 0x3d1 + *param_2 * 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3d0 + *param_2 * 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3d6 + *param_2 * 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3d7 + *param_2 * 0x3e) = 1;
  if (*(int *)(param_1 + 0xb70) < param_2[0x15]) {
    *(int *)(param_1 + 0xb70) = param_2[0x15];
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb70)) {
    piVar5 = (int *)(param_1 + 0x3b0);
    while (*piVar5 != *(int *)(param_1 + 0x380)) {
      iVar2 = iVar2 + 1;
      piVar5 = (int *)((int)piVar5 + 0x3e);
      if (*(int *)(param_1 + 0xb70) <= iVar2) {
        return;
      }
    }
    *(int *)(param_1 + 900) = iVar2;
  }
  return;
}


