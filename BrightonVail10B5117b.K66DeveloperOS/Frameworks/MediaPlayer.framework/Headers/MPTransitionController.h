/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSMutableSet, UIView, MPViewController, UIViewController;

@interface MPTransitionController : NSObject {
	CFDictionaryRef _observers;	// 4 = 0x4
	float _duration;	// 8 = 0x8
	UIView *_rootView;	// 12 = 0xc
	NSMutableSet *_persistentViewsToFadeOut;	// 16 = 0x10
	NSMutableSet *_viewsToFadeOut;	// 20 = 0x14
	NSMutableSet *_persistentViewsToFadeIn;	// 24 = 0x18
	NSMutableSet *_viewsToFadeIn;	// 28 = 0x1c
	MPViewController *_fromViewController;	// 32 = 0x20
	int _fromInterfaceOrientation;	// 36 = 0x24
	MPViewController *_toViewController;	// 40 = 0x28
	int _toInterfaceOrientation;	// 44 = 0x2c
	UIViewController *_toContainerViewController;	// 48 = 0x30
}
@property(assign, nonatomic) float duration;	// G=0x31d786f1; S=0x31d78701; @synthesize=_duration
@property(assign, nonatomic) int fromInterfaceOrientation;	// G=0x31d78711; S=0x31d78721; @synthesize=_fromInterfaceOrientation
@property(retain, nonatomic) MPViewController *fromViewController;	// G=0x31d78731; S=0x31d78741; @synthesize=_fromViewController
@property(retain, nonatomic) UIView *rootView;	// G=0x31d78751; S=0x31d78761; @synthesize=_rootView
@property(retain, nonatomic) UIViewController *toContainerViewController;	// G=0x31d787b1; S=0x31d787c1; @synthesize=_toContainerViewController
@property(assign, nonatomic) int toInterfaceOrientation;	// G=0x31d78771; S=0x31d78781; @synthesize=_toInterfaceOrientation
@property(retain, nonatomic) MPViewController *toViewController;	// G=0x31d78791; S=0x31d787a1; @synthesize=_toViewController
- (id)init;	// 0x31d779bd
- (void)addObserver:(id)observer didEndSelector:(SEL)selector;	// 0x31d77b45
- (void)addViewToFadeIn:(id)anIn restoreOnPop:(BOOL)pop;	// 0x31d77bb1
- (void)addViewToFadeOut:(id)fadeOut restoreOnPop:(BOOL)pop;	// 0x31d77c81
- (void)dealloc;	// 0x31d77a35
- (void)didFinishTransition:(BOOL)transition;	// 0x31d780ed
// declared property getter: - (float)duration;	// 0x31d786f1
- (void)fadeViewsForRestore:(BOOL)restore;	// 0x31d77d51
// declared property getter: - (int)fromInterfaceOrientation;	// 0x31d78711
// declared property getter: - (id)fromViewController;	// 0x31d78731
- (void)messageObserversWithSuccess:(BOOL)success;	// 0x31d785a1
- (void)performTransition:(unsigned)transition;	// 0x31d780d9
- (void)removeObserver:(id)observer;	// 0x31d77fd5
// declared property getter: - (id)rootView;	// 0x31d78751
// declared property setter: - (void)setDuration:(float)duration;	// 0x31d78701
// declared property setter: - (void)setFromInterfaceOrientation:(int)interfaceOrientation;	// 0x31d78721
// declared property setter: - (void)setFromViewController:(id)viewController;	// 0x31d78741
// declared property setter: - (void)setRootView:(id)view;	// 0x31d78761
// declared property setter: - (void)setToContainerViewController:(id)containerViewController;	// 0x31d787c1
// declared property setter: - (void)setToInterfaceOrientation:(int)interfaceOrientation;	// 0x31d78781
// declared property setter: - (void)setToViewController:(id)viewController;	// 0x31d787a1
// declared property getter: - (id)toContainerViewController;	// 0x31d787b1
// declared property getter: - (int)toInterfaceOrientation;	// 0x31d78771
// declared property getter: - (id)toViewController;	// 0x31d78791
- (void)transition:(unsigned)transition;	// 0x31d7856d
- (void)willBeginTransition:(unsigned)transition;	// 0x31d77ff1
@end

