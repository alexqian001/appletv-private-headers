/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRListControl;

__attribute__((visibility("hidden")))
@interface ListAnimationDelegate : XXUnknownSuperclass {
	BRListControl *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x3730a1
- (void).cxx_destruct;	// 0x3731f1
- (void)animationDidStart:(id)animation;	// 0x3731d1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3731e1
- (void)clearScroll;	// 0x373109
- (void)decrementBalance;	// 0x37316d
- (void)incrementBalance;	// 0x37311d
- (BOOL)scrolling;	// 0x3731b9
@end
