// FUN_006eaa80 @ 6eaa80 size=250

void FUN_006eaa80(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
  if (cVar1 != '\0') {
    if ((&DAT_00d3635a)[param_1 * 0x1a] == '\0') {
      param_3 = &DAT_00d3bfd4;
      puVar2 = &DAT_00d3c7d4;
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4);
    }
    else {
      (&DAT_00d3635a)[param_1 * 0x1a] = 0;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      puVar3 = &DAT_00d3bfd4;
      puVar2 = &DAT_00d3c7d4;
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4);
      uVar4 = 0xffffffff;
      FUN_00446d10(&DAT_0088f28c);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_5,puVar2,puVar3,uVar4);
      (&DAT_00d3635a)[param_1 * 0x1a] = 1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      puVar2 = &DAT_00d3bfd4;
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4);
    }
    uVar4 = 0xffffffff;
    FUN_00446d10(&DAT_0088f28c);
    FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_5,puVar2,param_3,uVar4);
  }
  return;
}


