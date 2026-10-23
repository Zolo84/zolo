// FUN_0057eca0 @ 57eca0 size=182

uint __thiscall FUN_0057eca0(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  LPCSTR lpCaption;
  LPCSTR lpText;
  int iVar3;
  UINT uType;
  undefined4 local_24 [4];
  undefined4 local_14;
  uint uStack_8;
  
  puVar2 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_24[0] = 0x24;
  local_24[1] = 0x80e2;
  if (param_3 == 1) {
    local_24[1] = 0x80ea;
  }
  local_24[2] = *param_2;
  local_14 = param_2[1];
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    if (DAT_00bd0564 == '\0') {
      uType = 0x1000;
      lpCaption = (LPCSTR)FUN_0042b6c9(s_ERROR_SOUND_NAME_00857304);
      lpText = (LPCSTR)FUN_0042b6c9(s_ERROR_SOUND_DESC_008572f0);
      MessageBoxA((HWND)0x0,lpText,lpCaption,uType);
    }
    DAT_00bd0564 = 1;
    return 0;
  }
  iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,local_24,&param_3,0);
  return ~-(uint)(iVar3 != 0) & uStack_8;
}


