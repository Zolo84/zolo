// FUN_007b8bfc @ 7b8bfc size=486

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007b8bfc(double param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar1 = FUN_007b2932(0x133f,0xffff);
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = FUN_007b27fa(SUB84(param_1,0),uVar5);
    if (0 < iVar2) {
      if (iVar2 < 3) goto LAB_007b8ca1;
      if (iVar2 == 3) {
        fVar3 = (float10)FUN_007b1ff2();
        return fVar3;
      }
    }
    dVar4 = param_1 + _DAT_007e7828;
    uVar5 = 8;
  }
  else {
    if (param_1 == _DAT_007e3348) {
LAB_007b8ca1:
      FUN_007b2932(uVar1,0xffff);
      return (float10)param_1;
    }
    fVar3 = (float10)FUN_007b2854(SUB84(param_1,0),uVar5,&local_8);
    dVar4 = (double)fVar3;
    local_8 = param_2 + local_8;
    if (local_8 < 0xa01) {
      if (local_8 < 0x401) {
        if (local_8 < -0x9fd) {
          dVar4 = 0.0;
        }
        else {
          if (-0x3fe < local_8) {
            fVar3 = (float10)FUN_007b276d(dVar4,local_8);
            FUN_007b2932(uVar1,0xffff);
            return (float10)(double)fVar3;
          }
          fVar3 = (float10)FUN_007b276d(dVar4,local_8 + 0x600);
          dVar4 = (double)fVar3;
        }
        uVar5 = 0x12;
        goto LAB_007b8db6;
      }
      fVar3 = (float10)FUN_007b276d(dVar4,local_8 + -0x600);
      dVar4 = (double)fVar3;
    }
    else {
      dVar4 = __copysign(_DAT_0087f7b0,dVar4);
    }
    uVar5 = 0x11;
  }
LAB_007b8db6:
  fVar3 = (float10)FUN_007b20ea(uVar5,0x19,param_1,(double)param_2,dVar4,uVar1);
  return fVar3;
}


