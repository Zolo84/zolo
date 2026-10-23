// FUN_0052ac70 @ 52ac70 size=134

int __thiscall FUN_0052ac70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  
  piVar3 = *(int **)(param_1 + 4);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar3[2];
    piVar2 = (int *)*piVar3;
    iVar5 = (**(code **)(**(int **)(DAT_00ab27b4 + 0x1c2 + piVar2[3] * 0x4b2) + 0x48))
                      (param_2,param_3);
    if (iVar5 != 0) break;
    cVar4 = (**(code **)(*piVar2 + 0x2c))();
    piVar3 = piVar1;
    if (((cVar4 != '\0') && (iVar5 = *(int *)(DAT_00ab27b4 + 0x46a + piVar2[3] * 0x4b2), iVar5 != 0)
        ) && (iVar5 = (**(code **)(*(int *)(iVar5 + 0x30) + 0x48))(param_2,param_3), iVar5 != 0)) {
      return iVar5;
    }
  }
  return iVar5;
}


