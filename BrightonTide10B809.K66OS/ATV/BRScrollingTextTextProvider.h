/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRTypesetter, NSAttributedString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRScrollingTextTextProvider : XXUnknownSuperclass <BRProvider> {
	BRTypesetter *_typesetter;	// 4 = 0x4
	NSAttributedString *_string;	// 8 = 0x8
	id<BRControlFactory> _factory;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
}
@property(retain) id attributedString;	// G=0x30d719; S=0x30d6c1; converted property
+ (id)providerWithAttributedString:(id)attributedString;	// 0x30d581
- (id)init;	// 0x30d5e1
- (void)_updateTypesetter;	// 0x30d7d5
// converted property getter: - (id)attributedString;	// 0x30d719
- (id)controlFactory;	// 0x30d781
- (id)dataAtIndex:(long)index;	// 0x30d7b1
- (long)dataCount;	// 0x30d791
- (void)dealloc;	// 0x30d649
- (id)hashForDataAtIndex:(long)index;	// 0x30d7d1
// converted property setter: - (void)setAttributedString:(id)string;	// 0x30d6c1
- (void)setTextBoxSize:(CGSize)size;	// 0x30d729
@end

