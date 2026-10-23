// FUN_00429ebe @ 429ebe size=226

char * __thiscall FUN_00429ebe(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 local_808 [1024];
  undefined1 local_408 [1024];
  int local_8;
  
  local_8 = FUN_007a8730(param_2,*(undefined4 *)(param_1 + 4));
  if (local_8 == 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  else if (local_8 < 1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_007a630a(local_808,s_Unable_to_find_string_for_tag____0083a724,param_2);
      FUN_00405ad0(local_808);
      pcVar1 = s_UNKNOWN_STRING_WANTED_0083a748;
    }
    else {
      pcVar1 = (char *)FUN_00429ebe(param_2);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_007a630a(local_408,s_Unable_to_find_string_for_tag____0083a6e8,param_2);
    FUN_00405ad0(local_408);
    pcVar1 = s_UNKNOWN_STRING_WANTED_0083a70c;
  }
  else {
    pcVar1 = (char *)FUN_00429ebe(param_2);
  }
  return pcVar1;
}


