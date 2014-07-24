/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSGlyphInfo : NSObject <NSCopying, NSCoding> {
	NSString *_baseString;	// 4 = 0x4
}
+ (id)glyphInfoWithCharacterIdentifier:(unsigned)characterIdentifier collection:(unsigned)collection baseString:(id)string;	// 0x32c70401
+ (id)glyphInfoWithGlyph:(unsigned)glyph forFont:(id)font baseString:(id)string;	// 0x32c703b9
+ (id)glyphInfoWithGlyphName:(id)glyphName forFont:(id)font baseString:(id)string;	// 0x32c70335
+ (void)initialize;	// 0x32c7042d
- (id)initWithBaseString:(id)baseString;	// 0x32c70479
- (id)initWithCoder:(id)coder;	// 0x32c70581
- (id)_baseString;	// 0x32c7051d
- (unsigned)_glyphForFont:(id)font baseString:(id)string;	// 0x32c70519
- (unsigned)characterCollection;	// 0x32c70535
- (unsigned)characterIdentifier;	// 0x32c70531
- (Class)classForKeyedArchiver;	// 0x32c70571
- (id)copyWithZone:(NSZone *)zone;	// 0x32c70725
- (void)dealloc;	// 0x32c704cd
- (void)encodeWithCoder:(id)coder;	// 0x32c70539
- (id)glyphName;	// 0x32c7052d
@end
