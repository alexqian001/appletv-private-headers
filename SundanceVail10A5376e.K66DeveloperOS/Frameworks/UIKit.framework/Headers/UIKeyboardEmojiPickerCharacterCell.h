/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class NSArray, UIKeyboardEmojiInputController, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPickerCharacterCell : UITableViewCell {
	NSArray *_characters;	// 300 = 0x12c
	NSString *_emojiString;	// 304 = 0x130
	UIKeyboardEmojiInputController *_inputController;	// 308 = 0x134
	UIView *_pressIndicator;	// 312 = 0x138
}
@property(retain) NSArray *characters;	// G=0x30656ccd; S=0x30656cdd; 
@property(assign) UIKeyboardEmojiInputController *inputController;	// G=0x30657385; S=0x30657399; @synthesize=_inputController
@property(retain) UIView *pressIndicator;	// G=0x306573b1; S=0x306573c5; @synthesize=_pressIndicator
+ (CFDictionaryRef)emojiFontAttributes;	// 0x30656a81
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x30656b85
// declared property getter: - (id)characters;	// 0x30656ccd
- (void)dealloc;	// 0x30656c45
- (void)drawRect:(CGRect)rect;	// 0x30656e19
// declared property getter: - (id)inputController;	// 0x30657385
// declared property getter: - (id)pressIndicator;	// 0x306573b1
// declared property setter: - (void)setCharacters:(id)characters;	// 0x30656cdd
// declared property setter: - (void)setInputController:(id)controller;	// 0x30657399
// declared property setter: - (void)setPressIndicator:(id)indicator;	// 0x306573c5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30656f3d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30657215
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30657271
@end
