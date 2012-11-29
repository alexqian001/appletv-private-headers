/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSDate.h> // Unknown library


@interface NSDate (WBXMLAdditions)
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e149f5
+ (id)dateWithActiveSyncString:(id)activeSyncString;	// 0x36e14b99
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)yearMonthDay;	// 0x36e14c79
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)activeSyncStringWithoutSeparators;	// 0x36e14be9
+ (BOOL)frontingBasicTypes;	// 0x36e14af1
+ (BOOL)notifyOfUnknownTokens;	// 0x36e14b45
+ (BOOL)parsingLeafNode;	// 0x36e14a49
+ (BOOL)parsingWithSubItems;	// 0x36e14a9d
- (id)activeSyncString;	// 0x36e14cc9
- (id)activeSyncStringForYearMonthDay;	// 0x36e14d61
- (id)activeSyncStringWithoutSeparators;	// 0x36e14d15
@end

@interface NSDate (DataAccessUtils)
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x36e75679
- (id)nearestMidnight;	// 0x36e756a9
- (id)tzDateToDateInGMT:(id)gmt;	// 0x36e75649
@end
