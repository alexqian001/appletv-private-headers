/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayout.h"

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout {
@private
	UIDictationView *_dictationView;	// 72 = 0x48
}
+ (float)landscapeHeight;	// 0x359f9009
+ (float)portraitHeight;	// 0x359f8fc1
- (id)initWithFrame:(CGRect)frame;	// 0x359f8e29
- (void)dealloc;	// 0x359f8f75
- (CGRect)dictationLayoutFrameForStandardKeyboardLayoutFrame:(CGRect)standardKeyboardLayoutFrame;	// 0x359f8cdd
- (void)layoutSubviews;	// 0x359f9219
- (void)setFrame:(CGRect)frame;	// 0x359f92b9
- (void)showKeyboardType:(int)type withAppearance:(int)appearance;	// 0x359f9071
- (BOOL)visible;	// 0x359f9051
@end
