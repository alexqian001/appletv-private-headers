/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BRFontCache : BRSingleton {
	CGSize _displaySize;	// 4 = 0x4
	NSDictionary *_cache;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x44ce5d
+ (id)singleton;	// 0x44ce4d
- (id)init;	// 0x44ce6d
- (CTFontRef)_createFontForAttributes:(id)attributes;	// 0x44d195
- (id)addRealFontsToAttributedString:(id)attributedString;	// 0x44cf35
- (CTFontRef)createFontForRowHeight:(float)rowHeight fontName:(id)name;	// 0x44d019
- (void)dealloc;	// 0x44cee9
- (void)setDisplaySize:(CGSize)size;	// 0x44d12d
@end
