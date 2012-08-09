/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"
#import "BRProvider.h"

@class BRTypesetter, NSAttributedString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRScrollingTextTextProvider : XXUnknownSuperclass <BRProvider> {
	BRTypesetter *_typesetter;	// 4 = 0x4
	NSAttributedString *_string;	// 8 = 0x8
	id<BRControlFactory> _factory;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
}
@property(retain) id attributedString;	// G=0x2d601d; S=0x2d5fc5; converted property
+ (id)providerWithAttributedString:(id)attributedString;	// 0x2d5e85
- (id)init;	// 0x2d5ee5
- (void)_updateTypesetter;	// 0x2d60d9
// converted property getter: - (id)attributedString;	// 0x2d601d
- (id)controlFactory;	// 0x2d6085
- (id)dataAtIndex:(long)index;	// 0x2d60b5
- (long)dataCount;	// 0x2d6095
- (void)dealloc;	// 0x2d5f4d
- (id)hashForDataAtIndex:(long)index;	// 0x2d60d5
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2d5fc5
- (void)setTextBoxSize:(CGSize)size;	// 0x2d602d
@end
