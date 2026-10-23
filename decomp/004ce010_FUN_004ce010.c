// FUN_004ce010 @ 4ce010 size=265

void __fastcall FUN_004ce010(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_40;
  
  piVar1 = *(int **)(param_1 + 4);
  local_40 = (int *)**(undefined4 **)(param_1 + 4);
  while (local_40 != piVar1) {
    piVar2 = (int *)*local_40;
    *(int *)local_40[1] = *local_40;
    *(int *)(*local_40 + 4) = local_40[1];
    FUN_00796cd8(local_40);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    local_40 = piVar2;
  }
  FUN_00796cd8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


