// FUN_006eb970 @ 6eb970 size=394

void FUN_006eb970(int param_1,undefined4 param_2,undefined *param_3,undefined *param_4,
                 undefined *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  iVar2 = param_1 * 0x1a;
  if (*(int *)(&DAT_00d36354 + iVar2) == 3) {
    FUN_006ec210(param_1,&DAT_00d3bfd4);
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
  }
  else {
    cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
    if (cVar1 == '\0') {
      return;
    }
    if ((&DAT_00d3635a)[iVar2] == '\0') {
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_5,param_6);
      param_3 = param_4;
      param_4 = param_5;
    }
    else {
      (&DAT_00d3635a)[iVar2] = 0;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      puVar3 = param_4;
      puVar4 = param_5;
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_4,param_5,param_6);
      uVar5 = param_9;
      FUN_00446d10(&param_7);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,0xffffffff,puVar3,puVar4,uVar5);
      (&DAT_00d3635a)[iVar2] = 1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4,param_3,param_4,param_5,param_6);
      param_3 = param_4;
      param_4 = param_5;
    }
  }
  uVar5 = param_9;
  FUN_00446d10(&param_7);
  FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,0xffffffff,param_3,param_4,uVar5);
  return;
}


