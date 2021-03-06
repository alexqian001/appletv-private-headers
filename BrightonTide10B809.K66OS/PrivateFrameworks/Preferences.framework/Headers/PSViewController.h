/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSController.h"
#import <UIViewController.h> // Unknown library

@class PSSpecifier, PSRootController;

@interface PSViewController : UIViewController <PSController> {
	UIViewController<PSController> *_parentController;	// 196 = 0xc4
	PSRootController *_rootController;	// 200 = 0xc8
	PSSpecifier *_specifier;	// 204 = 0xcc
}
@property(retain) id parentController;	// G=0x352e4fd1; S=0x352e4fc1; converted property
@property(retain) PSRootController *rootController;	// G=0x352e4ff1; S=0x352e4fe1; converted property
@property(retain) PSSpecifier *specifier;	// G=0x352e5091; S=0x352e504d; converted property
- (BOOL)canBeShownFromSuspendedState;	// 0x352e516d
- (void)dealloc;	// 0x352e5001
- (void)didLock;	// 0x352e50e5
- (void)didUnlock;	// 0x352e50ed
- (void)didWake;	// 0x352e50f1
- (void)formSheetViewDidDisappear;	// 0x352e5169
- (void)formSheetViewWillDisappear;	// 0x352e5165
- (void)handleURL:(id)url;	// 0x352e513d
// converted property getter: - (id)parentController;	// 0x352e4fd1
- (void)popupViewDidDisappear;	// 0x352e5161
- (void)popupViewWillDisappear;	// 0x352e515d
- (void)pushController:(id)controller;	// 0x352e50f5
- (id)readPreferenceValue:(id)value;	// 0x352e50bd
// converted property getter: - (id)rootController;	// 0x352e4ff1
// converted property setter: - (void)setParentController:(id)controller;	// 0x352e4fc1
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x352e50a1
// converted property setter: - (void)setRootController:(id)controller;	// 0x352e4fe1
// converted property setter: - (void)setSpecifier:(id)specifier;	// 0x352e504d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x352e5115
// converted property getter: - (id)specifier;	// 0x352e5091
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x352e5171
- (void)suspend;	// 0x352e50e1
- (void)willBecomeActive;	// 0x352e50dd
- (void)willResignActive;	// 0x352e50d9
- (void)willUnlock;	// 0x352e50e9
@end

