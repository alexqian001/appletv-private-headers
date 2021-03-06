/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x33154385
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x33154401
- (id)stringByEncodingSlashes;	// 0x331543b9
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x331545f5
- (BOOL)isPathToAppleScript;	// 0x33154441
- (BOOL)isPathToBackupFile;	// 0x33154545
- (BOOL)isPathToICalBookmark;	// 0x33154585
- (BOOL)isPathToICalData;	// 0x33154505
- (BOOL)isPathToVCalData;	// 0x33154481
@end

@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x33154d55
- (BOOL)hasPrefixCaseInsensitive:(id)insensitive;	// 0x33154e0d
- (id)quote;	// 0x331548b9
- (id)safeFilename;	// 0x33154d99
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x33154c11
- (id)trimChar:(unsigned short)aChar;	// 0x33154b31
- (id)trimCommas;	// 0x33154a59
- (id)trimFinalChar:(unsigned short)aChar;	// 0x33154a81
- (id)trimFinalComma;	// 0x331549b1
- (id)trimFirstChar:(unsigned short)aChar;	// 0x33154ae1
- (id)trimFirstComma;	// 0x33154a0d
- (id)trimWhiteSpace;	// 0x33154969
- (id)unquote;	// 0x33154b61
@end

@interface NSString (CalNSStringEmailAddressAdditions)
- (BOOL)hasMailto;	// 0x3315673d
- (BOOL)resemblesEmailAddress;	// 0x3315675d
- (id)stringAddingMailto;	// 0x3315681d
- (id)stringRemovingMailto;	// 0x3315685d
@end

