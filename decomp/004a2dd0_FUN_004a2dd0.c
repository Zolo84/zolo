// FUN_004a2dd0 @ 4a2dd0 size=423

undefined1 __thiscall FUN_004a2dd0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = (**(code **)(*param_2 + 4))();
  if (iVar4 < 2) {
    return 0;
  }
  cVar3 = FUN_005285a0();
  if (cVar3 == '\x01') {
    return 0;
  }
  cVar3 = FUN_0052b0a0();
  if (cVar3 == '\0') {
    return 0;
  }
  cVar3 = FUN_00529cc0();
  if ((cVar3 == '\0') || (iVar4 = FUN_00527b40(), iVar4 <= DAT_00dc1614)) {
    piVar2 = (int *)param_2[1];
    while( true ) {
      if (piVar2 == (int *)0x0) {
        return 1;
      }
      piVar1 = (int *)piVar2[2];
      piVar2 = (int *)*piVar2;
      cVar3 = (**(code **)(*piVar2 + 0x28))();
      if ((((cVar3 != '\0') &&
           (iVar4 = (**(code **)(*piVar2 + 0x10))(), *(int *)(iVar4 + 0x2ae) != 0)) ||
          ((cVar3 = (**(code **)(*piVar2 + 0x28))(), cVar3 != '\0' &&
           (iVar4 = (**(code **)(*piVar2 + 0x10))(), *(int *)(iVar4 + 0x2b2) != 0)))) ||
         (piVar2[0x92] != param_1)) break;
      cVar3 = (**(code **)(*piVar2 + 0x2c))();
      if (cVar3 != '\0') {
        iVar4 = (**(code **)(*piVar2 + 0x14))();
        iVar4 = (**(code **)(**(int **)(iVar4 + 0x2aa) + 4))();
        if (0 < iVar4) {
          return 0;
        }
      }
      cVar3 = (**(code **)(*piVar2 + 0x2c))();
      if (cVar3 != '\0') {
        iVar4 = (**(code **)(*piVar2 + 0x14))();
        iVar4 = (**(code **)(**(int **)(iVar4 + 0x2ae) + 4))();
        if (0 < iVar4) {
          return 0;
        }
      }
      cVar3 = (**(code **)(*piVar2 + 0x30))();
      if (cVar3 != '\0') {
        iVar4 = (**(code **)(*piVar2 + 0x18))();
        iVar4 = (**(code **)(**(int **)(iVar4 + 0x294) + 4))();
        if (0 < iVar4) {
          return 0;
        }
        cVar3 = FUN_00523990();
        if (cVar3 != '\0') {
          iVar4 = param_2[1];
          while (iVar4 != 0) {
            iVar4 = *(int *)(iVar4 + 8);
            cVar3 = FUN_00523990();
            if (cVar3 == '\0') {
              return 0;
            }
          }
        }
      }
      cVar3 = (**(code **)(*(int *)((int)piVar2 + 0x22e) + 8))();
      if (cVar3 == '\0') {
        return 0;
      }
      iVar4 = FUN_00522770();
      if (iVar4 != param_1) {
        return 0;
      }
      cVar3 = (**(code **)(*piVar2 + 0x9c))();
      piVar2 = piVar1;
      if (cVar3 == '\0') {
        return 0;
      }
    }
  }
  return 0;
}


