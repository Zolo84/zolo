// FUN_0051c3a0 @ 51c3a0 size=212

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_0051c3a0(int *param_1,undefined4 param_2,char param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_8;
  
  local_8 = 0.0;
  if (*(undefined4 **)((int)param_1 + 0x26) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)((int)param_1 + 0x26);
    do {
      puVar1 = (undefined4 *)puVar5[2];
      fVar6 = (float10)(**(code **)(*(int *)*puVar5 + 0x2c))
                                 (param_3 == '\0',param_2,param_4,param_5);
      local_8 = (float)(fVar6 + (float10)local_8);
      puVar5 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') {
    iVar3 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    iVar4 = FUN_0050a580();
    if (iVar3 <= iVar4) {
      fVar6 = (float10)FUN_00509fb0();
      local_8 = (float)((fVar6 * (float10)_DAT_00877244 + (float10)_DAT_007e3374) * (float10)local_8
                       );
    }
  }
  fVar6 = (float10)FUN_0076bbb0(param_1[0x92],5);
  return (fVar6 + (float10)_DAT_007e3374) * (float10)local_8;
}


