// FUN_00535c60 @ 535c60 size=67

undefined4 __fastcall FUN_00535c60(int *param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_00534a40();
    if (iVar1 == -2) {
      FUN_007a630a(&DAT_00bcdfe8,s_got_a_parsing_error_at_line__d_00850c60,
                   *(int *)(*param_1 + 0x212) + 1);
      FUN_00405ad0(&DAT_00bcdfe8);
      return 0;
    }
  } while (iVar1 != -1);
  return 0;
}


