// FUN_005b60c0 @ 5b60c0 size=151

undefined4 FUN_005b60c0(undefined2 param_1)

{
  int iVar1;
  short local_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  iVar1 = FUN_0050b140(param_1);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x2c) == '\0')) &&
     ((&DAT_0089cad8)[*(int *)(iVar1 + 0x16)] != 0)) {
    FUN_0050a420((short)(&DAT_0089cad8)[*(int *)(iVar1 + 0x16)]);
    FUN_005b6420((short)&local_8,(short)iVar1);
    if ((CONCAT22(uStack_4,uStack_6) != DAT_0088f28e) || (local_8 != DAT_0088f28c)) {
      FUN_005b6160(iVar1,local_8,uStack_4);
      FUN_006ad6f0(0x23,&LAB_005b6bc0,(short)*(undefined4 *)(iVar1 + 0x62),
                   (short)*(undefined4 *)(iVar1 + 0x26));
    }
  }
  return 0;
}


