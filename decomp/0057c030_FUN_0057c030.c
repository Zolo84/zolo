// FUN_0057c030 @ 57c030 size=444

undefined4 __thiscall FUN_0057c030(int param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8a2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0xb) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xb70)) {
      puVar2 = (undefined1 *)(param_1 + 0x3d1);
      do {
        if (*(int *)(puVar2 + -0x21) == *(int *)(param_2[1] + 0xe)) {
          *puVar2 = 1;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2[1] + 0x12);
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 0x3e;
      } while (iVar1 < *(int *)(param_1 + 0xb70));
    }
    ExceptionList = pvStack_c;
    return 3;
  }
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 299) {
    *(undefined1 *)(param_1 + 0x3d6 + *(int *)(param_2[1] + 0xe) * 0x3e) = 1;
    if (*(char *)(param_1 + 0x37a) != '\0') {
      iVar1 = *(int *)(param_1 + 0xb70);
      iVar7 = 0;
      if (0 < iVar1) {
        pcVar3 = (char *)(param_1 + 0x3d0);
        iVar6 = iVar1;
        do {
          if (pcVar3[6] == '\x01') {
            iVar7 = iVar7 + 1;
          }
          if (*pcVar3 == '\x01') {
            iVar1 = iVar1 + -1;
          }
          pcVar3 = pcVar3 + 0x3e;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (iVar1 <= iVar7) {
        puVar4 = operator_new(0xc);
        uStack_4 = 0;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar5 = operator_new(0xe);
          if (puVar5 == (undefined2 *)0x0) {
            puVar5 = (undefined2 *)0x0;
          }
          else {
            puVar5[3] = 0;
            *(undefined1 *)(puVar5 + 2) = 0;
            *(undefined1 *)((int)puVar5 + 3) = 0;
            *(undefined1 *)(puVar5 + 1) = 0;
            puVar5[4] = 0;
            *(undefined4 *)(puVar5 + 5) = 0;
          }
          puVar4[1] = puVar5;
          *(undefined1 *)(puVar4 + 2) = 0;
          *(undefined1 *)((int)puVar4 + 9) = 1;
          *puVar4 = &PTR_FUN_007e3e5c;
          *(undefined1 *)((int)puVar4 + 10) = 0;
          *puVar5 = 0x12a;
          iVar1 = puVar4[1];
          uStack_14 = uStack_14 & 0xff000000;
          *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
          *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
          iVar1 = puVar4[1];
          *(uint *)(iVar1 + 2) = uStack_14;
          *(undefined2 *)(iVar1 + 6) = 0;
          *puVar4 = &PTR_FUN_007e3e3c;
        }
        uStack_4 = 0xffffffff;
        FUN_00565ca0(puVar4);
      }
    }
    ExceptionList = pvStack_c;
    return 3;
  }
  ExceptionList = pvStack_c;
  return 0;
}


