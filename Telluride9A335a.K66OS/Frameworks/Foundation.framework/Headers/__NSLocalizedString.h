/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString : NSMutableString {
@private
	NSMutableString *original;	// 4 = 0x4
	NSDictionary *config;	// 8 = 0x8
}
- (id)initWithString:(id)string withFormatConfiguration:(id)formatConfiguration;	// 0x320a3c2d
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x320a3e51
- (const unsigned short *)_fastCharacterContents;	// 0x320a3e3d
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x320a411d
- (void)appendFormat:(id)format;	// 0x320a4069
- (void)appendString:(id)string;	// 0x320a3fc5
- (id)baseString;	// 0x320a3c8d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x320a3cbd
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x320a3dd5
- (id)copyWithZone:(NSZone *)zone;	// 0x320a3e75
- (void)dealloc;	// 0x320a3ce1
- (void)deleteCharactersInRange:(NSRange)range;	// 0x320a4015
- (id)formatConfiguration;	// 0x320a3c7d
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x320a3d41
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x320a3f71
- (BOOL)isEqualToString:(id)string;	// 0x320a3e19
- (unsigned)length;	// 0x320a3c9d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x320a3ec9
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x320a3f1d
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x320a4189
- (void)setString:(id)string;	// 0x320a40cd
- (id)substringFromIndex:(unsigned)index;	// 0x320a3d75
- (id)substringToIndex:(unsigned)index;	// 0x320a3d95
- (id)substringWithRange:(NSRange)range;	// 0x320a3db5
@end
