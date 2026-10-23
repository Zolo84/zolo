// FUN_004ccd60 @ 4ccd60 size=120

int __fastcall FUN_004ccd60(int param_1)

{
  int *piVar1;
  int iVar2;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = *(int **)(param_1 + 4);
  while (local_c != (int *)0x0) {
    piVar1 = (int *)local_c[2];
    iVar2 = *local_c;
    local_c = piVar1;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x28) + 4))();
      local_8 = local_8 + iVar2;
    }
  }
  return local_8;
}


