// FUN_005ea050 @ 5ea050 size=498

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005ea050(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  char *pcVar10;
  double dVar11;
  
  iVar2 = FUN_00428ee0(param_1 + 0x2e);
  if (((iVar2 != 0) && (iVar2 != 8)) && (cVar1 = FUN_004bf180(), cVar1 != '\0')) {
    cVar1 = (**(code **)(*(int *)(param_1 + 0x34) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      fVar9 = (float10)FUN_004bebe0();
      if ((float10)_DAT_007e34c0 <= fVar9) {
        fVar9 = (float10)FUN_004bebe0();
        fVar9 = fVar9 * (float10)_DAT_007e4088;
        pcVar10 = s_BATTLE_APROGRESS_0085cbd0;
      }
      else {
        fVar9 = (float10)FUN_004bebe0();
        fVar9 = (float10)_DAT_007e4088 - fVar9 * (float10)_DAT_007e4088;
        pcVar10 = s_BATTLE_DPROGRESS_0085cbe4;
      }
      dVar11 = (double)fVar9;
      uVar3 = FUN_0042b6c9(pcVar10);
      FUN_007a630a(&DAT_00cdd758,uVar3,dVar11);
      if (DAT_00dc191a != '\0') {
        pcVar10 = (char *)FUN_004bf2a0();
        uVar5 = 0xffffffff;
        do {
          pcVar8 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar2 = -1;
        pcVar10 = (char *)&DAT_00cdd758;
        do {
          pcVar7 = pcVar10;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar7 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar7;
        } while (cVar1 != '\0');
        pcVar10 = pcVar8 + -uVar5;
        pcVar8 = pcVar7 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      return &DAT_00cdd758;
    }
    puVar4 = (undefined4 *)
             (**(code **)**(undefined4 **)(param_1 + 0xbe))
                       (*(undefined4 *)(iVar2 + 0x78),param_2,param_3);
    if (puVar4 != (undefined4 *)0x0) {
      return puVar4;
    }
    puVar4 = (undefined4 *)
             (**(code **)**(undefined4 **)(param_1 + 0xc2))
                       (*(undefined4 *)(iVar2 + 0x7c),param_2,param_3);
    if (puVar4 != (undefined4 *)0x0) {
      return puVar4;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc6) + 0x20))(param_2,param_3);
    if ((cVar1 != '\0') && (*(undefined4 **)(iVar2 + 0x56) != (undefined4 *)0x0)) {
      puVar4 = (undefined4 *)FUN_004c1670(**(undefined4 **)(iVar2 + 0x56));
      return puVar4;
    }
    if ((*(int **)(param_1 + 0xb6) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0xb6) + 0x20))(param_2,param_3), cVar1 != '\0')) {
      iVar2 = *(int *)(iVar2 + 0x6c);
      if ((iVar2 == 4) || ((iVar2 == 5 || (iVar2 == 6)))) {
        iVar2 = *(int *)(*(int *)(param_1 + 0xb6) + 0x52) + 10;
        if (iVar2 != 0) {
          puVar4 = (undefined4 *)FUN_00514070(iVar2);
          return puVar4;
        }
      }
      else if ((iVar2 == 7) || (iVar2 == 8)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0xb6) + 0x52);
        if (iVar2 == 7) {
          puVar4 = (undefined4 *)FUN_00514070(0x1e);
          return puVar4;
        }
        if (iVar2 == 4) {
          puVar4 = (undefined4 *)FUN_00514070(0x1f);
          return puVar4;
        }
      }
    }
  }
  return (undefined4 *)0x0;
}


