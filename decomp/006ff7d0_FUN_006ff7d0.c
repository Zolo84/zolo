// FUN_006ff7d0 @ 6ff7d0 size=322

int __thiscall FUN_006ff7d0(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  if (*(int **)(param_1 + 0xc) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 4))(param_2);
    if (iVar3 == 1) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
      if (iVar3 == 3) {
        FUN_006cd7a0(*(int *)(param_1 + 0xc) + 0x2e);
        FUN_006cd800();
        *(undefined4 *)(param_1 + 0x17e) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6e);
      }
      piVar2 = *(int **)(param_1 + 0xc);
      if ((char)piVar2[4] == '\0') {
        *(undefined1 *)(param_1 + 0x11) = 0;
        if (piVar2 != (int *)0x0) {
          (**(code **)*piVar2)(1);
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
        iVar3 = *(int *)(param_1 + 0x3a) + -1;
        *(int *)(param_1 + 0x3a) = iVar3;
        FUN_006ff200(*(undefined4 *)(param_1 + 0x12 + iVar3 * 4));
      }
      else {
        iVar3 = (**(code **)(*piVar2 + 0x18))();
        if (iVar3 != 0xe) {
          uVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
          *(undefined4 *)(param_1 + 0x12 + *(int *)(param_1 + 0x3a) * 4) = uVar5;
          *(int *)(param_1 + 0x3a) = *(int *)(param_1 + 0x3a) + 1;
          uVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
          *(undefined1 *)(param_1 + 0x11) = 0;
          if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
          }
          *(undefined4 *)(param_1 + 0xc) = 0;
          FUN_006ff200(uVar5);
          return 3;
        }
        pcVar4 = (char *)(**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
        uVar6 = 0xffffffff;
        do {
          pcVar8 = pcVar4;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar8 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar8;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar4 = pcVar8 + -uVar6;
        pcVar8 = (char *)(param_1 + 0x3e);
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar8 = pcVar8 + 1;
        }
        *(undefined4 *)(param_1 + 0x3a) = 0;
        *(undefined1 *)(param_1 + 0x11) = 0;
        if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      FUN_006cd800();
      return 3;
    }
  }
  return iVar3;
}


