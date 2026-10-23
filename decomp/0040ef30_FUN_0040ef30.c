// FUN_0040ef30 @ 40ef30 size=1036

undefined4 __thiscall FUN_0040ef30(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 extraout_AH;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  void *local_19c;
  int local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  undefined1 local_188 [4];
  int local_184;
  int local_180;
  short local_17a;
  int local_178;
  int local_174;
  undefined4 local_168;
  short local_15c [5];
  undefined4 local_152;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b989b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426f50(param_2);
  local_4 = 0;
  if (local_10 == '\0') {
    bVar1 = false;
    FUN_004271a0(local_15c,0xe);
    if (((local_10 == '\0') && (local_15c[0] == 0x4d42)) &&
       (FUN_004271a0(local_188,0x28), local_10 == '\0')) {
      if (local_178 == 1) {
        bVar1 = true;
      }
      else if (local_178 != 0) goto LAB_0040f30d;
      if (local_17a == 1) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
      else if (local_17a == 8) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x10) = 8;
      }
      else if ((local_17a == 0x10) || (local_17a == 0x18)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x10) = 0x10;
      }
      uVar3 = *(int *)(param_1 + 0xc) * local_184 + 3;
      uVar6 = local_184 + 3U & 0xfffffffc;
      *(int *)(param_1 + 4) = local_184;
      *(int *)(param_1 + 8) = local_180;
      *(uint *)(param_1 + 0x24) = uVar3 & 0xfffffffc;
      if (local_17a == 1) {
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
      *(undefined4 *)(param_1 + 0x14) = local_168;
      if (local_174 == 0) {
        local_174 = *(int *)(param_1 + 0x24) * local_180;
      }
      if (bVar1) {
        local_178 = 0;
      }
      local_194 = uVar6;
      if (local_17a != 0x18) {
        FUN_004273c0(local_152);
      }
      puVar5 = (undefined4 *)((*(int *)(param_1 + 8) + -1) * param_4 + param_3);
      puVar7 = puVar5;
      if (bVar1) {
        while( true ) {
          while( true ) {
            while( true ) {
              FUN_004271a0(&local_19c,1);
              if ((char)local_19c == '\0') break;
              FUN_004271a0(&local_198,1);
              uVar2 = (undefined1)local_198;
              puVar9 = puVar7;
              for (uVar6 = ((uint)local_19c & 0xff) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar9 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
                puVar9 = puVar9 + 1;
              }
              for (uVar6 = (uint)local_19c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar9 = uVar2;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              puVar7 = (undefined4 *)((int)puVar7 + ((uint)local_19c & 0xff));
            }
            FUN_004271a0(&local_19c,1);
            uVar6 = (uint)local_19c & 0xff;
            if (uVar6 != 0) break;
            puVar5 = (undefined4 *)((int)puVar5 - param_4);
            puVar7 = puVar5;
          }
          if (uVar6 == 1) break;
          if (uVar6 == 2) {
            FUN_004271a0(&local_190,1);
            FUN_004271a0(&local_194,1);
            iVar4 = (local_194 & 0xff) * param_4;
            puVar5 = (undefined4 *)((int)puVar5 - iVar4);
            puVar7 = (undefined4 *)((int)puVar7 + ((local_190 & 0xff) - iVar4));
          }
          else {
            FUN_004271a0(puVar7,uVar6);
            puVar7 = (undefined4 *)((int)puVar7 + ((uint)local_19c & 0xff));
            if (((uint)local_19c & 1) != 0) {
              FUN_004271a0(&local_19c,1);
            }
          }
        }
      }
      else if (local_17a == 0x18) {
        uVar3 = uVar6 * 3;
        local_18c = uVar3;
        local_19c = operator_new(uVar3);
        local_198 = 0;
        if (0 < *(int *)(param_1 + 8)) {
          do {
            FUN_004271a0(local_19c,uVar3);
            if (0 < (int)uVar6) {
              local_190 = local_194;
              puVar8 = (undefined1 *)((int)local_19c + 2);
              puVar7 = puVar5;
              do {
                uVar2 = FUN_00584270(*puVar8,puVar8[-1],puVar8[-2]);
                *(undefined1 *)puVar7 = uVar2;
                FUN_00584270(*puVar8,puVar8[-1],puVar8[-2]);
                *(undefined1 *)((int)puVar7 + 1) = extraout_AH;
                puVar8 = puVar8 + 3;
                local_190 = local_190 - 1;
                puVar7 = (undefined4 *)((int)puVar7 + 2);
              } while (local_190 != 0);
              local_190 = 0;
              uVar6 = local_194;
              uVar3 = local_18c;
            }
            puVar5 = (undefined4 *)((int)puVar5 - param_4);
            local_198 = local_198 + 1;
          } while (local_198 < *(int *)(param_1 + 8));
        }
        FUN_00796cd8(local_19c);
      }
      else {
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 8)) {
          do {
            FUN_004271a0(puVar5,*(undefined4 *)(param_1 + 0x24));
            puVar5 = (undefined4 *)((int)puVar5 - param_4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 8));
        }
      }
      local_4 = 0xffffffff;
      FUN_00426f80();
      ExceptionList = local_c;
      return 1;
    }
  }
LAB_0040f30d:
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_c;
  return 0;
}


