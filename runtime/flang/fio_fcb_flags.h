/*
 * Copyright (c) 2017, NVIDIA CORPORATION.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/**
 * \file
 * \brief fio_fcb_flags.h - FIO_FCB flags for access, dispose, blank, status
 *                         and format fields: 
 */

#define FIO_OLD 1 /* values for status */
#define FIO_NEW 2
#define FIO_UNKNOWN 3
#define FIO_SCRATCH 4
#define FIO_REPLACE 5

#define FIO_KEEP 11 /* values for dispose */
#define FIO_DELETE 12

#define FIO_DIRECT 21 /* values for acc(ess) */
#define FIO_SEQUENTIAL 22
#define FIO_STREAM 24

#define FIO_FORMATTED 31 /* values for form(at) */
#define FIO_UNFORMATTED 32

#define FIO_READ 41 /* values for action */
#define FIO_WRITE 42
#define FIO_READWRITE 43

#define FIO_ASIS 51 /* values for position */
#define FIO_REWIND 52
#define FIO_APPEND 53

#define FIO_APOSTROPHE 61 /* values for delim */
#define FIO_QUOTE 62
#define FIO_NONE 63

#define FIO_COMMA 65 /* values for decimal */
#define FIO_POINT 66

#define FIO_UTF_8 67   /* values for encoding */
#define FIO_DEFAULT 68 /* values for encoding */

#define FIO_UP 69 /* values for round */
#define FIO_DOWN 70
/*#define FIO_ZERO*/
#define FIO_NEAREST 71
#define FIO_COMPATIBLE 72
#define FIO_PROCESSOR_DEFINED 73

#define FIO_PLUS 76 /* values for sign */
#define FIO_SUPPRESS 77
/*#define FIO_PROCESSOR_DEFINED*/

#define FIO_ZERO 90 /* values for blank, pad */
#define FIO_NULL 91
#define FIO_YES 92
#define FIO_NO 93
