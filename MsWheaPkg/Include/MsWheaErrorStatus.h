/** @file -- MsWheaErrorStatus.h

This header file defines MsWheaReport expected/applied invocation components.

Copyright (C) Microsoft Corporation. All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF 
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**/

#ifndef __MS_WHEA_ERROR_STATUS__ 
#define __MS_WHEA_ERROR_STATUS__ 

#define MS_WHEA_EARLY_STORAGE_SUBCLASS  \
                                      0x00CA0000

#define MS_WHEA_ERROR_EARLY_STORAGE_STORE_FULL  \
                                      (EFI_SOFTWARE | MS_WHEA_EARLY_STORAGE_SUBCLASS | EFI_SW_EC_EVENT_LOG_FULL)

/**

 Microsoft WHEA accepted error status type, other types will be ignored

**/
#define MS_WHEA_ERROR_STATUS_TYPE_INFO  (EFI_ERROR_MINOR | EFI_ERROR_CODE)
#define MS_WHEA_ERROR_STATUS_TYPE_FATAL (EFI_ERROR_MAJOR | EFI_ERROR_CODE)

#endif // __MS_WHEA_ERROR_STATUS__ 
