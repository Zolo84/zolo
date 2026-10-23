// FUN_00584cb0 @ 584cb0 size=124

void __fastcall FUN_00584cb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar4 = 0;
  piVar5 = *(int **)(*(int *)(param_1 + 0x22) + 4);
  if (piVar5 != (int *)0x0) {
    do {
      iVar1 = *piVar5;
      if ((&DAT_0089cad8)[iVar1] == 0) {
        uVar2 = FUN_004af700(iVar1,*(undefined4 *)(param_1 + 0xe));
        FUN_00429a00(s_ERROR___Non_existing_country__ta_00857974,uVar2);
      }
      else {
        iVar3 = *(int *)((&DAT_0089cad8)[iVar1] + 0x3954);
        if ((&DAT_00dc0fd4)[iVar1] != 0) {
          iVar3 = iVar3 + 100;
        }
        if (iVar4 < iVar3) {
          iVar4 = iVar3;
          iVar6 = iVar1;
        }
        piVar5 = (int *)piVar5[2];
      }
    } while (piVar5 != (int *)0x0);
    if (iVar6 != 0) {
      (**(code **)(**(int **)(param_1 + 0x22) + 0x18))(iVar6);
      FUN_005859a0(iVar6);
    }
  }
  return;
}


