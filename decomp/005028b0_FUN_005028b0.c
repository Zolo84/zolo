// FUN_005028b0 @ 5028b0 size=341

uint __thiscall FUN_005028b0(int param_1,int param_2,int param_3,int param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_2 != 0) {
    iVar5 = param_4;
    if (param_4 < 0) {
      iVar4 = *(int *)(param_1 + 0x13c);
      iVar3 = 0;
      if (0 < iVar4) {
        in_EAX = (int *)(param_1 + 0x9c);
        do {
          if ((in_EAX[-5] == param_2) && (iVar5 = iVar3, *in_EAX == param_3)) break;
          iVar3 = iVar3 + 1;
          in_EAX = in_EAX + 1;
          iVar5 = param_4;
        } while (iVar3 < iVar4);
      }
      if (iVar5 < 0) {
        iVar5 = iVar4 + -1;
      }
    }
    if ((iVar5 < *(int *)(param_1 + 0x13c)) && (-1 < iVar5)) {
      uVar1 = FUN_00789ce0(param_2,param_3);
      FUN_00502a10(uVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        uVar1 = FUN_0044c630(param_2);
        FUN_00502a10(uVar1);
      }
      puVar2 = (undefined4 *)(param_1 + 0x88 + iVar5 * 4);
      *puVar2 = 0;
      *(undefined4 *)(param_1 + 0x9c + iVar5 * 4) = 0;
      *(undefined4 *)(param_1 + 0xb0 + iVar5 * 4) = 0;
      iVar4 = *(int *)(param_1 + 0x13c) + -1;
      *(int *)(param_1 + 0x13c) = iVar4;
      if (iVar5 < iVar4) {
        do {
          iVar5 = iVar5 + 1;
          *puVar2 = puVar2[1];
          puVar2[5] = puVar2[6];
          puVar2[10] = puVar2[0xb];
          puVar2 = puVar2 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x13c));
        *(undefined4 *)(param_1 + 0x88 + *(int *)(param_1 + 0x13c) * 4) = 0;
        *(undefined4 *)(param_1 + 0x9c + *(int *)(param_1 + 0x13c) * 4) = 0;
        *(undefined4 *)(param_1 + 0xb0 + *(int *)(param_1 + 0x13c) * 4) = 0;
      }
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      if (0 < *(int *)(param_1 + 0x13c)) {
        piVar6 = (int *)(param_1 + 0x88);
        while (*(int *)(&DAT_00dc002a + *piVar6 * 4) != 1) {
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 1;
          if (*(int *)(param_1 + 0x13c) <= iVar5) {
            *(undefined1 *)(param_1 + 0x230) = 1;
            return 1;
          }
        }
        *(undefined4 *)(param_1 + 0x2fc) = 0x3f800000;
      }
      *(undefined1 *)(param_1 + 0x230) = 1;
      return 1;
    }
  }
  return (uint)in_EAX & 0xffffff00;
}


