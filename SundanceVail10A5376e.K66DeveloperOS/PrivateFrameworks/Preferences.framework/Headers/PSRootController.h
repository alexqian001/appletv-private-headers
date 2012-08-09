/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSController.h"
#import "UINavigationControllerDelegate.h"
#import <UINavigationController.h> // Unknown library

@class PSSpecifier, NSMutableSet;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {
	PSSpecifier *_specifier;	// 288 = 0x120
	NSMutableSet *_tasks;	// 292 = 0x124
	BOOL _deallocating;	// 296 = 0x128
	unsigned char _hasTelephony;	// 297 = 0x129
}
@property(readonly, assign) BOOL deallocating;	// G=0x35e0f6d5; converted property
@property(retain) id parentController;	// G=0x35e0f8d9; S=0x35e0ef15; converted property
@property(retain) id rootController;	// G=0x35e0f8e1; S=0x35e0f8dd; converted property
@property(retain) PSSpecifier *specifier;	// G=0x35e0ef5d; S=0x35e0ef19; converted property
+ (BOOL)processedBundle:(id)bundle parentController:(id)controller parentSpecifier:(id)specifier bundleControllers:(id *)controllers settings:(id)settings;	// 0x35e0f8e5
+ (id)readPreferenceValue:(id)value;	// 0x35e0e8f9
+ (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x35e0e859
+ (void)writePreference:(id)preference;	// 0x35e0e671
- (id)initWithTitle:(id)title identifier:(id)identifier;	// 0x35e0eb29
- (void)_delayedControllerReleaseAfterPop:(id)pop;	// 0x35e11559
- (void)addTask:(id)task;	// 0x35e0ed9d
- (id)aggregateDictionaryPath;	// 0x35e0fe21
- (BOOL)busy;	// 0x35e0eead
- (BOOL)canBeShownFromSuspendedState;	// 0x35e11555
- (id)contentViewForTopController;	// 0x35e0eed9
- (void)dealloc;	// 0x35e0f6e5
// converted property getter: - (BOOL)deallocating;	// 0x35e0f6d5
- (void)didDismissFormSheetView;	// 0x35e114f1
- (void)didDismissPopupView;	// 0x35e11429
- (void)didLock;	// 0x35e0f4f5
- (void)didUnlock;	// 0x35e0f5e5
- (void)didWake;	// 0x35e0f65d
- (void)handleURL:(id)url;	// 0x35e0efdd
- (void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;	// 0x35e11b4d
// converted property getter: - (id)parentController;	// 0x35e0f8d9
- (id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;	// 0x35e117f1
- (id)popToViewController:(id)viewController animated:(BOOL)animated;	// 0x35e116c1
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x35e11645
- (void)pushController:(id)controller;	// 0x35e0ef6d
- (id)readPreferenceValue:(id)value;	// 0x35e0eb0d
// converted property getter: - (id)rootController;	// 0x35e0f8e1
- (void)sendWillBecomeActive;	// 0x35e0f3f1
- (void)sendWillResignActive;	// 0x35e0f365
// converted property setter: - (void)setParentController:(id)controller;	// 0x35e0ef15
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x35e0e8dd
// converted property setter: - (void)setRootController:(id)controller;	// 0x35e0f8dd
// converted property setter: - (void)setSpecifier:(id)specifier;	// 0x35e0ef19
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x35e11921
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;	// 0x35e0efe1
// converted property getter: - (id)specifier;	// 0x35e0ef5d
- (id)specifiers;	// 0x35e0ef0d
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x35e0ef11
- (void)statusBarWillChangeHeight:(id)statusBar;	// 0x35e0f169
- (void)suspend;	// 0x35e0f47d
- (void)taskFinished:(id)finished;	// 0x35e0edf5
- (BOOL)taskIsRunning:(id)running;	// 0x35e0ed79
- (id)tasksDescription;	// 0x35e0ec75
- (void)willBecomeActive;	// 0x35e0f361
- (void)willDismissFormSheetView;	// 0x35e1148d
- (void)willDismissPopupView;	// 0x35e113c5
- (void)willResignActive;	// 0x35e0f35d
- (void)willUnlock;	// 0x35e0f56d
@end
