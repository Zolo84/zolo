// FUN_006efd90 @ 6efd90 size=427

int __thiscall FUN_006efd90(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = FUN_006ee6e0(param_2);
  if (iVar2 != 0) {
    FUN_00433930();
    return iVar2;
  }
  FUN_005821d0();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x2a) + 4))(param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_00437bf0();
    if (iVar2 == -1) {
      piVar4 = *(int **)(param_1 + 0x1a);
      if (*(char *)((int)piVar4 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar4 + 0x60))();
      *(undefined1 *)((int)piVar4 + 0x86) = 1;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x1a) + 0x50))();
    }
    iVar2 = 0;
    piVar4 = (int *)(param_1 + 0x16);
    do {
      if ((*(char *)(*(int *)(param_1 + 0x2a) + 0x34) != '\0') &&
         ((**(code **)(*(int *)*piVar4 + 4))(param_2), *(char *)(*piVar4 + 0x96) != '\0')) {
        if (iVar2 == 0) {
          cVar1 = FUN_00582170(*DAT_00d12b40 + 0x301,0);
          if (cVar1 != '\0') {
            FUN_005823b0();
            *(undefined4 *)(param_1 + 0x26) = 7;
            return 1;
          }
          if (DAT_00bd1500 == (undefined4 *)0x0) goto LAB_006efea4;
          FUN_0057be80();
        }
        else {
          if (iVar2 != 1) {
            if (iVar2 == 2) {
              *(undefined1 *)(param_1 + 0x10) = 0;
              return 1;
            }
            goto LAB_006efe3c;
          }
          iVar2 = *DAT_00d12b40;
          uVar3 = FUN_00437bf0();
          iVar2 = FUN_00582190(iVar2 + 0x301,uVar3);
          if (iVar2 == 0) {
            *(undefined4 *)(param_1 + 0x26) = 6;
            return 1;
          }
          if (DAT_00bd1500 == (undefined4 *)0x0) goto LAB_006efea4;
          FUN_0057be80();
        }
        if (DAT_00bd1500 != (undefined4 *)0x0) {
          (**(code **)*DAT_00bd1500)(1);
        }
LAB_006efea4:
        DAT_00bd1500 = (undefined4 *)0x0;
        FUN_005820d0();
        FUN_00582270();
        return 3;
      }
LAB_006efe3c:
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < 3);
    iVar2 = 0;
  }
  return iVar2;
}


