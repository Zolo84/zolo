// FUN_004b3d90 @ 4b3d90 size=431

void FUN_004b3d90(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uStack00000006;
  char *in_stack_00001430;
  int in_stack_00001434;
  char in_stack_00001438;
  
  FUN_007a69e0();
  iVar2 = (**(code **)(*(int *)(in_stack_00001434 + 0x32) + 4))();
  if (0 < iVar2) {
    if (in_stack_00001438 == '\0') {
      FUN_0042b6c9();
    }
    else {
      FUN_0042b6c9();
    }
    FUN_007a630a();
    FUN_0042b6c9();
    FUN_007a630a();
    iVar6 = 0;
    for (iVar2 = *(int *)(in_stack_00001434 + 0x36); iVar2 != 0; iVar2 = *(int *)(iVar2 + 10)) {
      uStack00000006 = *(undefined4 *)(iVar2 + 2);
      iVar6 = iVar6 + 1;
      iVar3 = FUN_00428ee0();
      if ((iVar3 != 0) && ((int *)(iVar3 + -8) != (int *)0x0)) {
        FUN_004ff320();
        (**(code **)(*(int *)(iVar3 + -8) + 0xc))();
        FUN_007a630a();
        uVar4 = 0xffffffff;
        pcVar8 = &stack0x0000002c;
        do {
          pcVar7 = pcVar8;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar3 = -1;
        pcVar8 = &stack0x0000042c;
        do {
          pcVar9 = pcVar8;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + -uVar4;
        pcVar7 = pcVar9 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        }
        iVar3 = (**(code **)(*(int *)(in_stack_00001434 + 0x32) + 4))();
        pcVar8 = &DAT_0083bf48;
        if (iVar6 == iVar3) {
          pcVar8 = &DAT_0083a6e0;
        }
        uVar4 = 0xffffffff;
        do {
          pcVar7 = pcVar8;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar3 = -1;
        pcVar8 = &stack0x0000042c;
        do {
          pcVar9 = pcVar8;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + -uVar4;
        pcVar7 = pcVar9 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
    uVar4 = 0xffffffff;
    pcVar8 = &stack0x0000042c;
    do {
      pcVar7 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    do {
      pcVar8 = in_stack_00001430;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar8 = in_stack_00001430 + 1;
      cVar1 = *in_stack_00001430;
      in_stack_00001430 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -uVar4;
    pcVar8 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  return;
}


