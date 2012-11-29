/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiInputController : NSObject {
	int _currentSequence;	// 4 = 0x4
	NSMutableDictionary *_usageHistory;	// 8 = 0x8
	NSMutableArray *_recents;	// 12 = 0xc
	UIKeyboardEmojiCategory *_lastCategory;	// 16 = 0x10
}
@property(readonly, retain) UIKeyboardEmojiCategory *lastCategory;	// G=0x3201b1a1; converted property
@property(retain, nonatomic) UIKeyboardEmojiCategory *lastViewedCategory;	// G=0x3201b6c5; S=0x3201b1b1; @synthesize=_lastCategory
@property(readonly, retain) NSMutableArray *recents;	// G=0x3201b191; converted property
+ (id)activeInputView;	// 0x3201a8c9
+ (Class)classForInputView;	// 0x3201a83d
+ (void)writeEmojiDefaults;	// 0x3201a8d9
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;	// 0x3201a90d
- (id)initWithInputView:(id)inputView;	// 0x3201a94d
- (void)clearAncientHistory;	// 0x3201b279
- (void)dealloc;	// 0x3201ab31
- (id)defaultsDictionary;	// 0x3201b4e1
- (void)emojiUsed:(id)used;	// 0x3201ad31
- (BOOL)isAncientSequence:(int)sequence;	// 0x3201ab95
// converted property getter: - (id)lastCategory;	// 0x3201b1a1
// declared property getter: - (id)lastViewedCategory;	// 0x3201b6c5
// converted property getter: - (id)recents;	// 0x3201b191
- (double)scoreForEmoji:(id)emoji;	// 0x3201ac01
- (double)scoreForSequence:(int)sequence;	// 0x3201abb1
// declared property setter: - (void)setLastViewedCategory:(id)category;	// 0x3201b1b1
@end
