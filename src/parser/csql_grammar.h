/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
enum yytokentype
{
  ABSOLUTE_ = 258,
  ACTION = 259,
  ADD = 260,
  ADD_MONTHS = 261,
  AFTER = 262,
  ALL = 263,
  ALLOCATE = 264,
  ALTER = 265,
  AND = 266,
  ANY = 267,
  ARE = 268,
  AS = 269,
  ASC = 270,
  ASSERTION = 271,
  ASYNC = 272,
  AT = 273,
  ATTACH = 274,
  ATTRIBUTE = 275,
  AVG = 276,
  BEFORE = 277,
  BEGIN_ = 278,
  BETWEEN = 279,
  BIGINT = 280,
  BINARY = 281,
  BIT = 282,
  BIT_LENGTH = 283,
  BITSHIFT_LEFT = 284,
  BITSHIFT_RIGHT = 285,
  BLOB_ = 286,
  BOOLEAN_ = 287,
  BOTH_ = 288,
  BREADTH = 289,
  BY = 290,
  CALL = 291,
  CASCADE = 292,
  CASCADED = 293,
  CASE = 294,
  CAST = 295,
  CATALOG = 296,
  CHANGE = 297,
  CHAR_ = 298,
  CHECK = 299,
  CLASS = 300,
  CLASSES = 301,
  CLOB_ = 302,
  CLOSE = 303,
  COALESCE = 304,
  COLLATE = 305,
  COLUMN = 306,
  COMMIT = 307,
  COMP_NULLSAFE_EQ = 308,
  CONNECT = 309,
  CONNECT_BY_ISCYCLE = 310,
  CONNECT_BY_ISLEAF = 311,
  CONNECT_BY_ROOT = 312,
  CONNECTION = 313,
  CONSTRAINT = 314,
  CONSTRAINTS = 315,
  CONTINUE = 316,
  CONVERT = 317,
  CORRESPONDING = 318,
  COUNT = 319,
  CREATE = 320,
  CROSS = 321,
  CURRENT = 322,
  CURRENT_DATE = 323,
  CURRENT_DATETIME = 324,
  CURRENT_TIME = 325,
  CURRENT_TIMESTAMP = 326,
  CURRENT_USER = 327,
  CURSOR = 328,
  CUSTOMFUNC = 329,
  CYCLE = 330,
  DATA = 331,
  DATABASE = 332,
  DATA_TYPE_ = 333,
  Date = 334,
  DATETIME = 335,
  DATETIMETZ = 336,
  DATETIMELTZ = 337,
  DAY_ = 338,
  DAY_MILLISECOND = 339,
  DAY_SECOND = 340,
  DAY_MINUTE = 341,
  DAY_HOUR = 342,
  DB_TIMEZONE = 343,
  DEALLOCATE = 344,
  DECLARE = 345,
  DEFAULT = 346,
  DEFERRABLE = 347,
  DEFERRED = 348,
  DELETE_ = 349,
  DEPTH = 350,
  DESC = 351,
  DESCRIBE = 352,
  DESCRIPTOR = 353,
  DIAGNOSTICS = 354,
  DIFFERENCE_ = 355,
  DISCONNECT = 356,
  DISTINCT = 357,
  DIV = 358,
  DO = 359,
  Domain = 360,
  Double = 361,
  DROP = 362,
  DUPLICATE_ = 363,
  EACH = 364,
  ELSE = 365,
  ELSEIF = 366,
  END = 367,
  ENUM = 368,
  EQUALS = 369,
  ESCAPE = 370,
  EVALUATE = 371,
  EXCEPT = 372,
  EXCEPTION = 373,
  EXEC = 374,
  EXECUTE = 375,
  EXISTS = 376,
  EXTERNAL = 377,
  EXTRACT = 378,
  False = 379,
  FETCH = 380,
  File = 381,
  FIRST = 382,
  FLOAT_ = 383,
  For = 384,
  FORCE = 385,
  FOREIGN = 386,
  FOUND = 387,
  FROM = 388,
  FULL = 389,
  FUNCTION = 390,
  GENERAL = 391,
  GET = 392,
  GLOBAL = 393,
  GO = 394,
  GOTO = 395,
  GRANT = 396,
  GROUP_ = 397,
  HAVING = 398,
  HOUR_ = 399,
  HOUR_MILLISECOND = 400,
  HOUR_SECOND = 401,
  HOUR_MINUTE = 402,
  IDENTITY = 403,
  IF = 404,
  IGNORE_ = 405,
  IMMEDIATE = 406,
  IN_ = 407,
  INDEX = 408,
  INDICATOR = 409,
  INHERIT = 410,
  INITIALLY = 411,
  INNER = 412,
  INOUT = 413,
  INPUT_ = 414,
  INSERT = 415,
  INTEGER = 416,
  INTERNAL = 417,
  INTERSECT = 418,
  INTERSECTION = 419,
  INTERVAL = 420,
  INTO = 421,
  IS = 422,
  ISOLATION = 423,
  JOIN = 424,
  KEY = 425,
  KEYLIMIT = 426,
  LANGUAGE = 427,
  LAST = 428,
  LEADING_ = 429,
  LEAVE = 430,
  LEFT = 431,
  LESS = 432,
  LEVEL = 433,
  LIKE = 434,
  LIMIT = 435,
  LIST = 436,
  LOCAL = 437,
  LOCAL_TRANSACTION_ID = 438,
  LOCALTIME = 439,
  LOCALTIMESTAMP = 440,
  LOOP = 441,
  LOWER = 442,
  MATCH = 443,
  MATCHED = 444,
  Max = 445,
  MERGE = 446,
  METHOD = 447,
  MILLISECOND_ = 448,
  Min = 449,
  MINUTE_ = 450,
  MINUTE_MILLISECOND = 451,
  MINUTE_SECOND = 452,
  MOD = 453,
  MODIFY = 454,
  MODULE = 455,
  Monetary = 456,
  MONTH_ = 457,
  MULTISET = 458,
  MULTISET_OF = 459,
  NA = 460,
  NAMES = 461,
  NATIONAL = 462,
  NATURAL = 463,
  NCHAR = 464,
  NEXT = 465,
  NO = 466,
  NOT = 467,
  Null = 468,
  NULLIF = 469,
  NUMERIC = 470,
  OBJECT = 471,
  OCTET_LENGTH = 472,
  OF = 473,
  OFF_ = 474,
  ON_ = 475,
  ONLY = 476,
  OPEN = 477,
  OPTIMIZATION = 478,
  OPTION = 479,
  OR = 480,
  ORDER = 481,
  OUT_ = 482,
  OUTER = 483,
  OUTPUT = 484,
  OVER = 485,
  OVERLAPS = 486,
  PARAMETERS = 487,
  PARTIAL = 488,
  PARTITION = 489,
  POSITION = 490,
  PRECISION = 491,
  PREPARE = 492,
  PRESERVE = 493,
  PRIMARY = 494,
  PRIOR = 495,
  PRIVILEGES = 496,
  PROCEDURE = 497,
  PROMOTE = 498,
  QUERY = 499,
  READ = 500,
  REBUILD = 501,
  RECURSIVE = 502,
  REF = 503,
  REFERENCES = 504,
  REFERENCING = 505,
  REGEXP = 506,
  RELATIVE_ = 507,
  RENAME = 508,
  REPLACE = 509,
  RESIGNAL = 510,
  RESTRICT = 511,
  RETURN = 512,
  RETURNS = 513,
  REVOKE = 514,
  RIGHT = 515,
  RLIKE = 516,
  ROLE = 517,
  ROLLBACK = 518,
  ROLLUP = 519,
  ROUTINE = 520,
  ROW = 521,
  ROWNUM = 522,
  ROWS = 523,
  SAVEPOINT = 524,
  SCHEMA = 525,
  SCOPE = 526,
  SCROLL = 527,
  SEARCH = 528,
  SECOND_ = 529,
  SECOND_MILLISECOND = 530,
  SECTION = 531,
  SELECT = 532,
  SENSITIVE = 533,
  SEQUENCE = 534,
  SEQUENCE_OF = 535,
  SERIALIZABLE = 536,
  SESSION = 537,
  SESSION_TIMEZONE = 538,
  SESSION_USER = 539,
  SET = 540,
  SET_OF = 541,
  SETEQ = 542,
  SETNEQ = 543,
  SHARED = 544,
  SIBLINGS = 545,
  SIGNAL = 546,
  SIMILAR = 547,
  SIZE_ = 548,
  SmallInt = 549,
  SOME = 550,
  SQL = 551,
  SQLCODE = 552,
  SQLERROR = 553,
  SQLEXCEPTION = 554,
  SQLSTATE = 555,
  SQLWARNING = 556,
  STATISTICS = 557,
  String = 558,
  SUBCLASS = 559,
  SUBSET = 560,
  SUBSETEQ = 561,
  SUBSTRING_ = 562,
  SUM = 563,
  SUPERCLASS = 564,
  SUPERSET = 565,
  SUPERSETEQ = 566,
  SYS_CONNECT_BY_PATH = 567,
  SYS_DATE = 568,
  SYS_DATETIME = 569,
  SYS_TIME_ = 570,
  SYS_TIMESTAMP = 571,
  SYSTEM_USER = 572,
  TABLE = 573,
  TEMPORARY = 574,
  THEN = 575,
  Time = 576,
  TIMESTAMP = 577,
  TIMESTAMPTZ = 578,
  TIMESTAMPLTZ = 579,
  TIMEZONE = 580,
  TIMEZONE_HOUR = 581,
  TIMEZONE_MINUTE = 582,
  TO = 583,
  TRAILING_ = 584,
  TRANSACTION = 585,
  TRANSLATE = 586,
  TRANSLATION = 587,
  TRIGGER = 588,
  TRIM = 589,
  True = 590,
  TRUNCATE = 591,
  UNDER = 592,
  Union = 593,
  UNIQUE = 594,
  UNKNOWN = 595,
  UNTERMINATED_STRING = 596,
  UNTERMINATED_IDENTIFIER = 597,
  UPDATE = 598,
  UPPER = 599,
  USAGE = 600,
  USE = 601,
  USER = 602,
  USING = 603,
  Utime = 604,
  VACUUM = 605,
  VALUE = 606,
  VALUES = 607,
  VAR_ASSIGN = 608,
  VARCHAR = 609,
  VARIABLE_ = 610,
  VARYING = 611,
  VCLASS = 612,
  VIEW = 613,
  WHEN = 614,
  WHENEVER = 615,
  WHERE = 616,
  WHILE = 617,
  WITH = 618,
  WITHOUT = 619,
  WORK = 620,
  WRITE = 621,
  XOR = 622,
  YEAR_ = 623,
  YEAR_MONTH = 624,
  ZONE = 625,
  YEN_SIGN = 626,
  DOLLAR_SIGN = 627,
  WON_SIGN = 628,
  TURKISH_LIRA_SIGN = 629,
  BRITISH_POUND_SIGN = 630,
  CAMBODIAN_RIEL_SIGN = 631,
  CHINESE_RENMINBI_SIGN = 632,
  INDIAN_RUPEE_SIGN = 633,
  RUSSIAN_RUBLE_SIGN = 634,
  AUSTRALIAN_DOLLAR_SIGN = 635,
  CANADIAN_DOLLAR_SIGN = 636,
  BRASILIAN_REAL_SIGN = 637,
  ROMANIAN_LEU_SIGN = 638,
  EURO_SIGN = 639,
  SWISS_FRANC_SIGN = 640,
  DANISH_KRONE_SIGN = 641,
  NORWEGIAN_KRONE_SIGN = 642,
  BULGARIAN_LEV_SIGN = 643,
  VIETNAMESE_DONG_SIGN = 644,
  CZECH_KORUNA_SIGN = 645,
  POLISH_ZLOTY_SIGN = 646,
  SWEDISH_KRONA_SIGN = 647,
  CROATIAN_KUNA_SIGN = 648,
  SERBIAN_DINAR_SIGN = 649,
  DOT = 650,
  RIGHT_ARROW = 651,
  STRCAT = 652,
  COMP_NOT_EQ = 653,
  COMP_GE = 654,
  COMP_LE = 655,
  PARAM_HEADER = 656,
  ACCESS = 657,
  ACTIVE = 658,
  ADDDATE = 659,
  ANALYZE = 660,
  ARCHIVE = 661,
  AUTO_INCREMENT = 662,
  BIT_AND = 663,
  BIT_OR = 664,
  BIT_XOR = 665,
  CACHE = 666,
  CAPACITY = 667,
  CHARACTER_SET_ = 668,
  CHARSET = 669,
  CHR = 670,
  CLOB_TO_CHAR = 671,
  COLLATION = 672,
  COLUMNS = 673,
  COMMENT = 674,
  COMMITTED = 675,
  COST = 676,
  CRITICAL = 677,
  CUME_DIST = 678,
  DATE_ADD = 679,
  DATE_SUB = 680,
  DECREMENT = 681,
  DENSE_RANK = 682,
  ELT = 683,
  EXPLAIN = 684,
  FIRST_VALUE = 685,
  FULLSCAN = 686,
  GE_INF_ = 687,
  GE_LE_ = 688,
  GE_LT_ = 689,
  GRANTS = 690,
  GROUP_CONCAT = 691,
  GROUPS = 692,
  GT_INF_ = 693,
  GT_LE_ = 694,
  GT_LT_ = 695,
  HASH = 696,
  HEADER = 697,
  HEAP = 698,
  IFNULL = 699,
  INACTIVE = 700,
  INCREMENT = 701,
  INDEXES = 702,
  INDEX_PREFIX = 703,
  INF_LE_ = 704,
  INF_LT_ = 705,
  INFINITE_ = 706,
  INSTANCES = 707,
  INVALIDATE = 708,
  ISNULL = 709,
  KEYS = 710,
  KILL = 711,
  JAVA = 712,
  JOB = 713,
  JSON = 714,
  LAG = 715,
  LAST_VALUE = 716,
  LCASE = 717,
  LEAD = 718,
  LOCK_ = 719,
  LOG = 720,
  MAXIMUM = 721,
  MAXVALUE = 722,
  MEDIAN = 723,
  MEMBERS = 724,
  MINVALUE = 725,
  NAME = 726,
  NOCYCLE = 727,
  NOCACHE = 728,
  NOMAXVALUE = 729,
  NOMINVALUE = 730,
  NONE = 731,
  NTH_VALUE = 732,
  NTILE = 733,
  NULLS = 734,
  OFFSET = 735,
  OWNER = 736,
  PAGE = 737,
  PARTITIONING = 738,
  PARTITIONS = 739,
  PASSWORD = 740,
  PERCENT_RANK = 741,
  PERCENTILE_CONT = 742,
  PERCENTILE_DISC = 743,
  PRINT = 744,
  PRIORITY = 745,
  QUARTER = 746,
  QUEUES = 747,
  RANGE_ = 748,
  RANK = 749,
  REJECT_ = 750,
  REMOVE = 751,
  REORGANIZE = 752,
  REPEATABLE = 753,
  RESPECT = 754,
  RETAIN = 755,
  REUSE_OID = 756,
  REVERSE = 757,
  ROW_NUMBER = 758,
  SECTIONS = 759,
  SEPARATOR = 760,
  SERIAL = 761,
  SHOW = 762,
  SLEEP = 763,
  SLOTS = 764,
  SLOTTED = 765,
  STABILITY = 766,
  START_ = 767,
  STATEMENT = 768,
  STATUS = 769,
  STDDEV = 770,
  STDDEV_POP = 771,
  STDDEV_SAMP = 772,
  STR_TO_DATE = 773,
  SUBDATE = 774,
  SYSTEM = 775,
  TABLES = 776,
  TEXT = 777,
  THAN = 778,
  THREADS = 779,
  TIMEOUT = 780,
  TRACE = 781,
  TRAN = 782,
  TRIGGERS = 783,
  UCASE = 784,
  UNCOMMITTED = 785,
  VAR_POP = 786,
  VAR_SAMP = 787,
  VARIANCE = 788,
  VOLUME = 789,
  WEEK = 790,
  WITHIN = 791,
  WORKSPACE = 792,
  TIMEZONES = 793,
  IdName = 794,
  BracketDelimitedIdName = 795,
  BacktickDelimitedIdName = 796,
  DelimitedIdName = 797,
  UNSIGNED_INTEGER = 798,
  UNSIGNED_REAL = 799,
  CHAR_STRING = 800,
  NCHAR_STRING = 801,
  BIT_STRING = 802,
  HEX_STRING = 803,
  CPP_STYLE_HINT = 804,
  C_STYLE_HINT = 805,
  SQL_STYLE_HINT = 806,
  BINARY_STRING = 807,
  EUCKR_STRING = 808,
  ISO_STRING = 809,
  UTF8_STRING = 810
};
#endif


/* Copy the first part of user declarations.  */
#line 26 "../../src/parser/csql_grammar.y"
/*%CODE_REQUIRES_START%*/
#include "parser.h"

/* 
 * The default YYLTYPE structure is extended so that locations can hold
 * context information
 */
typedef struct YYLTYPE
{

  int first_line;
  int first_column;
  int last_line;
  int last_column;
  int buffer_pos;		/* position in the buffer being parsed */

} YYLTYPE;
#define YYLTYPE_IS_DECLARED 1

typedef struct
{
  PT_NODE *c1;
  PT_NODE *c2;
} container_2;

typedef struct
{
  PT_NODE *c1;
  PT_NODE *c2;
  PT_NODE *c3;
} container_3;

typedef struct
{
  PT_NODE *c1;
  PT_NODE *c2;
  PT_NODE *c3;
  PT_NODE *c4;
} container_4;

typedef struct
{
  PT_NODE *c1;
  PT_NODE *c2;
  PT_NODE *c3;
  PT_NODE *c4;
  PT_NODE *c5;
  PT_NODE *c6;
  PT_NODE *c7;
  PT_NODE *c8;
  PT_NODE *c9;
  PT_NODE *c10;
} container_10;

void csql_yyerror_explicit (int line, int column);
void csql_yyerror (const char *s);

extern int g_msg[1024];
extern int msg_ptr;
extern int yybuffer_pos;
/*%CODE_END%*/
#line 88 "../../src/parser/csql_grammar.y"

#define YYMAXDEPTH	1000000

/*#define PARSER_DEBUG*/

#include "config.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>

#include "chartype.h"
#include "parser.h"
#include "parser_message.h"
#include "dbdef.h"
#include "language_support.h"
#include "unicode_support.h"
#include "environment_variable.h"
#include "transaction_cl.h"
#include "csql_grammar_scan.h"
#include "system_parameter.h"
#define JP_MAXNAME 256
#if defined(WINDOWS)
#define snprintf _sprintf_p
#endif /* WINDOWS */
#include "memory_alloc.h"
#include "db_elo.h"

/* Bit mask to be used to check constraints of a column.
 * COLUMN_CONSTRAINT_SHARED_DEFAULT_AI is special-purpose mask
 * to identify duplication of SHARED, DEFAULT and AUTO_INCREMENT.
 */
#define COLUMN_CONSTRAINT_UNIQUE		(0x01)
#define COLUMN_CONSTRAINT_PRIMARY_KEY		(0x02)
#define COLUMN_CONSTRAINT_NULL			(0x04)
#define COLUMN_CONSTRAINT_OTHERS		(0x08)
#define COLUMN_CONSTRAINT_SHARED		(0x10)
#define COLUMN_CONSTRAINT_DEFAULT		(0x20)
#define COLUMN_CONSTRAINT_AUTO_INCREMENT	(0x40)
#define COLUMN_CONSTRAINT_SHARED_DEFAULT_AI	(0x70)
#define COLUMN_CONSTRAINT_COMMENT       (0x80)

#ifdef PARSER_DEBUG
#define DBG_PRINT printf("rule matched at line: %d\n", __LINE__);
#define PRINT_(a) printf(a)
#define PRINT_1(a, b) printf(a, b)
#define PRINT_2(a, b, c) printf(a, b, c)
#else
#define DBG_PRINT
#define PRINT_(a)
#define PRINT_1(a, b)
#define PRINT_2(a, b, c)
#endif

#define STACK_SIZE	128

typedef struct function_map FUNCTION_MAP;
struct function_map
{
  const char *keyword;
  PT_OP_TYPE op;
};


static FUNCTION_MAP functions[] = {
  {"abs", PT_ABS},
  {"acos", PT_ACOS},
  {"addtime", PT_ADDTIME},
  {"asin", PT_ASIN},
  {"atan", PT_ATAN},
  {"atan2", PT_ATAN2},
  {"bin", PT_BIN},
  {"bit_count", PT_BIT_COUNT},
  {"bit_to_blob", PT_BIT_TO_BLOB},
  {"blob_from_file", PT_BLOB_FROM_FILE},
  {"blob_length", PT_BLOB_LENGTH},
  {"blob_to_bit", PT_BLOB_TO_BIT},
  {"ceil", PT_CEIL},
  {"ceiling", PT_CEIL},
  {"char_length", PT_CHAR_LENGTH},
  {"char_to_blob", PT_CHAR_TO_BLOB},
  {"char_to_clob", PT_CHAR_TO_CLOB},
  {"character_length", PT_CHAR_LENGTH},
  {"clob_from_file", PT_CLOB_FROM_FILE},
  {"clob_length", PT_CLOB_LENGTH},
  {"concat", PT_CONCAT},
  {"concat_ws", PT_CONCAT_WS},
  {"cos", PT_COS},
  {"cot", PT_COT},
  {"cume_dist", PT_CUME_DIST},
  {"curtime", PT_CURRENT_TIME},
  {"curdate", PT_CURRENT_DATE},
  {"utc_time", PT_UTC_TIME},
  {"utc_date", PT_UTC_DATE},
  {"datediff", PT_DATEDIFF},
  {"timediff", PT_TIMEDIFF},
  {"date_format", PT_DATE_FORMAT},
  {"dayofmonth", PT_DAYOFMONTH},
  {"dayofyear", PT_DAYOFYEAR},
  {"decode", PT_DECODE},
  {"decr", PT_DECR},
  {"degrees", PT_DEGREES},
  {"drand", PT_DRAND},
  {"drandom", PT_DRANDOM},
  {"exec_stats", PT_EXEC_STATS},
  {"exp", PT_EXP},
  {"field", PT_FIELD},
  {"floor", PT_FLOOR},
  {"from_days", PT_FROMDAYS},
  {"greatest", PT_GREATEST},
  {"groupby_num", PT_GROUPBY_NUM},
  {"incr", PT_INCR},
  {"index_cardinality", PT_INDEX_CARDINALITY},
  {"inst_num", PT_INST_NUM},
  {"instr", PT_INSTR},
  {"instrb", PT_INSTR},
  {"last_day", PT_LAST_DAY},
  {"length", PT_CHAR_LENGTH},
  {"lengthb", PT_CHAR_LENGTH},
  {"least", PT_LEAST},
  {"like_match_lower_bound", PT_LIKE_LOWER_BOUND},
  {"like_match_upper_bound", PT_LIKE_UPPER_BOUND},
  {"list_dbs", PT_LIST_DBS},
  {"locate", PT_LOCATE},
  {"ln", PT_LN},
  {"log2", PT_LOG2},
  {"log10", PT_LOG10},
  {"log", PT_LOG},
  {"lpad", PT_LPAD},
  {"ltrim", PT_LTRIM},
  {"makedate", PT_MAKEDATE},
  {"maketime", PT_MAKETIME},
  {"mid", PT_MID},
  {"months_between", PT_MONTHS_BETWEEN},
  {"new_time", PT_NEW_TIME},
  {"format", PT_FORMAT},
  {"now", PT_CURRENT_DATETIME},
  {"nvl", PT_NVL},
  {"nvl2", PT_NVL2},
  {"orderby_num", PT_ORDERBY_NUM},
  {"percent_rank", PT_PERCENT_RANK},
  {"power", PT_POWER},
  {"pow", PT_POWER},
  {"pi", PT_PI},
  {"radians", PT_RADIANS},
  {"rand", PT_RAND},
  {"random", PT_RANDOM},
  {"repeat", PT_REPEAT},
  {"space", PT_SPACE},
  {"reverse", PT_REVERSE},
  {"round", PT_ROUND},
  {"row_count", PT_ROW_COUNT},
  {"last_insert_id", PT_LAST_INSERT_ID},
  {"rpad", PT_RPAD},
  {"rtrim", PT_RTRIM},
  {"sec_to_time", PT_SECTOTIME},
  {"serial_current_value", PT_CURRENT_VALUE},
  {"serial_next_value", PT_NEXT_VALUE},
  {"sign", PT_SIGN},
  {"sin", PT_SIN},
  {"sqrt", PT_SQRT},
  {"strcmp", PT_STRCMP},
  {"substr", PT_SUBSTRING},
  {"substring_index", PT_SUBSTRING_INDEX},
  {"find_in_set", PT_FINDINSET},
  {"md5", PT_MD5},
/*
 * temporarily block aes_encrypt and aes_decrypt functions until binary string charset is available.
 *
 *  {"aes_encrypt", PT_AES_ENCRYPT},
 *  {"aes_decrypt", PT_AES_DECRYPT},
 */
  {"sha1", PT_SHA_ONE},
  {"sha2", PT_SHA_TWO},
  {"substrb", PT_SUBSTRING},
  {"tan", PT_TAN},
  {"time_format", PT_TIME_FORMAT},
  {"to_char", PT_TO_CHAR},
  {"to_date", PT_TO_DATE},
  {"to_datetime", PT_TO_DATETIME},
  {"to_days", PT_TODAYS},
  {"time_to_sec", PT_TIMETOSEC},
  {"to_number", PT_TO_NUMBER},
  {"to_time", PT_TO_TIME},
  {"to_timestamp", PT_TO_TIMESTAMP},
  {"trunc", PT_TRUNC},
  {"tz_offset", PT_TZ_OFFSET},
  {"unix_timestamp", PT_UNIX_TIMESTAMP},
  {"typeof", PT_TYPEOF},
  {"from_unixtime", PT_FROM_UNIXTIME},
  {"from_tz", PT_FROM_TZ},
  {"weekday", PT_WEEKDAY},
  {"dayofweek", PT_DAYOFWEEK},
  {"version", PT_VERSION},
  {"quarter", PT_QUARTERF},
  {"week", PT_WEEKF},
  {"hex", PT_HEX},
  {"ascii", PT_ASCII},
  {"conv", PT_CONV},
  {"inet_aton", PT_INET_ATON},
  {"inet_ntoa", PT_INET_NTOA},
  {"coercibility", PT_COERCIBILITY},
  {"width_bucket", PT_WIDTH_BUCKET},
  {"trace_stats", PT_TRACE_STATS},
  {"str_to_date", PT_STR_TO_DATE},
  {"to_base64", PT_TO_BASE64},
  {"from_base64", PT_FROM_BASE64},
  {"sys_guid", PT_SYS_GUID},
  {"sleep", PT_SLEEP},
  {"to_datetime_tz", PT_TO_DATETIME_TZ},
  {"to_timestamp_tz", PT_TO_TIMESTAMP_TZ},
  {"utc_timestamp", PT_UTC_TIMESTAMP},
  {"crc32", PT_CRC32},
  {"schema_def", PT_SCHEMA_DEF}
};


static int parser_groupby_exception = 0;




/* xxxnum_check: 0 not allowed, no compatibility check
		 1 allowed, compatibility check (search_condition)
		 2 allowed, no compatibility check (select_list) */
static int parser_instnum_check = 0;
static int parser_groupbynum_check = 0;
static int parser_orderbynum_check = 0;
static int parser_within_join_condition = 0;

/* xxx_check: 0 not allowed
              1 allowed */
static int parser_sysconnectbypath_check = 0;
static int parser_prior_check = 0;
static int parser_connectbyroot_check = 0;
static int parser_serial_check = 1;
static int parser_pseudocolumn_check = 1;
static int parser_subquery_check = 1;
static int parser_hostvar_check = 1;

/* check Oracle style outer-join operator: '(+)' */
static bool parser_found_Oracle_outer = false;

/* check sys_date, sys_time, sys_timestamp, sys_datetime local_transaction_id */
static bool parser_si_datetime = false;
static bool parser_si_tran_id = false;

/* check the condition that the statment is not able to be prepared */
static bool parser_cannot_prepare = false;

/* check the condition that the result of a query is not able to be cached */
static bool parser_cannot_cache = false;

/* check if INCR is used legally */
static int parser_select_level = -1;

/* handle inner increment exprs in select list */
static PT_NODE *parser_hidden_incr_list = NULL;

/* for opt_over_analytic_partition_by */
static bool is_analytic_function = false;

#define PT_EMPTY INT_MAX

#if defined(WINDOWS)
#define inline
#endif


#define TO_NUMBER(a)			((UINTPTR)(a))
#define FROM_NUMBER(a)			((PT_NODE*)(UINTPTR)(a))


#define SET_CONTAINER_2(a, i, j)		a.c1 = i, a.c2 = j
#define SET_CONTAINER_3(a, i, j, k)		a.c1 = i, a.c2 = j, a.c3 = k
#define SET_CONTAINER_4(a, i, j, k, l)		a.c1 = i, a.c2 = j, a.c3 = k, a.c4 = l

#define CONTAINER_AT_0(a)			(a).c1
#define CONTAINER_AT_1(a)			(a).c2
#define CONTAINER_AT_2(a)			(a).c3
#define CONTAINER_AT_3(a)			(a).c4
#define CONTAINER_AT_4(a)			(a).c5
#define CONTAINER_AT_5(a)			(a).c6
#define CONTAINER_AT_6(a)			(a).c7
#define CONTAINER_AT_7(a)			(a).c8
#define CONTAINER_AT_8(a)			(a).c9
#define CONTAINER_AT_9(a)			(a).c10

#define YEN_SIGN_TEXT           "(\0xa1\0xef)"
#define DOLLAR_SIGN_TEXT        "$"
#define WON_SIGN_TEXT           "\\"
#define TURKISH_LIRA_TEXT       "TL"
#define BRITISH_POUND_TEXT      "GBP"
#define CAMBODIAN_RIEL_TEXT     "KHR"
#define CHINESE_RENMINBI_TEXT   "CNY"
#define INDIAN_RUPEE_TEXT       "INR"
#define RUSSIAN_RUBLE_TEXT      "RUB"
#define AUSTRALIAN_DOLLAR_TEXT  "AUD"
#define CANADIAN_DOLLAR_TEXT    "CAD"
#define BRASILIAN_REAL_TEXT     "BRL"
#define ROMANIAN_LEU_TEXT       "RON"
#define EURO_TEXT               "EUR"
#define SWISS_FRANC_TEXT        "CHF"
#define DANISH_KRONE_TEXT       "DKK"
#define NORWEGIAN_KRONE_TEXT    "NOK"
#define BULGARIAN_LEV_TEXT      "BGN"
#define VIETNAMESE_DONG_TEXT    "VND"
#define CZECH_KORUNA_TEXT       "CZK"
#define POLISH_ZLOTY_TEXT       "PLN"
#define SWEDISH_KRONA_TEXT      "SEK"
#define CROATIAN_KUNA_TEXT      "HRK"
#define SERBIAN_DINAR_TEXT      "RSD"

#define PARSER_SAVE_ERR_CONTEXT(node, context) \
  if ((node) && (node)->buffer_pos == -1) \
    { \
     (node)->buffer_pos = context; \
    }

typedef enum
{
  SERIAL_START,
  SERIAL_INC,
  SERIAL_MAX,
  SERIAL_MIN,
  SERIAL_CYCLE,
  SERIAL_CACHE,
} SERIAL_DEFINE;

FUNCTION_MAP *keyword_offset (const char *name);

static PT_NODE *parser_make_expr_with_func (PARSER_CONTEXT * parser,
					    FUNC_TYPE func_code,
					    PT_NODE * args_list);
static PT_NODE *parser_make_link (PT_NODE * list, PT_NODE * node);
static PT_NODE *parser_make_link_or (PT_NODE * list, PT_NODE * node);



static void parser_save_and_set_cannot_cache (bool value);
static void parser_restore_cannot_cache (void);

static void parser_save_and_set_si_datetime (int value);
static void parser_restore_si_datetime (void);

static void parser_save_and_set_si_tran_id (int value);
static void parser_restore_si_tran_id (void);

static void parser_save_and_set_cannot_prepare (bool value);
static void parser_restore_cannot_prepare (void);

static void parser_save_and_set_wjc (int value);
static void parser_restore_wjc (void);

static void parser_save_and_set_ic (int value);
static void parser_restore_ic (void);

static void parser_save_and_set_gc (int value);
static void parser_restore_gc (void);

static void parser_save_and_set_oc (int value);
static void parser_restore_oc (void);

static void parser_save_and_set_sysc (int value);
static void parser_restore_sysc (void);

static void parser_save_and_set_prc (int value);
static void parser_restore_prc (void);

static void parser_save_and_set_cbrc (int value);
static void parser_restore_cbrc (void);

static void parser_save_and_set_serc (int value);
static void parser_restore_serc (void);

static void parser_save_and_set_pseudoc (int value);
static void parser_restore_pseudoc (void);

static void parser_save_and_set_sqc (int value);
static void parser_restore_sqc (void);

static void parser_save_and_set_hvar (int value);
static void parser_restore_hvar (void);

static void parser_save_found_Oracle_outer (void);
static void parser_restore_found_Oracle_outer (void);

static void parser_save_alter_node (PT_NODE * node);
static PT_NODE *parser_get_alter_node (void);

static void parser_save_attr_def_one (PT_NODE * node);
static PT_NODE *parser_get_attr_def_one (void);

static void parser_push_orderby_node (PT_NODE * node);
static PT_NODE *parser_top_orderby_node (void);
static PT_NODE *parser_pop_orderby_node (void);

static void parser_push_select_stmt_node (PT_NODE * node);
static PT_NODE *parser_top_select_stmt_node (void);
static PT_NODE *parser_pop_select_stmt_node (void);
static bool parser_is_select_stmt_node_empty (void);

static void parser_push_hint_node (PT_NODE * node);
static PT_NODE *parser_top_hint_node (void);
static PT_NODE *parser_pop_hint_node (void);
static bool parser_is_hint_node_empty (void);

static void parser_push_join_type (int v);
static int parser_top_join_type (void);
static int parser_pop_join_type (void);

static void parser_save_is_reverse (bool v);
static bool parser_get_is_reverse (void);

static void parser_initialize_parser_context (void);
static PT_NODE *parser_make_date_lang (int arg_cnt, PT_NODE * arg3);
static PT_NODE *parser_make_number_lang (const int argc);
static void parser_remove_dummy_select (PT_NODE ** node);
static int parser_count_list (PT_NODE * list);
static int parser_count_prefix_columns (PT_NODE * list, int *arg_count);

static void resolve_alias_in_expr_node (PT_NODE * node, PT_NODE * list);
static void resolve_alias_in_name_node (PT_NODE ** node, PT_NODE * list);
static char *pt_check_identifier (PARSER_CONTEXT * parser, PT_NODE * p,
				  const char *str, const int str_size);
static PT_NODE *pt_create_char_string_literal (PARSER_CONTEXT * parser,
					       const PT_TYPE_ENUM char_type,
					       const char *str,
					       const INTL_CODESET codeset);
static PT_NODE *pt_create_date_value (PARSER_CONTEXT * parser,
				      const PT_TYPE_ENUM type,
				      const char *str);
static void pt_value_set_charset_coll (PARSER_CONTEXT * parser,
				       PT_NODE * node,
				       const int codeset_id,
				       const int collation_id, bool force);
static void pt_value_set_collation_info (PARSER_CONTEXT * parser,
					 PT_NODE * node, PT_NODE * coll_node);
static void pt_value_set_monetary (PARSER_CONTEXT * parser, PT_NODE * node,
				   const char *str, const char *txt,
				   DB_CURRENCY type);
static PT_MISC_TYPE parser_attr_type;

static bool allow_attribute_ordering;

int parse_one_statement (int state);
static PT_NODE *pt_set_collation_modifier (PARSER_CONTEXT * parser,
					   PT_NODE * node,
					   PT_NODE * coll_node);


#define push_msg(a) _push_msg(a, __LINE__)

void _push_msg (int code, int line);
void pop_msg (void);

char *g_query_string;
int g_query_string_len;
int g_original_buffer_len;


/*
 * The behavior of location propagation when a rule is matched must
 * take into account the context information. The left-side symbol in a rule
 * will have the same context information as the last symbol from its 
 * right side
 */
#define YYLLOC_DEFAULT(Current, Rhs, N)				        \
    do									\
      if (YYID (N))							\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	  (Current).buffer_pos   = YYRHSLOC (Rhs, N).buffer_pos;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	  (Current).buffer_pos   = YYRHSLOC (Rhs, 0).buffer_pos;	\
	}								\
    while (YYID (0))

/* 
 * YY_LOCATION_PRINT -- Print the location on the stream.
 * This macro was not mandated originally: define only if we know
 * we won't break user code: when these are the locations we know.  
 */

#define YY_LOCATION_PRINT(File, Loc)			\
    fprintf (File, "%d.%d-%d.%d",			\
	     (Loc).first_line, (Loc).first_column,	\
	     (Loc).last_line,  (Loc).last_column)



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 597 "../../src/parser/csql_grammar.y"
{
  int number;
  bool boolean;
  PT_NODE *node;
  char *cptr;
  container_2 c2;
  container_3 c3;
  container_4 c4;
  container_10 c10;
}
/* Line 2604 of glr.c.  */
#line 1178 "../../src/parser/csql_grammar.h"
YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{

  int first_line;
  int first_column;
  int last_line;
  int last_column;

} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE csql_yylval;

extern YYLTYPE csql_yylloc;
