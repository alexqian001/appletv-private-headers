/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRListView;

__attribute__((visibility("hidden")))
@interface ListViewAnimationDelegate : XXUnknownSuperclass {
	BRListView *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x38af19
- (void).cxx_destruct;	// 0x38b069
- (void)animationDidStart:(id)animation;	// 0x38b049
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x38b059
- (void)clearScroll;	// 0x38af81
- (void)decrementBalance;	// 0x38afe5
- (void)incrementBalance;	// 0x38af95
- (BOOL)scrolling;	// 0x38b031
@end
