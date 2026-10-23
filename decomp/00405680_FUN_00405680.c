// FUN_00405680 @ 405680 size=1098

undefined4 * __thiscall
FUN_00405680(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_78 [4];
  int iStack_68;
  undefined4 *puStack_54;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b96d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040e860();
  local_4 = 0;
  FUN_00583720();
  param_1[0xb] = 0;
  param_1[0xc] = 0x1f;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined4 *)((int)param_1 + 0x23e) = 0;
  *(undefined1 *)((int)param_1 + 0x252) = 0;
  *(undefined1 *)((int)param_1 + 0x253) = 0;
  param_1[0x95] = 0;
  *param_1 = &PTR_FUN_007e3360;
  param_1[10] = &PTR_LAB_007e3370;
  *(undefined4 *)((int)param_1 + 0x24e) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)param_1 + 0x242) = DAT_00bd1528;
  FUN_00407c50(0,0);
  param_1[2] = param_3;
  param_1[1] = param_2;
  param_1[3] = param_4 >> 3;
  uVar2 = 0xffffffff;
  param_1[4] = param_4;
  pcVar7 = (char *)(param_1 + 0xe);
  param_1[5] = 1 << ((byte)param_4 & 0x1f);
  pcVar5 = s_sized_image_0082c45c;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = pcVar7;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (param_5 == 0) {
    piVar8 = local_78;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    local_78[3] = param_2;
    local_78[0] = 0x6c;
    local_78[2] = param_3;
    local_78[1] = 7;
    local_10 = 0x40;
    iVar4 = FUN_00579fd0(local_78);
    param_1[0xb] = iVar4;
    if (iVar4 == 0) {
      FUN_00405df0(&DAT_0082c3f4);
      FUN_00405ad0(s_CImageBase_FAILED_to_created_siz_0082c42c,pcVar7);
      uVar2 = 0xffffffff;
      pcVar5 = &DAT_0082c3f4;
      do {
        pcVar6 = pcVar5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar6 + -uVar2;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      piVar8 = local_78;
      for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_78[0] = 0x6c;
      while (iVar4 = (**(code **)(*(int *)param_1[0xb] + 100))
                               ((int *)param_1[0xb],0,local_78,0x21,0), iVar4 == -0x7789fe3e) {
        (**(code **)(*(int *)param_1[0xb] + 0x6c))((int *)param_1[0xb]);
      }
      if (iVar4 == 0) {
        if (0 < param_3) {
          do {
            puVar9 = puStack_54;
            for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(undefined1 *)puVar9 = 0;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puStack_54 = (undefined4 *)((int)puStack_54 + iStack_68);
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
        (**(code **)(*(int *)param_1[0xb] + 0x80))((int *)param_1[0xb],0);
        param_1[0x8e] = 0;
        param_1[6] = iStack_68;
      }
    }
  }
  else if (param_5 == 1) {
    piVar8 = local_78;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    local_78[0] = 0x6c;
    local_78[3] = param_2;
    if (param_4 == 8) {
      local_78[3] = param_2 >> 1;
    }
    local_78[2] = param_3;
    local_30 = 0x20;
    local_2c = 0x40;
    local_24 = param_4;
    local_78[1] = 7;
    local_10 = 0x840;
    iVar4 = FUN_00579fd0(local_78);
    param_1[0xb] = iVar4;
    if (iVar4 != 0) {
      piVar8 = local_78;
      for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_78[0] = 0x6c;
      while (iVar4 = (**(code **)(*(int *)param_1[0xb] + 100))
                               ((int *)param_1[0xb],0,local_78,0x21,0), iVar4 == -0x7789fe3e) {
        (**(code **)(*(int *)param_1[0xb] + 0x6c))((int *)param_1[0xb]);
      }
      if (iVar4 == 0) {
        if (0 < param_3) {
          do {
            puVar9 = puStack_54;
            for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(undefined1 *)puVar9 = 0;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puStack_54 = (undefined4 *)((int)puStack_54 + iStack_68);
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
        (**(code **)(*(int *)param_1[0xb] + 0x80))((int *)param_1[0xb],0);
        param_1[0x8e] = 1;
        param_1[6] = iStack_68;
      }
    }
  }
  else if (param_5 == 2) {
    param_1[0x8e] = 2;
  }
  else if (param_5 == 6) {
    piVar8 = local_78;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    local_78[3] = param_2;
    local_78[0] = 0x6c;
    local_78[2] = param_3;
    local_78[1] = 7;
    local_10 = 0x40;
    iVar4 = FUN_00579fd0(local_78);
    param_1[0xb] = iVar4;
    if (iVar4 != 0) {
      piVar8 = local_78;
      for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_78[0] = 0x6c;
      while (iVar4 = (**(code **)(*(int *)param_1[0xb] + 100))
                               ((int *)param_1[0xb],0,local_78,0x21,0), iVar4 == -0x7789fe3e) {
        (**(code **)(*(int *)param_1[0xb] + 0x6c))((int *)param_1[0xb]);
      }
      if (iVar4 == 0) {
        if (0 < param_3) {
          do {
            puVar9 = puStack_54;
            for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(undefined1 *)puVar9 = 0;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puStack_54 = (undefined4 *)((int)puStack_54 + iStack_68);
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
        (**(code **)(*(int *)param_1[0xb] + 0x80))((int *)param_1[0xb],0);
      }
      param_1[6] = iStack_68;
    }
    param_1[0x8e] = 6;
  }
  ExceptionList = local_c;
  return param_1;
}


