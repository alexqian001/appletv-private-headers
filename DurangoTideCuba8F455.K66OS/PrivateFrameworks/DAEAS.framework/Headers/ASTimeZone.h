/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSTimeZone.h> // Unknown library
#import "DAEAS-Structs.h"
#import "ASParsingLeafNode.h"


@interface ASTimeZone : NSTimeZone <ASParsingLeafNode> {
	int _gmtOffset;	// 4 = 0x4
	int _dstOffset;	// 8 = 0x8
	SYSTEMTIME *_standardDate;	// 12 = 0xc
	SYSTEMTIME *_daylightDate;	// 16 = 0x10
	NSTimeZone *_wrappedTimeZone;	// 20 = 0x14
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x34348915
+ (BOOL)expectsContent;	// 0x343475b9
+ (BOOL)frontingBasicTypes;	// 0x3434883d
+ (id)gmt;	// 0x343487b1
+ (BOOL)notifyOfUnknownTokens;	// 0x343487f5
+ (BOOL)parsingLeafNode;	// 0x343488cd
+ (BOOL)parsingWithSubItems;	// 0x34348885
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x343493b5
- (id)initWithCodingDict:(id)codingDict;	// 0x34348c4d
- (id)initWithName:(id)name;	// 0x343475e9
- (id)initWithName:(id)name data:(id)data;	// 0x343475bd
- (id)initWithTZNameFromCalDB:(id)calDB;	// 0x34348719
- (id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)minutes firstTransitionDate:(SYSTEMTIME *)date secondTransitionDate:(SYSTEMTIME *)date3;	// 0x34347fe5
- (id)_bestGuessedNameFromPossibilities:(id)possibilities firstTransitionDate:(SYSTEMTIME *)date secondTransitionDate:(SYSTEMTIME *)date3;	// 0x3434895d
- (BOOL)_dateIsValidTransitionDate:(id)date inYear:(int)year outDaylightBias:(int *)bias;	// 0x343477d1
- (BOOL)_dateIsValidTransitionDate:(id)date inYear:(int)year withTimeZone:(id)timeZone;	// 0x343485f1
- (SYSTEMTIME)_ruleForDate:(id)date;	// 0x34348e61
- (id)abbreviationForDate:(id)date;	// 0x34347771
- (id)data;	// 0x34347791
- (id)dateForRule:(SYSTEMTIME *)rule inYear:(int)year;	// 0x34347df5
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x34347949
- (void)dealloc;	// 0x34348df5
- (id)description;	// 0x34347f41
- (id)dictForCoding;	// 0x34347615
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x34347a31
- (XXStruct_wS5jrA *)mallocTZIForDate:(id)date;	// 0x3434909d
- (id)name;	// 0x343477b1
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x34347751
- (int)parsingState;	// 0x343475b5
- (int)secondsFromGMTForDate:(id)date;	// 0x34347bfd
@end

