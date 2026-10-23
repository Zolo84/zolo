// FUN_00756060 @ 756060 size=453

void __fastcall FUN_00756060(int param_1)

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
  BOOL BVar10;
  byte bVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *local_14;
  char *local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00750450();
  piVar2 = *(int **)(*(int *)(param_1 + 0x24) + 4);
  local_14 = (undefined4 *)*piVar2;
  if (local_14 != piVar2) {
    do {
      iVar7 = *(int *)(param_1 + 0x2c);
      local_4 = local_14[4];
      uVar12 = *(uint *)(iVar7 + 0x28);
      uVar4 = 0;
      iVar8 = 0;
      do {
        bVar11 = (byte)uVar4;
        uVar4 = uVar4 + 8;
        *(char *)((int)&local_8 + iVar8) =
             (char)((0xff000000U >> (bVar11 & 0x1f) & uVar12) >> (0x18 - bVar11 & 0x1f));
        iVar8 = iVar8 + 1;
      } while (uVar4 < 0x20);
      local_10 = (char *)&DAT_007f0c98;
      if (*(char **)(iVar7 + 0x18) != (char *)0x0) {
        local_10 = *(char **)(iVar7 + 0x18);
      }
      pcVar13 = *(char **)(iVar7 + 8);
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)&DAT_007f0c98;
      }
      uVar12 = 0xffffffff;
      iVar7 = *(int *)(param_1 + 0x20);
      pcVar14 = pcVar13;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      uVar4 = 0xffffffff;
      pcVar14 = local_10;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      _Size = ~uVar12 + ~uVar4 + 0x24;
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
      uVar12 = 0xffffffff;
      psVar5[5] = 0x14;
      pcVar14 = pcVar13;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      FUN_00756b20(pcVar13,~uVar12);
      iVar7 = FUN_00745a30();
      uVar12 = 0xffffffff;
      pcVar13 = local_10;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      FUN_00756b20(local_10,~uVar12);
      iVar8 = FUN_00745a30();
      *(undefined4 *)((int)psVar5 + iVar8 + iVar7 + 0x20) = local_8;
      FUN_007579c0(psVar5);
      FUN_007a77fa(psVar5);
      puVar9 = (undefined4 *)local_14[2];
      if (puVar9 == DAT_00d4c334) {
        puVar9 = (undefined4 *)local_14[1];
        if (local_14 == (undefined4 *)puVar9[2]) {
          do {
            local_14 = puVar9;
            puVar9 = (undefined4 *)local_14[1];
          } while (local_14 == (undefined4 *)puVar9[2]);
        }
        if ((undefined4 *)local_14[2] != puVar9) goto LAB_007561d6;
      }
      else {
        for (puVar3 = (undefined4 *)*puVar9; puVar3 != DAT_00d4c334; puVar3 = (undefined4 *)*puVar3)
        {
          puVar9 = puVar3;
        }
LAB_007561d6:
        local_14 = puVar9;
      }
    } while (local_14 != *(undefined4 **)(*(int *)(param_1 + 0x24) + 4));
  }
  BVar10 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x24) + 0x24));
  if (BVar10 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  return;
}


