/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRListControl;

__attribute__((visibility("hidden")))
@interface ListAnimationDelegate : NSObject {
@private
	BRListControl *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x33079675
- (void)animationDidStart:(id)animation;	// 0x33079765
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33079775
- (void)clearScroll;	// 0x330796b9
- (void)decrementBalance;	// 0x3307970d
- (void)incrementBalance;	// 0x330796cd
- (BOOL)scrolling;	// 0x3307974d
@end
