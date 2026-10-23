// FUN_0057ae50 @ 57ae50 size=42

uint FUN_0057ae50(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00405ad0(s_Surface_unlock_failed__0082ee20);
    return uVar2 & 0xffffff00;
  }
  return 1;
}


