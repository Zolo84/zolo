// FUN_0040eb60 @ 40eb60 size=910

undefined4 __thiscall FUN_0040eb60(int param_1,int param_2,void *param_3,int param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 extraout_AH;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  short local_3c [5];
  undefined4 local_32;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  short local_1e;
  int local_1c;
  int local_18;
  undefined4 local_c;
  
  if (*(char *)(param_2 + 0x13c) == '\0') {
    bVar1 = false;
    FUN_004271a0(local_3c,0xe);
    if (((*(char *)(param_2 + 0x13c) == '\0') && (local_3c[0] == 0x4d42)) &&
       (FUN_004271a0(local_2c,0x28), *(char *)(param_2 + 0x13c) == '\0')) {
      if (local_1c == 1) {
        bVar1 = true;
      }
      else if (local_1c != 0) {
        return 0;
      }
      if (local_1e == 1) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
      else if (local_1e == 8) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x10) = 8;
      }
      else if ((local_1e == 0x10) || (local_1e == 0x18)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x10) = 0x10;
      }
      *(int *)(param_1 + 4) = local_28;
      uVar3 = *(int *)(param_1 + 0xc) * local_28 + 3;
      uVar7 = local_28 + 3U & 0xfffffffc;
      *(int *)(param_1 + 8) = local_24;
      *(uint *)(param_1 + 0x24) = uVar3 & 0xfffffffc;
      if (local_1e == 1) {
        *(int *)(param_1 + 0x24) = (int)uVar3 >> 3;
      }
      if (param_4 == -1) {
        if (*(int *)(param_1 + 0x18) < 1) {
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x24);
        }
        param_4 = *(int *)(param_1 + 0x18);
      }
      else {
        *(int *)(param_1 + 0x18) = param_4;
      }
      *(undefined4 *)(param_1 + 0x14) = local_c;
      if (local_18 == 0) {
        local_18 = *(int *)(param_1 + 0x24) * local_24;
      }
      if (bVar1) {
        local_1c = 0;
      }
      local_48 = uVar7;
      if (local_1e != 0x18) {
        FUN_004273c0(local_32);
      }
      puVar5 = (undefined4 *)((*(int *)(param_1 + 8) + -1) * param_4 + (int)param_3);
      puVar6 = puVar5;
      if (bVar1) {
        while( true ) {
          while( true ) {
            while( true ) {
              FUN_004271a0(&param_3,1);
              if ((char)param_3 == '\0') break;
              FUN_004271a0(&local_44,1);
              uVar2 = (undefined1)local_44;
              puVar9 = puVar6;
              for (uVar7 = ((uint)param_3 & 0xff) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar9 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
                puVar9 = puVar9 + 1;
              }
              for (uVar7 = (uint)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar9 = uVar2;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              puVar6 = (undefined4 *)((int)puVar6 + ((uint)param_3 & 0xff));
            }
            FUN_004271a0(&param_3,1);
            uVar7 = (uint)param_3 & 0xff;
            if (uVar7 != 0) break;
            puVar5 = (undefined4 *)((int)puVar5 - param_4);
            puVar6 = puVar5;
          }
          if (uVar7 == 1) break;
          if (uVar7 == 2) {
            FUN_004271a0(&local_4c,1);
            FUN_004271a0(&local_48,1);
            iVar4 = (local_48 & 0xff) * param_4;
            puVar5 = (undefined4 *)((int)puVar5 - iVar4);
            puVar6 = (undefined4 *)((int)puVar6 + ((local_4c & 0xff) - iVar4));
          }
          else {
            FUN_004271a0(puVar6,uVar7);
            puVar6 = (undefined4 *)((int)puVar6 + ((uint)param_3 & 0xff));
            if (((uint)param_3 & 1) != 0) {
              FUN_004271a0(&param_3,1);
            }
          }
        }
      }
      else if (local_1e == 0x18) {
        local_40 = uVar7 * 3;
        param_3 = operator_new(local_40);
        local_44 = 0;
        if (0 < *(int *)(param_1 + 8)) {
          do {
            FUN_004271a0(param_3,local_40);
            if (0 < (int)uVar7) {
              local_4c = local_48;
              puVar8 = (undefined1 *)((int)param_3 + 2);
              puVar6 = puVar5;
              do {
                uVar2 = FUN_00584270(*puVar8,puVar8[-1],puVar8[-2]);
                *(undefined1 *)puVar6 = uVar2;
                FUN_00584270(*puVar8,puVar8[-1],puVar8[-2]);
                *(undefined1 *)((int)puVar6 + 1) = extraout_AH;
                puVar8 = puVar8 + 3;
                local_4c = local_4c - 1;
                puVar6 = (undefined4 *)((int)puVar6 + 2);
              } while (local_4c != 0);
              local_4c = 0;
              uVar7 = local_48;
            }
            puVar5 = (undefined4 *)((int)puVar5 - param_4);
            local_44 = local_44 + 1;
          } while (local_44 < *(int *)(param_1 + 8));
        }
        FUN_00796cd8(param_3);
      }
      else {
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 8)) {
          do {
            FUN_004271a0(puVar5,*(undefined4 *)(param_1 + 0x24));
            puVar5 = (undefined4 *)((int)puVar5 - param_4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 8));
          return 1;
        }
      }
      return 1;
    }
  }
  return 0;
}


