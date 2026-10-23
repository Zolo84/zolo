// FUN_0057bcf0 @ 57bcf0 size=397

undefined4 __thiscall FUN_0057bcf0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_108 [66];
  
  if (*(int *)(param_1 + 0xbc4) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xb74);
    *(undefined1 *)(param_1 + 0x37a) = 0;
    puVar3 = puVar1;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = 0x50;
    puVar3 = (undefined4 *)(param_3 * 0x50 + 0x10 + param_1);
    *(undefined4 *)(param_1 + 0xb7c) = *puVar3;
    *(undefined4 *)(param_1 + 0xb80) = puVar3[1];
    *(undefined4 *)(param_1 + 0xb84) = puVar3[2];
    *(undefined4 *)(param_1 + 0xb88) = puVar3[3];
    puVar3 = &DAT_00893640;
    puVar5 = local_108;
    for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(param_1 + 0xbb4) = local_108[1];
    piVar4 = *(int **)(param_1 + 0xbc4);
    puVar3 = &DAT_00893640;
    puVar5 = local_108;
    for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(param_1 + 3000) = local_108[0];
    iVar2 = (**(code **)(*piVar4 + 0x60))(piVar4,puVar1,1);
    *(int *)(param_1 + 0x3ac) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x288) = 0;
      return 0x285;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x18))
                      (*(int **)(param_1 + 0xbc4),param_1 + 0x380,&stack0xfffffedc,DAT_00bd0558,0,0,
                       0);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(param_1 + 0xbc4) + 0x10))(*(int **)(param_1 + 0xbc4));
      return 0;
    }
    piVar4 = (int *)(param_1 + 0x3c0);
    iVar2 = 0x20;
    do {
      piVar4[-4] = 0;
      piVar4[-2] = 0x10;
      if (*piVar4 == 0) {
        *piVar4 = 0;
        FUN_00796cd8(0);
      }
      piVar4[3] = -1;
      piVar4 = (int *)((int)piVar4 + 0x3e);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 0x374) = 0;
    *(undefined1 *)(param_1 + 0x37a) = 0;
    *(undefined1 *)(param_1 + 0x37b) = 1;
    *(undefined1 *)(param_1 + 0xbd4) = 0;
  }
  return 0;
}


