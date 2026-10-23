// FUN_00428280 @ 428280 size=301

undefined4 __thiscall FUN_00428280(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  if (uVar1 == 0x11) {
LAB_004282d1:
    if (DAT_0088f2cc == 0) goto LAB_00428365;
    iVar2 = FUN_00429310(uVar1,(short)((uint)*(undefined4 *)(param_2 + 1) >> 0x10));
  }
  else {
    if (((uVar1 != 7) && (uVar1 != 6)) && (uVar1 < 0x1268)) {
      param_1[1] = *(int *)param_2;
      *(ushort *)(param_1 + 2) = param_2[2];
      return 1;
    }
    if (((uVar1 == 0x11) || (uVar1 == 7)) || ((uVar1 == 6 || (0x1267 < uVar1)))) goto LAB_004282d1;
    if ((uVar1 != 4) || (iVar2 = DAT_00ab27b4 + *(int *)(param_2 + 1) * 0x4b2, iVar2 == 0))
    goto LAB_00428365;
    iVar2 = iVar2 + 0xc;
  }
  if (iVar2 != 0) {
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a50(s_Database_Mismatch__type____d___i_0083a4c4,*param_2,
                   (short)*(undefined4 *)(param_2 + 1));
    }
    FUN_00429a00(s_ERROR___Database_Mismatch__type___0083a484,*param_2,
                 (short)*(undefined4 *)(param_2 + 1));
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
LAB_00428365:
  if (((*(int *)((int)param_1 + 6) != DAT_0088f28e) || ((short)param_1[1] != DAT_0088f28c)) &&
     ((short)param_1[1] != -2)) {
    (**(code **)(*param_1 + 0x10))();
  }
  param_1[1] = *(int *)param_2;
  *(ushort *)(param_1 + 2) = param_2[2];
  FUN_00429230((short)param_1);
  return 1;
}


