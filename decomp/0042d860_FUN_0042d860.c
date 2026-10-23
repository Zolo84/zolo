// FUN_0042d860 @ 42d860 size=229

undefined4 * __fastcall FUN_0042d860(undefined4 *param_1)

{
  char cVar1;
  UINT UVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int local_34;
  CHAR local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00429b00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007e3edc;
  iVar6 = 0x43;
  local_34 = 0x18;
  do {
    FUN_007a630a(local_2c,&DAT_0083b094,iVar6);
    UVar2 = GetDriveTypeA(local_2c);
    if (UVar2 == 5) {
      uVar4 = 0xffffffff;
      pcVar7 = local_2c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pvVar3 = operator_new(~uVar4);
      uVar4 = 0xffffffff;
      param_1[param_1[0x22] + 0x23] = pvVar3;
      pcVar7 = local_2c;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = (char *)param_1[param_1[0x22] + 0x23];
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      param_1[0x22] = param_1[0x22] + 1;
    }
    iVar6 = iVar6 + 1;
    local_34 = local_34 + -1;
    if (local_34 == 0) {
      DAT_0088faf8 = param_1;
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}


