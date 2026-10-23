// FUN_004aafd0 @ 4aafd0 size=107

void __thiscall FUN_004aafd0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = (**(code **)(*param_2 + 8))();
  switch(uVar3) {
  case 0x19:
  case 0x1a:
  case 0x4d:
    (**(code **)(**(int **)(param_1 + 0x12da) + 4))(param_2);
    return;
  default:
    iVar4 = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x4508);
    while ((puVar2 != (undefined4 *)0x0 && (iVar4 == 0))) {
      puVar1 = (undefined4 *)puVar2[2];
      iVar4 = (**(code **)(*(int *)*puVar2 + 4))(param_2);
      puVar2 = puVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x12da) + 4))(param_2);
switchD_004aafef_caseD_4b:
    return;
  case 0x4b:
    goto switchD_004aafef_caseD_4b;
  }
}


