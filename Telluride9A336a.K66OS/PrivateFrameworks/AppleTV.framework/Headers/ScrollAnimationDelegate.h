/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRScrollControl;

__attribute__((visibility("hidden")))
@interface ScrollAnimationDelegate : NSObject {
@private
	BRScrollControl *_scroll;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithScroll:(id)scroll;	// 0x33ab2869
- (void)animationDidStart:(id)animation;	// 0x33ab28d9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33ab2965
- (void)clearScroll;	// 0x33ab28c5
- (BOOL)scrolling;	// 0x33ab28ad
@end
