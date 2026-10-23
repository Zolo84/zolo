// FUN_0046bbe0 @ 46bbe0 size=741

void __fastcall FUN_0046bbe0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bcb81;
  local_c = ExceptionList;
  piVar5 = *(int **)(param_1 + 0x3b6c);
  ExceptionList = &local_c;
  if (DAT_00dc1886 == '\0') {
    while (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      piVar5 = (int *)piVar5[2];
      uVar9 = *(undefined4 *)(param_1 + 6);
      FUN_004d5bf0();
      cVar3 = FUN_0044a690(uVar9);
      uVar9 = *(undefined4 *)(param_1 + 6);
      FUN_004d5be0();
      cVar4 = FUN_0044a690(uVar9);
      if ((cVar4 == '\0') || (cVar3 == '\0')) {
        piVar7 = (int *)FUN_004d5bf0();
        piVar8 = (int *)FUN_004d5be0();
        uVar9 = (**(code **)(*piVar7 + 0xc))();
        uVar9 = (**(code **)(*piVar8 + 0xc))(uVar9);
        uVar9 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar9);
        FUN_00458570(s__s_cancels_the_convoy_from__s_to_0083ca7c,uVar9);
        puVar6 = operator_new(0xc);
        local_4 = 1;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar10 = operator_new(0x18);
          local_4 = CONCAT31(local_4._1_3_,2);
          if (puVar10 == (undefined2 *)0x0) {
            puVar10 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d2d0();
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 0;
            puVar10[7] = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
          }
          puVar6[1] = puVar10;
          *(undefined1 *)(puVar6 + 2) = 0;
          *(undefined1 *)((int)puVar6 + 9) = 1;
          *puVar6 = &PTR_FUN_007e6060;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *puVar10 = 0x147;
          iVar2 = puVar6[1];
          uStack_14 = uStack_14 & 0xff000000;
          *(undefined4 *)(iVar2 + 8) = DAT_0088f230;
          *(undefined2 *)(iVar2 + 0xc) = DAT_0088f234;
          iVar2 = puVar6[1];
          *(uint *)(iVar2 + 2) = uStack_14;
          *(undefined2 *)(iVar2 + 6) = 0;
          iVar2 = puVar6[1];
          *puVar6 = &PTR_FUN_007e6040;
          *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar1 + 0x10);
          *(undefined4 *)(puVar6[1] + 0x14) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00565cc0(puVar6);
      }
    }
  }
  else {
    ExceptionList = &local_c;
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        piVar5 = (int *)piVar5[2];
        if (*(int *)(iVar1 + 0x12a) == param_1) {
          uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x12a) + 6);
          FUN_004d5bf0();
          cVar3 = FUN_0044a690(uVar9);
          if (cVar3 == '\0') goto LAB_0046bcb0;
          uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x12a) + 6);
          FUN_004d5be0();
          cVar3 = FUN_0044a690(uVar9);
          if ((((cVar3 == '\0') || ((&DAT_0089cad8)[*(int *)(iVar1 + 0x150)] == 0)) ||
              ((&DAT_0089cad8)[*(int *)(iVar1 + 0x154)] == 0)) ||
             ((cVar3 = FUN_0044a690(*(int *)(iVar1 + 0x154)), cVar3 == '\0' ||
              (cVar3 = FUN_004d5de0(), cVar3 != '\0')))) goto LAB_0046bcb0;
        }
        else {
LAB_0046bcb0:
          puVar6 = operator_new(0xc);
          local_4 = 0;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            FUN_004736e0(0x147,&DAT_0088f230);
            iVar2 = puVar6[1];
            *puVar6 = &PTR_FUN_007e6040;
            *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar1 + 0xc);
            *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar1 + 0x10);
            *(undefined4 *)(puVar6[1] + 0x14) = 0;
          }
          local_4 = 0xffffffff;
          FUN_00565cc0(puVar6);
        }
        if (piVar5 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
      } while( true );
    }
  }
  ExceptionList = local_c;
  return;
}


