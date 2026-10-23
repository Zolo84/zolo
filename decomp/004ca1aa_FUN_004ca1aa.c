// FUN_004ca1aa @ 4ca1aa size=152

undefined4 FUN_004ca1aa(int param_1,int param_2)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x290) <= local_c) {
      return 0;
    }
    iVar1 = DAT_00ab27b4 + *(int *)(*(int *)(param_1 + 0x298) + local_c * 0xc) * 0x4b2;
    if ((*(int *)(iVar1 + 0x3d8) == param_2) && (*(int *)(iVar1 + 0x482) != 0)) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(iVar1 + 0x482);
}


