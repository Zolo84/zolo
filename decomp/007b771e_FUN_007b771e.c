// FUN_007b771e @ 7b771e size=661

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007b771e(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 local_20;
  int local_c;
  undefined4 local_8;
  
  local_8 = FUN_007b2932();
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) ||
       (((param_4._2_2_ & 0x7ff8) == 0x7ff0 && (((param_4 & 0x7ffff) != 0 || (param_3 != 0)))))) {
      dVar7 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) +
              (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      uVar4 = 8;
      goto LAB_007b7977;
    }
    if (((param_2._2_2_ & 0x7ff8) == 0x7ff8) || ((param_4._2_2_ & 0x7ff8) == 0x7ff8)) {
      fVar3 = (float10)FUN_007b1ff2();
      return fVar3;
    }
  }
  if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) ==
      (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
    FUN_007b2932();
    return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == _DAT_007e3348) {
    if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <=
        (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
      local_20 = -4.94065645841247e-324;
    }
    else {
      local_20 = 4.94065645841247e-324;
    }
  }
  if (((_DAT_007e3348 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) &&
      ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
       (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))) ||
     (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < _DAT_007e3348 &&
      ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
       (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))))) {
    iVar2 = param_1 + -1;
    local_20 = (double)CONCAT44(param_2,iVar2);
    if (param_1 == 0) {
      iVar1 = param_2 - 1;
LAB_007b789c:
      local_20 = (double)CONCAT44(iVar1,(int)local_20);
    }
  }
  else if (((_DAT_007e3348 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))
           && ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
               (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))) ||
          (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < _DAT_007e3348 &&
           ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
            (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))))) {
    iVar2 = param_1 + 1;
    local_20 = (double)CONCAT44(param_2,iVar2);
    if (iVar2 == 0) {
      iVar1 = param_2 + 1;
      goto LAB_007b789c;
    }
  }
  else {
    iVar2 = (int)local_20;
  }
  if ((((ulonglong)local_20 & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)local_20 & 0xfffff00000000) != 0 || (iVar2 != 0)))) {
    fVar3 = (float10)FUN_007b2854(local_20,&local_c);
    fVar3 = (float10)FUN_007b276d((double)fVar3,local_c + 0x600);
    dVar7 = (double)fVar3;
    uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar4 = 0x12;
  }
  else {
    if (((local_20._4_4_ != 0x7ff00000) || (iVar2 != 0)) &&
       ((local_20._4_4_ != -0x100000 || (iVar2 != 0)))) {
      FUN_007b2932();
      return (float10)local_20;
    }
    fVar3 = (float10)FUN_007b2854(local_20,&local_c);
    fVar3 = (float10)FUN_007b276d((double)fVar3,local_c + -0x600);
    dVar7 = (double)fVar3;
    uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar4 = 0x11;
  }
LAB_007b7977:
  fVar3 = (float10)FUN_007b20ea(uVar4,0x26,uVar5,uVar6,dVar7,local_8);
  return fVar3;
}


