// FUN_004ba3f0 @ 4ba3f0 size=138

char __thiscall FUN_004ba3f0(int param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return '\0';
  }
  if (DAT_00dc191b == '\0') {
    if (param_3 != '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x80) + 0x2c))(param_2,0);
      goto LAB_004ba45a;
    }
    uVar3 = 0;
    iVar2 = **(int **)(param_1 + 0x84);
  }
  else if (param_3 == '\0') {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x4a);
    iVar2 = **(int **)(param_1 + 0x84);
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x4a);
    iVar2 = **(int **)(param_1 + 0x80);
  }
  cVar1 = (**(code **)(iVar2 + 0x2c))(param_2,uVar3);
LAB_004ba45a:
  if (cVar1 != '\0') {
    FUN_004b2d20(param_1,param_2,unaff_retaddr);
  }
  return cVar1;
}


