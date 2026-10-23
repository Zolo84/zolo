// FUN_006e8ae0 @ 6e8ae0 size=124

void __fastcall FUN_006e8ae0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1e) * 0x1a;
  if ((&DAT_00d3635b)[iVar1] == '\0') {
    FUN_0043fcc0(1);
    FUN_0043fc90();
    return;
  }
  if ((&DAT_00d3635f)[iVar1] != '\0') {
    FUN_0043fcc0(4);
    FUN_0043fc90();
    return;
  }
  if ((&DAT_00d3635a)[iVar1] != '\0') {
    FUN_0043fcc0(3);
    FUN_0043fc90();
    return;
  }
  FUN_0043fcc0(2);
  FUN_0043fc90();
  return;
}


