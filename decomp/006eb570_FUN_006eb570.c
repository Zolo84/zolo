// FUN_006eb570 @ 6eb570 size=170

void FUN_006eb570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = 0x6eb585;
  iVar4 = param_1;
  cVar1 = FUN_006ec210(param_1,&DAT_00d3bfd4);
  uVar5 = param_5;
  if (cVar1 != '\0') {
    if ((&DAT_00d3635a)[param_1 * 0x1a] == '\x01') {
      (&DAT_00d3635a)[param_1 * 0x1a] = 0;
      uVar3 = 0x6eb5b6;
      iVar4 = param_1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
      uVar2 = uVar5;
      FUN_00446d10(&param_3);
      FUN_006ebb00(param_1,param_2,&DAT_00d3bfd4,0xffffffff,uVar3,iVar4,uVar2);
      (&DAT_00d3635a)[param_1 * 0x1a] = 1;
      uVar2 = 0x6eb5ef;
      iVar4 = param_1;
      FUN_006ec210(param_1,&DAT_00d3bfd4);
    }
    FUN_00446d10(&param_3);
    FUN_006ebb00(param_1,param_2,&DAT_00d3bfd4,0xffffffff,uVar2,iVar4,uVar5);
  }
  return;
}


