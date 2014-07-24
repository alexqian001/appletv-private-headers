/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBCacheToken.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBCacheToken_Key : UIKBCacheToken {
	XXUnion_c4D9UC _style;	// 24 = 0x18
	NSString *_cacheDisplayString;	// 28 = 0x1c
	int _displayTypeHint;	// 32 = 0x20
	int _displayRowHint;	// 36 = 0x24
	CGSize _size;	// 40 = 0x28
	int _state;	// 48 = 0x30
	int _clipCorners;	// 52 = 0x34
	BOOL _usesInsets;	// 56 = 0x38
	UIEdgeInsets _displayInsets;	// 60 = 0x3c
}
@property(assign) int displayHint;	// G=0x2f86443d; S=0x2f86444d; converted property
@property(assign) int rowHint;	// G=0x2f86441d; S=0x2f86442d; converted property
@property(assign) CGSize size;	// G=0x2f8643f1; S=0x2f864409; converted property
+ (id)tokenForKey:(id)key style:(XXStruct_Mg33RD)style;	// 0x2f864309
+ (id)tokenForKey:(id)key style:(XXStruct_Mg33RD)style displayInsets:(UIEdgeInsets)insets;	// 0x2f864379
- (id)_initWithKey:(id)key style:(XXStruct_Mg33RD)style displayInsets:(UIEdgeInsets)insets;	// 0x2f864139
- (id)_stringWithAdditionalValues:(id)additionalValues;	// 0x2f86447d
- (void)dealloc;	// 0x2f8642bd
// converted property getter: - (int)displayHint;	// 0x2f86443d
- (BOOL)hasKey;	// 0x2f86445d
// converted property getter: - (int)rowHint;	// 0x2f86441d
// converted property setter: - (void)setDisplayHint:(int)hint;	// 0x2f86444d
// converted property setter: - (void)setRowHint:(int)hint;	// 0x2f86442d
// converted property setter: - (void)setSize:(CGSize)size;	// 0x2f864409
// converted property getter: - (CGSize)size;	// 0x2f8643f1
- (id)string;	// 0x2f8646f1
- (id)stringForRenderFlags:(int)renderFlags lightKeyboard:(BOOL)keyboard;	// 0x2f864705
@end
