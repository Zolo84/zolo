// FUN_005918c0 @ 5918c0 size=201

void __fastcall FUN_005918c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  
  *(undefined1 *)(param_1 + 0x568) = 0;
  piVar2 = *(int **)(*(int *)(param_1 + 0x15a) + 0x3e);
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, *(int *)(iVar3 + 0x32) != 0)) {
    if (*(int *)(iVar3 + 0x36) < 1) {
      FUN_00405ad0(s_Array_bounds_violation__00857f9c);
    }
    uVar6 = 0xffffffff;
    pcVar8 = (char *)(**(int **)(iVar3 + 0x2e) + 4);
    do {
      pcVar9 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar9 + -uVar6;
    pcVar9 = (char *)(param_1 + 0x568);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(iVar3 + 0x4c);
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x15a) + 4);
  while (piVar2 != (int *)0x0) {
    piVar4 = (int *)piVar2[2];
    puVar5 = (undefined4 *)*piVar2;
    piVar2 = piVar4;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  FUN_00435fd0();
  (**(code **)(**(int **)(param_1 + 0x15a) + 0x14))();
  FUN_004353e0();
  if (*(undefined4 **)(param_1 + 0x156) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x156))(1);
  }
  *(undefined4 *)(param_1 + 0x156) = 0;
  return;
}


