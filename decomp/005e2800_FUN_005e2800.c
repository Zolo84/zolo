// FUN_005e2800 @ 5e2800 size=461

void __fastcall FUN_005e2800(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  char *pcVar12;
  char *pcVar13;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce0e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00428ee0(param_1 + 0xfc);
  if ((iVar4 != 0) && ((int *)(iVar4 + -0x14) != (int *)0x0)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18a) + 0x18);
    uVar5 = (**(code **)(*(int *)(iVar4 + -0x14) + 0xc))();
    iVar6 = FUN_007a8730(uVar2,uVar5);
    if (iVar6 != 0) {
      puVar7 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        iVar6 = *(int *)(iVar4 + 0x234);
        pcVar12 = *(char **)(*(int *)(param_1 + 0x18a) + 0x18);
        puVar8 = operator_new(0x54);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        if (puVar8 == (undefined2 *)0x0) {
          puVar11 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar8[4] = 0;
          *(undefined4 *)(puVar8 + 5) = 0;
          puVar8[7] = 0;
          *(undefined4 *)(puVar8 + 8) = 0;
          puVar11 = puVar8;
        }
        puVar7[1] = puVar11;
        *(undefined1 *)(puVar7 + 2) = 0;
        *(undefined1 *)((int)puVar7 + 9) = 1;
        *puVar7 = &PTR_FUN_007ea07c;
        *(undefined1 *)((int)puVar7 + 10) = 0;
        *puVar11 = 0x3a;
        iVar3 = puVar7[1];
        uStack_14 = (uint)puVar8 & 0xff000000;
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 4);
        *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar6 + 8);
        iVar6 = puVar7[1];
        *(uint *)(iVar6 + 2) = uStack_14;
        *(undefined2 *)(iVar6 + 6) = 0;
        iVar6 = puVar7[1];
        *puVar7 = &PTR_FUN_007ea05c;
        *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(iVar4 + 4);
        uVar9 = 0xffffffff;
        *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(iVar4 + 8);
        do {
          pcVar13 = pcVar12;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar12 = pcVar13 + -uVar9;
        pcVar13 = (char *)(puVar7[1] + 0x14);
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      uStack_4 = 0xffffffff;
      FUN_00565ca0(puVar7);
    }
  }
  if (*(undefined4 **)(param_1 + 0x11a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11a))(1);
  }
  if (*(undefined4 **)(param_1 + 0x11e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11e))(1);
  }
  if (*(undefined4 **)(param_1 + 0x122) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x122))(1);
  }
  *(undefined4 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  *(undefined4 *)(param_1 + 0x122) = 0;
  ExceptionList = pvStack_c;
  return;
}


