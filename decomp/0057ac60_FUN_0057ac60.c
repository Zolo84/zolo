// FUN_0057ac60 @ 57ac60 size=80

undefined4 __fastcall FUN_0057ac60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x1e) + 0x7c))
                      (*(int **)(param_1 + 0x1e),*(undefined4 *)(param_1 + 0xfe));
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  if (iVar1 == 0) {
    return 1;
  }
  FUN_00405ad0(s_Failed_to_set_primary_surface_pa_008571ac);
  FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x208,iVar1);
  return 0;
}


