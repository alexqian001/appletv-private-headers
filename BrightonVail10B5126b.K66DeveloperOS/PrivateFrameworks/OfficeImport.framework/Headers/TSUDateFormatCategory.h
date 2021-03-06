/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {
	CFDateFormatterRef mInitialFormatter;	// 4 = 0x4
	NSMutableArray *mEntries;	// 8 = 0x8
}
- (id)initWithInitialPattern:(id)initialPattern locale:(CFLocaleRef)locale;	// 0x34ad4631
- (void)addSeparator:(unsigned short)separator format:(id)format locale:(CFLocaleRef)locale;	// 0x34ad4779
- (CFDateRef)createDateFromString:(CFStringRef)string forceAllowAMPM:(BOOL)ampm succesTSUlFormatString:(const CFStringRef *)string3;	// 0x34ad489d
- (void)dealloc;	// 0x34ad4719
- (id)entryForSeparator:(unsigned short)separator;	// 0x34ad4821
@end

