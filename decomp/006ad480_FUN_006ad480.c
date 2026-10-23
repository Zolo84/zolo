// FUN_006ad480 @ 6ad480 size=84

void FUN_006ad480(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0042e980();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x248) + 0xe) + 0xc))();
    FUN_00458570(s_air___d___s__is_deleted__00869680,*(undefined4 *)(param_1 + 0x1a),uVar2);
    if (*(int **)(param_1 + 500) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 500) + 0x1bc))(param_1);
    }
    FUN_006ad5c0(0xb,&LAB_006ade50,param_1);
  }
  return;
}


