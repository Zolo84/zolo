// FUN_006ad410 @ 6ad410 size=97

void FUN_006ad410(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = FUN_0042e980();
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x248) + 0xe) + 0xc))();
    FUN_00458570(s_Fleet___d___s__is_deleted__00869664,*(undefined4 *)(param_1 + 0x1a),uVar3);
    piVar1 = *(int **)(param_1 + 500);
    if (piVar1 != (int *)0x0) {
      FUN_00524610(0);
      (**(code **)(*piVar1 + 0x1cc))(param_1);
    }
    FUN_006ad550(10,&LAB_006ade30,param_1);
  }
  return;
}


