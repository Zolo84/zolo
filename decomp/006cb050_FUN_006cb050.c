// FUN_006cb050 @ 6cb050 size=141

int * __fastcall FUN_006cb050(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = operator_new(0x1e);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 2;
    piVar2[2] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    *(undefined1 *)(piVar2 + 7) = 0;
    piVar2[3] = (int)&PTR_LAB_007e3ac0;
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  iVar4 = 6;
  do {
    param_1 = param_1 + 1;
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *param_1;
      puVar3[1] = 5;
      puVar3[2] = 0;
      puVar3[3] = uVar1;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    (**(code **)(*piVar2 + 0x84))(puVar3);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return piVar2;
}


