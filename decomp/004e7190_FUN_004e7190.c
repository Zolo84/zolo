// FUN_004e7190 @ 4e7190 size=265

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e7190(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  
  iVar1 = *(int *)(param_1 + 0x3d4);
  if (iVar1 != 0) {
    cVar4 = (**(code **)(*(int *)(param_2 + 0xe8b2) + 0x24))(*(undefined4 *)(param_1 + 0x12));
    if ((cVar4 == '\0') &&
       (fVar2 = (float)*(int *)(param_1 + 0x1f2) * _DAT_00dc1850 + _DAT_00dc184c,
       *(float *)(param_1 + 0x21e) = fVar2, DAT_0087758c < fVar2)) {
      *(float *)(param_1 + 0x21e) = DAT_0087758c;
    }
  }
  if (*(int *)(param_1 + 0x3d4) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x3d4) + 0xe88e) + 0x18))
              (*(undefined4 *)(param_1 + 0x1be));
  }
  *(int *)(param_1 + 0x3d4) = param_2;
  if (param_2 != 0) {
    cVar4 = (**(code **)(*(int *)(param_2 + 0xe88e) + 0x24))(*(undefined4 *)(param_1 + 0x1be));
    if (cVar4 == '\0') {
      FUN_0049a100(*(undefined4 *)(param_1 + 0x1be));
    }
  }
  if (iVar1 == *(int *)(param_1 + 0x3d8)) {
    FUN_004e7300(param_2,0);
  }
  iVar3 = DAT_00893530;
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)(param_1 + 0x3cc) = *(undefined2 *)(iVar3 + 0x18);
  FUN_005278a0();
  if (iVar1 != 0) {
    FUN_006ad820(0x1a,&LAB_004ee610,iVar1,param_1);
  }
  return;
}


