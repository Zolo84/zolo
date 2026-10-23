// FUN_0079bcb2 @ 79bcb2 size=33

uint FUN_0079bcb2(byte param_1,undefined4 param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = FUN_0079b652(param_2,0,1);
  uVar2 = (uint3)((uint)*(int *)(iVar1 + 0x10) >> 8);
  return CONCAT31(uVar2 >> 2,
                  (char)(CONCAT31(uVar2,*(undefined1 *)(*(int *)(iVar1 + 0x10) + (uint)param_1 * 2))
                        >> 2)) & 0xffffff01;
}


