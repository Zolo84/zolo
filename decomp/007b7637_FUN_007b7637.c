// FUN_007b7637 @ 7b7637 size=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007b7637(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar2 = FUN_007b2932(0x133f,0xffff);
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_007b27fa(param_1,(int)((ulonglong)dVar1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_007b2932(uVar2,0xffff);
        return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      }
      if (iVar3 == 3) {
        fVar4 = (float10)FUN_007b1f9e();
        return fVar4;
      }
    }
    dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + _DAT_007e7828;
    uVar5 = 8;
  }
  else {
    if (dVar1 != _DAT_007e3348) {
      FUN_007b2854(param_1,(int)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) >>
                                0x20),&local_8);
      FUN_007b2932(uVar2,0xffff);
      return (float10)(local_8 + -1);
    }
    dVar1 = -_DAT_0087f7b0;
    uVar5 = 4;
  }
  fVar4 = (float10)FUN_007b2052(uVar5,0x25,
                                CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)),dVar1,
                                uVar2);
  return fVar4;
}


