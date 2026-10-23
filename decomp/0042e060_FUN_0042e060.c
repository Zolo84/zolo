// FUN_0042e060 @ 42e060 size=212

void __thiscall FUN_0042e060(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  uVar1 = *param_1;
  local_8._2_1_ = (char)((uint)uVar1 >> 0x10);
  local_8._1_1_ = (char)((uint)uVar1 >> 8);
  local_8._0_1_ = (char)uVar1;
  iVar2 = (((((((int)*(short *)(param_1 + 1) - (int)*(short *)(param_3 + 4)) * 0xc - (int)param_3[2]
              ) + (int)local_8._2_1_) * 0x1e - (int)param_3[1]) + (int)local_8._1_1_) * 0x18 -
          (int)*param_3) + (int)(char)local_8;
  iVar3 = iVar2 % 0x21c0;
  local_8._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
  iVar4 = iVar3 % 0x2d0;
  local_8 = CONCAT31(CONCAT21(CONCAT11(local_8._3_1_,
                                       (char)(iVar3 / 0x2d0) - (char)(iVar3 / -0x4c000000)),
                              ((char)(iVar4 / 0x18) + (char)(iVar4 >> 0x1f)) -
                              (char)((longlong)iVar4 * 0x2aaaaaab >> 0x3f)),(char)(iVar4 % 0x18));
  *param_2 = local_8;
  *(short *)(param_2 + 1) = (short)(iVar2 / 0x21c0) - (short)(iVar2 / -0x79000000);
  return;
}


