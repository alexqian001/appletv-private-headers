/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmoji : NSObject {
	NSString *emojiString;	// 4 = 0x4
	unsigned short _glyph;	// 8 = 0x8
}
@property(retain) NSString *emojiString;	// G=0x32d8320d; S=0x32d83221; @synthesize
@property(assign) unsigned short glyph;	// G=0x32d83231; S=0x32d83249; @synthesize=_glyph
@property(readonly, assign) NSString *key;	// G=0x32d831c1; 
+ (id)emojiWithString:(id)string;	// 0x32d83121
- (id)initWithString:(id)string;	// 0x32d830c5
- (void)dealloc;	// 0x32d83169
// declared property getter: - (id)emojiString;	// 0x32d8320d
// declared property getter: - (unsigned short)glyph;	// 0x32d83231
- (BOOL)isEqual:(id)equal;	// 0x32d831d1
// declared property getter: - (id)key;	// 0x32d831c1
// declared property setter: - (void)setEmojiString:(id)string;	// 0x32d83221
// declared property setter: - (void)setGlyph:(unsigned short)glyph;	// 0x32d83249
@end
