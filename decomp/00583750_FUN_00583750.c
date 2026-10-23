// FUN_00583750 @ 583750 size=146

undefined4 * __thiscall FUN_00583750(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_007eaf3c;
  puVar2 = &DAT_00bd1960;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_2 == 0) {
    DAT_00bd1bb8 = FUN_00583a30();
  }
  DAT_00bd1528 = FUN_00413d60(s_palette_act_0083b438);
  DAT_00bd152c = FUN_0057a5d0();
  DAT_00bd1ba4 = operator_new(DAT_00bd152c * 0xc);
  FUN_0057a600(DAT_00bd1ba4);
  FUN_007a78e3(DAT_00bd1ba4,DAT_00bd152c,0xc,&LAB_00583980);
  return param_1;
}


