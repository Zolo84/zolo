// FUN_00741520 @ 741520 size=149

void __fastcall FUN_00741520(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_007fa188;
  if ((*(int *)((int)param_1 + 0x1e) != 1) && (*(int *)((int)param_1 + 0x1e) != 0x10)) {
    uVar3 = *(undefined4 *)((int)param_1 + 0x22);
    *(undefined4 *)((int)param_1 + 0x22) = 0xffffffff;
    iVar2 = Ordinal_3(uVar3);
    if (iVar2 != 0) {
      uVar3 = Ordinal_111();
      *(undefined4 *)((int)param_1 + 0x36) = uVar3;
      FUN_0074bc80(s_The_socket_should_be_a_closeable_008743d8,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_008743a8,0x2bd);
    }
    *(undefined4 *)((int)param_1 + 0x1e) = 0x10;
  }
  Ordinal_116();
  iVar2 = *(int *)((int)param_1 + 0x12);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  return;
}


