// FUN_00428d60 @ 428d60 size=187

undefined4 __thiscall FUN_00428d60(int *param_1,int *param_2)

{
  int iVar1;
  
  if (DAT_0088f2d0 != 0) {
    iVar1 = FUN_00429490((short)*param_2,(short)((uint)*(undefined4 *)((int)param_2 + 2) >> 0x10));
    if (iVar1 != 0) {
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(s_Database_Mismatch__type____d___i_0083a548,(short)*param_2,
                     (short)*(undefined4 *)((int)param_2 + 2));
      }
      FUN_00429a00(s_ERROR___Database_Mismatch__type___0083a4fc,(short)*param_2,
                   (short)*(undefined4 *)((int)param_2 + 2));
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
  }
  if (((*(int *)((int)param_1 + 6) != DAT_0088f28e) || ((short)param_1[1] != DAT_0088f28c)) &&
     ((short)param_1[1] != -2)) {
    (**(code **)(*param_1 + 0xc))();
  }
  param_1[1] = *param_2;
  *(short *)(param_1 + 2) = (short)param_2[1];
  FUN_004293b0((short)param_1);
  return 1;
}


