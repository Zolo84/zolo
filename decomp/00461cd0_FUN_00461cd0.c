// FUN_00461cd0 @ 461cd0 size=399

void __thiscall FUN_00461cd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int *piVar7;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bc74b;
  pvStack_c = ExceptionList;
  piVar7 = *(int **)(param_2 + 4);
  iVar1 = *piVar7;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)(iVar1 + 0x22) + 4))();
  if (piVar7 != (int *)0x0) {
    do {
      piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x4504) + 0x28))(auStack_1c,*piVar7);
      if (*piVar4 == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      piVar4 = (int *)piVar7[2];
      iVar2 = *piVar7;
      (**(code **)(*(int *)(iVar2 + 0x22) + 4))();
      if (iVar2 != iVar1) {
        puVar5 = operator_new(0xc);
        uStack_4 = 0;
        puStack_18 = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar6 = operator_new(0x1a);
          if (puVar6 == (undefined2 *)0x0) {
            puVar6 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d2d0();
            puVar6[4] = 0;
            *(undefined4 *)(puVar6 + 5) = 0;
            puVar6[7] = 0;
            *(undefined4 *)(puVar6 + 8) = 0;
            puVar6[10] = 0;
            *(undefined4 *)(puVar6 + 0xb) = 0;
          }
          puVar5[1] = puVar6;
          *(undefined1 *)(puVar5 + 2) = 0;
          *(undefined1 *)((int)puVar5 + 9) = 1;
          *puVar5 = &PTR_FUN_007e63c4;
          *(undefined1 *)((int)puVar5 + 10) = 0;
          *puVar6 = 0x49;
          iVar3 = puVar5[1];
          uStack_14 = uStack_14 & 0xff000000;
          *(undefined4 *)(iVar3 + 8) = DAT_0088f230;
          *(undefined2 *)(iVar3 + 0xc) = DAT_0088f234;
          iVar3 = puVar5[1];
          *(uint *)(iVar3 + 2) = uStack_14;
          *(undefined2 *)(iVar3 + 6) = 0;
          iVar3 = puVar5[1];
          *puVar5 = &PTR_FUN_007e63a4;
          *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar1 + 0x18);
          *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar1 + 0x1c);
          iVar3 = puVar5[1];
          *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x18);
          *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar2 + 0x1c);
        }
        uStack_4 = 0xffffffff;
        FUN_00565bf0(puVar5);
      }
      piVar7 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  ExceptionList = pvStack_c;
  return;
}


