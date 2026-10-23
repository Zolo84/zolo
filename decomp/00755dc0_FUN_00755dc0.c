// FUN_00755dc0 @ 755dc0 size=467

void __fastcall FUN_00755dc0(int param_1)

{
  size_t _Size;
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  size_t *psVar5;
  size_t *psVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 *local_18;
  char *local_14;
  char *local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x40);
  local_18 = (undefined4 *)*piVar2;
  if (local_18 != piVar2) {
    do {
      iVar7 = local_18[4];
      uVar4 = 0;
      uVar11 = *(uint *)(iVar7 + 0x28);
      iVar8 = 0;
      do {
        bVar10 = (byte)uVar4;
        uVar4 = uVar4 + 8;
        *(char *)((int)&local_8 + iVar8) =
             (char)((0xff000000U >> (bVar10 & 0x1f) & uVar11) >> (0x18 - bVar10 & 0x1f));
        iVar8 = iVar8 + 1;
      } while (uVar4 < 0x20);
      local_10 = (char *)&DAT_007f0c98;
      if (*(char **)(iVar7 + 0x18) != (char *)0x0) {
        local_10 = *(char **)(iVar7 + 0x18);
      }
      local_14 = (char *)&DAT_007f0c98;
      if (*(char **)(iVar7 + 8) != (char *)0x0) {
        local_14 = *(char **)(iVar7 + 8);
      }
      local_4 = *(undefined4 *)(param_1 + 0x28);
      uVar11 = 0xffffffff;
      iVar7 = *(int *)(param_1 + 0x20);
      pcVar12 = local_14;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      uVar4 = 0xffffffff;
      pcVar12 = local_10;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      _Size = ~uVar11 + ~uVar4 + 0x24;
      psVar5 = _malloc(_Size);
      *psVar5 = _Size;
      psVar6 = (size_t *)(iVar7 + 4);
      if (iVar7 == 0) {
        psVar6 = &DAT_00d4c210;
      }
      psVar5[1] = *psVar6;
      psVar5[2] = psVar6[1];
      psVar5[3] = *(size_t *)(iVar7 + 4);
      psVar5[4] = *(size_t *)(iVar7 + 8);
      uVar11 = 0xffffffff;
      psVar5[5] = 0x14;
      pcVar12 = local_14;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_00745a60(~uVar11);
      uVar11 = ~uVar11;
      while (uVar11 != 0) {
        *(char *)((int)psVar5 + uVar11 + 0x1b) = local_14[uVar11 - 1];
        uVar11 = uVar11 - 1;
      }
      iVar7 = FUN_00745a30();
      uVar11 = 0xffffffff;
      pcVar12 = local_10;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_00745a60(~uVar11);
      uVar11 = ~uVar11;
      while (uVar11 != 0) {
        *(char *)((int)psVar5 + uVar11 + 3 + iVar7 + 0x1c) = local_10[uVar11 - 1];
        uVar11 = uVar11 - 1;
      }
      iVar8 = FUN_00745a30();
      *(undefined4 *)((int)psVar5 + iVar8 + 4 + iVar7 + 0x1c) = local_8;
      FUN_007579c0(psVar5);
      FUN_007a77fa(psVar5);
      puVar9 = (undefined4 *)local_18[2];
      if (puVar9 == DAT_00d4bdfc) {
        puVar9 = (undefined4 *)local_18[1];
        if (local_18 == (undefined4 *)puVar9[2]) {
          do {
            local_18 = puVar9;
            puVar9 = (undefined4 *)local_18[1];
          } while (local_18 == (undefined4 *)puVar9[2]);
        }
        if ((undefined4 *)local_18[2] != puVar9) goto LAB_00755f77;
      }
      else {
        for (puVar3 = (undefined4 *)*puVar9; puVar3 != DAT_00d4bdfc; puVar3 = (undefined4 *)*puVar3)
        {
          puVar9 = puVar3;
        }
LAB_00755f77:
        local_18 = puVar9;
      }
    } while (local_18 != *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x40));
  }
  return;
}


