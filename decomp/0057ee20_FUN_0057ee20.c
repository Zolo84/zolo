// FUN_0057ee20 @ 57ee20 size=341

int * FUN_0057ee20(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *local_168;
  uint local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [4];
  undefined4 *local_150 [79];
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8cab;
  pvStack_c = ExceptionList;
  piVar5 = (int *)0x0;
  ExceptionList = &pvStack_c;
  FUN_00426f50(param_1);
  local_4 = 0;
  pvVar2 = operator_new(local_14);
  FUN_004271a0(pvVar2,local_14);
  cVar1 = FUN_0057ef80(pvVar2,local_154,local_150,&local_158);
  if (cVar1 != '\0') {
    piVar5 = (int *)FUN_0057eca0(&local_158,param_2);
    if (piVar5 != (int *)0x0) {
      local_168 = (undefined4 *)0x0;
      local_160 = 0;
      iVar3 = (**(code **)(*piVar5 + 0x2c))
                        (piVar5,0,local_158,&local_168,&local_164,&local_160,&local_15c,0);
      if (iVar3 == 0) {
        puVar6 = local_168;
        for (uVar4 = local_164 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *local_150[0];
          local_150[0] = local_150[0] + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = local_164 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)local_150[0];
          local_150[0] = (undefined4 *)((int)local_150[0] + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        iVar3 = (**(code **)(*piVar5 + 0x4c))(piVar5,local_168,local_164,local_160,local_15c);
        if (iVar3 == 0) goto LAB_0057ef3b;
        uVar7 = 0x198;
      }
      else {
        uVar7 = 400;
      }
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_008572bc,uVar7,iVar3);
      piVar5 = (int *)0x0;
    }
  }
LAB_0057ef3b:
  FUN_00796cd8(pvVar2);
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = pvStack_c;
  return piVar5;
}


