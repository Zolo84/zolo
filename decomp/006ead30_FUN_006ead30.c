// FUN_006ead30 @ 6ead30 size=451

void FUN_006ead30(int param_1,undefined4 param_2,undefined *param_3,undefined *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = param_1 * 0x1a;
  if (*(int *)(&DAT_00d36354 + iVar2) == 3) {
    cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
    if (cVar1 != '\0') {
      DAT_00d40fd4 = param_6;
      DAT_00d40fd8 = param_3;
      if ((&DAT_00d3635a)[iVar2] == '\0') {
        puVar3 = &DAT_00d3bfd4;
        param_3 = &DAT_00d3c7d4;
        FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4);
        param_4 = puVar3;
      }
      else {
        FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4,param_5);
      }
      uVar4 = 0xffffffff;
      FUN_00446d10(&DAT_0088f28c);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_7,param_3,param_4,uVar4);
      return;
    }
  }
  else {
    cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
    if (cVar1 != '\0') {
      if ((&DAT_00d3635a)[iVar2] == '\0') {
        FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_5,param_6);
      }
      else {
        DAT_00d40fd4 = param_6;
        DAT_00d40fd8 = param_3;
        (&DAT_00d3635a)[iVar2] = 0;
        FUN_006ec210(param_1,&DAT_00d3bfd4);
        puVar3 = param_4;
        uVar4 = param_5;
        FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_5,param_6);
        uVar5 = 0xffffffff;
        FUN_00446d10(&DAT_0088f28c);
        FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_7,puVar3,uVar4,uVar5);
        (&DAT_00d3635a)[iVar2] = 1;
        FUN_006ec210(param_1,&DAT_00d3bfd4);
        FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4,param_5,param_6);
      }
      uVar4 = 0xffffffff;
      FUN_00446d10(&DAT_0088f28c);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_7,param_4,param_5,uVar4);
    }
  }
  return;
}


