// FUN_006e9c10 @ 6e9c10 size=52

void FUN_006e9c10(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_00d36366 + param_2 * 0x1a) * 0xc;
  *param_1 = *(undefined4 *)(&DAT_00d36298 + iVar1);
  param_1[1] = *(undefined4 *)(&DAT_00d3629c + iVar1);
  param_1[2] = *(undefined4 *)(&DAT_00d362a0 + iVar1);
  return;
}


