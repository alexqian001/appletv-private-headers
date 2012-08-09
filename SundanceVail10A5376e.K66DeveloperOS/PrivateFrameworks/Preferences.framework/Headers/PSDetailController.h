/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSViewController.h"
#import "Preferences-Structs.h"

@class PSEditingPane;

@interface PSDetailController : PSViewController {
	PSEditingPane *_pane;	// 208 = 0xd0
}
@property(assign, nonatomic) PSEditingPane *pane;	// G=0x35e0d7b9; S=0x35e0d705; 
- (void)dealloc;	// 0x35e0d44d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x35e0d6e5
- (void)loadView;	// 0x35e0d359
// declared property getter: - (id)pane;	// 0x35e0d7b9
- (CGRect)paneFrame;	// 0x35e0d4ad
- (void)saveChanges;	// 0x35e0da21
// declared property setter: - (void)setPane:(id)pane;	// 0x35e0d705
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x35e0db21
- (void)suspend;	// 0x35e0daa9
- (void)viewDidAppear:(BOOL)view;	// 0x35e0d9d5
- (void)viewDidUnload;	// 0x35e0d3e9
- (void)viewWillAppear:(BOOL)view;	// 0x35e0d7c9
- (void)viewWillDisappear:(BOOL)view;	// 0x35e0dab9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x35e0d5e1
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x35e0d581
@end
