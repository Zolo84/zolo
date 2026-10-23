// FUN_0065f1d0 @ 65f1d0 size=324

void FUN_0065f1d0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3823;
  local_c = ExceptionList;
  uVar8 = 0;
  ExceptionList = &local_c;
  puVar5 = operator_new(0x28);
  local_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_14 = local_14 & 0xff000000;
    FUN_0065cdb0(local_14,uVar8 & 0xffff0000);
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar5 = &PTR_FUN_007f0b90;
    puVar5[2] = &PTR_LAB_007f0b8c;
    if (param_2 == (char *)0x0) {
      puVar5[8] = 0;
    }
    else {
      uVar8 = 0xffffffff;
      pcVar6 = param_2;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar6 = operator_new(~uVar8);
      uVar8 = 0xffffffff;
      puVar5[8] = pcVar6;
      do {
        pcVar10 = param_2;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar10 = param_2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar10;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar10 = pcVar10 + -uVar8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar6 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    puVar5[9] = *(int *)(DAT_00893530 + 0x20) + param_1 * 0x46;
  }
  iVar4 = DAT_00d10f18;
  local_4 = 0xffffffff;
  iVar2 = *(int *)(DAT_00d10f18 + 8);
  puVar7 = operator_new(0xe);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = puVar5;
    puVar7[1] = iVar2;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
  }
  iVar3 = *(int *)(iVar4 + 0xc);
  *(undefined4 **)(iVar4 + 8) = puVar7;
  *(int *)(iVar4 + 0xc) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(iVar4 + 4) = puVar7;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 **)(iVar2 + 8) = puVar7;
  ExceptionList = local_c;
  return;
}


