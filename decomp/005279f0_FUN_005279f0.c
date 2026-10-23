// FUN_005279f0 @ 5279f0 size=180

void __thiscall FUN_005279f0(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  
  *param_3 = 0;
  *param_4 = 0;
  piVar3 = *(int **)(param_1 + 4);
joined_r0x00527a0d:
  while( true ) {
    do {
      if (piVar3 == (int *)0x0) {
        return;
      }
      piVar1 = (int *)piVar3[2];
      piVar2 = (int *)*piVar3;
      iVar5 = FUN_0051b230();
      piVar3 = piVar1;
      if ((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) goto LAB_00527a56;
    } while (*(int *)((int)piVar2 + 0x14e) != param_2);
    cVar4 = (**(code **)(*piVar2 + 0x30))();
    if (cVar4 == '\0') break;
    iVar5 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
    *param_4 = *param_4 + iVar5;
  }
  goto LAB_00527a8e;
LAB_00527a56:
  if ((*(int *)((int)piVar2 + 0x14e) == param_2) &&
     (cVar4 = FUN_00523a00(DAT_00d0ca90), cVar4 != '\0')) {
    cVar4 = (**(code **)(*piVar2 + 0x30))();
    if (cVar4 == '\0') {
LAB_00527a8e:
      iVar5 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
      *param_3 = *param_3 + iVar5;
    }
    else {
      iVar5 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
      *param_4 = *param_4 + iVar5;
    }
  }
  goto joined_r0x00527a0d;
}


