// FUN_004c1b40 @ 4c1b40 size=172

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_004c1b40(float *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bee58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426120(param_2);
  local_4 = 0;
  iVar2 = 0x10;
  pfVar1 = param_1;
  do {
    iVar4 = 5;
    pfVar3 = pfVar1;
    do {
      FUN_004264e0(&param_2);
      *pfVar3 = param_2 * _DAT_007e543c;
      FUN_004264e0(&param_2);
      pfVar3[0x10] = param_2;
      pfVar3 = pfVar3 + 0x20;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pfVar1 = pfVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 0xffffffff;
  FUN_004262d0();
  ExceptionList = local_c;
  return param_1;
}


