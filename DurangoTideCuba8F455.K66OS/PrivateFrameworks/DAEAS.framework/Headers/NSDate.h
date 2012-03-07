/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSDate.h> // Unknown library


@interface NSDate (WBXMLAdditions)
+ (BOOL)acceptsTopLevelLeaves;	// 0x34340c41
+ (id)dateWithActiveSyncString:(id)activeSyncString;	// 0x34340add
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)yearMonthDay;	// 0x34340a25
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)activeSyncStringWithoutSeparators;	// 0x34340a69
+ (BOOL)frontingBasicTypes;	// 0x34340b69
+ (BOOL)notifyOfUnknownTokens;	// 0x34340b21
+ (BOOL)parsingLeafNode;	// 0x34340bf9
+ (BOOL)parsingWithSubItems;	// 0x34340bb1
- (id)activeSyncString;	// 0x343409dd
- (id)activeSyncStringForYearMonthDay;	// 0x3434094d
- (id)activeSyncStringWithoutSeparators;	// 0x34340995
@end

@interface NSDate (DataAccessUtils)
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x3438fd69
- (id)nearestMidnight;	// 0x3438fd41
- (id)tzDateToDateInGMT:(id)gmt;	// 0x3438fd95
@end
