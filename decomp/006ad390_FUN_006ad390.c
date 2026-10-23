// FUN_006ad390 @ 6ad390 size=113

void FUN_006ad390(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  cVar2 = FUN_0042e980();
  if (cVar2 != '\0') {
    piVar3 = (int *)FUN_0051b230();
    iVar1 = *(int *)(param_1 + 0x248);
    uVar4 = (**(code **)(*piVar3 + 0xc))();
    uVar4 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(*(undefined4 *)(param_1 + 0x1a),uVar4);
    FUN_00458570(s__s__Army___d_is_deleted_in__s__00869644,uVar4);
    piVar3 = *(int **)(param_1 + 500);
    if (piVar3 != (int *)0x0) {
      FUN_00524610(0);
      (**(code **)(*piVar3 + 0x1ac))(param_1);
    }
    FUN_006ad4e0(9,&LAB_006ade90,param_1);
  }
  return;
}


