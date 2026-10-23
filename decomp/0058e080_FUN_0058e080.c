// FUN_0058e080 @ 58e080 size=542

undefined4 * __thiscall FUN_0058e080(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9b41;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0058d800(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007eb120;
  param_1[2] = &PTR_LAB_007eb11c;
  param_2 = &DAT_0089cad8;
  do {
    iVar1 = *param_2;
    if (iVar1 != 0) {
      cVar4 = FUN_0053e1ca(*(undefined4 *)(iVar1 + 6));
      if (cVar4 != '\0') {
        uVar6 = FUN_0044a740(*(undefined4 *)(iVar1 + 6));
        puVar7 = operator_new(0x1ce);
        local_4._0_1_ = 1;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar1 + 6);
          uVar5 = FUN_00584270(uVar6 & 0xff,uVar6 >> 8 & 0xff,uVar6 >> 0x10 & 0xff);
          puVar7[0x6d] = 0;
          puVar7[0x6e] = 0x12d;
          puVar7[0x6f] = 0;
          pvVar8 = operator_new(0x4b4);
          puVar7[0x6c] = pvVar8;
          local_4._0_1_ = 2;
          FUN_00433570(s_gfx_interface_eyr_eyr_btn_check__00857ffc,0,0xffffffff);
          uVar6 = 0xffffffff;
          *puVar7 = &PTR_FUN_007eafb4;
          puVar7[2] = &PTR_LAB_007eafb0;
          *(undefined ***)((int)puVar7 + 0x7e) = &PTR_LAB_007eafac;
          pcVar11 = (char *)(iVar1 + 0x1b);
          do {
            pcVar12 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar11 + 1;
            cVar4 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar4 != '\0');
          uVar6 = ~uVar6;
          pcVar11 = pcVar12 + -uVar6;
          pcVar12 = (char *)((int)puVar7 + 0xaa);
          for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar12 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar12 = pcVar12 + 1;
          }
          *(undefined2 *)((int)puVar7 + 0x1ae) = uVar5;
          *(undefined4 *)((int)puVar7 + 0x1aa) = uVar2;
          *(undefined1 *)((int)puVar7 + 0xa2) = 0;
          *(undefined1 *)(puVar7 + 0x1a) = 1;
          *(undefined2 *)(puVar7 + 0x70) = uVar5;
          *(undefined4 *)((int)puVar7 + 0x1c2) = 0;
          *(undefined4 *)((int)puVar7 + 0x1c6) = 0;
          *(undefined4 *)((int)puVar7 + 0x1ca) = 0;
          *puVar7 = &PTR_FUN_007eb0b0;
          puVar7[2] = &PTR_LAB_007eb0ac;
          *(undefined ***)((int)puVar7 + 0x7e) = &PTR_LAB_007eb0a8;
        }
        iVar1 = param_1[0x48];
        local_4 = (uint)local_4._1_3_ << 8;
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = puVar7;
          puVar9[1] = iVar1;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar3 = param_1[0x49];
        param_1[0x48] = puVar9;
        param_1[0x49] = iVar3 + 1;
        if (iVar3 == 0) {
          param_1[0x47] = puVar9;
        }
        else {
          *(undefined4 **)(iVar1 + 8) = puVar9;
        }
        FUN_00433950();
      }
    }
    param_2 = param_2 + 1;
    if (0x89d037 < (int)param_2) {
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}


