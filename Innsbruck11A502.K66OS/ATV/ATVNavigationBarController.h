/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "ATVNavigationBarPresentationViewDelegate.h"

@class NSArray, BRController, BRControllerStack;

__attribute__((visibility("hidden")))
@interface ATVNavigationBarController : BRViewController <ATVNavigationBarPresentationViewDelegate> {
	BRControllerStack *_controllerStack;	// 104 = 0x68
	BOOL _navigationBarHidden;	// 108 = 0x6c
	NSArray *_viewControllers;	// 112 = 0x70
	BRController *_selectedViewController;	// 116 = 0x74
}
@property(assign, nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;	// G=0xc06c5; S=0xc06d5; @synthesize=_navigationBarHidden
@property(retain, nonatomic) BRController *selectedViewController;	// G=0xc06b5; S=0xc050d; @synthesize=_selectedViewController
@property(copy, nonatomic) NSArray *viewControllers;	// G=0xc0691; S=0xc06a5; @synthesize=_viewControllers
- (void)_stackWentBankrupt;	// 0xc05c1
- (void)_updateControllerStack;	// 0xc0565
- (void)dealloc;	// 0xc00b1
// declared property getter: - (BOOL)isNavigationBarHidden;	// 0xc06c5
- (id)navigationBar;	// 0xc04e5
- (void)navigationBarPresentationViewWillAppear:(id)navigationBarPresentationView;	// 0xc0669
- (void)navigationBarPresentationViewWillDisappear:(id)navigationBarPresentationView;	// 0xc067d
// declared property getter: - (id)selectedViewController;	// 0xc06b5
// declared property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0xc06d5
// declared property setter: - (void)setSelectedViewController:(id)controller;	// 0xc050d
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0xc06a5
- (id)view;	// 0xc018d
// declared property getter: - (id)viewControllers;	// 0xc0691
@end
