// FUN_007b819a @ 7b819a size=74

int FUN_007b819a(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_00dc54b0 = 1;
                    /* WARNING: Could not recover jumptable at 0x007b81b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_00dc54b0 = 1;
                    /* WARNING: Could not recover jumptable at 0x007b81c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00dc5228;
  }
  DAT_00dc54b0 = (uint)bVar2;
  return param_1;
}


