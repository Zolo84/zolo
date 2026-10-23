// FUN_00429950 @ 429950 size=168

void FUN_00429950(undefined4 param_1)

{
  undefined4 *puVar1;
  char cStack_7;
  char cStack_6;
  
  if ((DAT_0088faec == 0) &&
     (DAT_0088faec = FUN_007a6615(s_history_txt_0083a5ec,&DAT_0083a5a8), DAT_0088faec == 0)) {
    return;
  }
  if ((DAT_00893750 != 0) && (*(char *)(DAT_00893750 + 0x111) != '\0')) {
    puVar1 = (undefined4 *)FUN_0042e8c0();
    cStack_7 = (char)((uint)*puVar1 >> 8);
    cStack_6 = (char)((uint)*puVar1 >> 0x10);
    FUN_007a6628(DAT_0088faec,s__d__02d__02d___0083a5dc,(int)*(short *)(puVar1 + 1),(int)cStack_6,
                 (int)cStack_7);
  }
  FUN_007a85ed(DAT_0088faec,param_1,&stack0x00000008);
  FUN_007a6628(DAT_0088faec,&DAT_00839650);
  FUN_007a7fb7(DAT_0088faec);
  return;
}


