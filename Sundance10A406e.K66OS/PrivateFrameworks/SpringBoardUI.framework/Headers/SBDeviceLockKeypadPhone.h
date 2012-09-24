/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoardUI-Structs.h"

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad {
	UIButton *_emergencyCallButton;	// 172 = 0xac
	UIButton *_poundButton;	// 176 = 0xb0
	UIImage *_deleteIcon;	// 180 = 0xb4
}
@property(assign) BOOL showsEmergencyCallButton;	// G=0x370836f1; S=0x37083709; converted property
+ (id)keypadImage;	// 0x370838e5
+ (id)pressedImage;	// 0x3708390d
- (id)initWithFrame:(CGRect)frame;	// 0x37083461
- (void)_updateCancelAndDeleteButtons;	// 0x37083985
- (float)_yFudge;	// 0x370836ed
- (BOOL)cancelKeyChar;	// 0x3708394d
- (void)dealloc;	// 0x37083675
- (BOOL)deleteKeyChar;	// 0x37083935
- (BOOL)emergencyKeyChar;	// 0x37083965
- (void)setDeleteEnabled:(BOOL)enabled;	// 0x370838a5
// converted property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x37083709
// converted property getter: - (BOOL)showsEmergencyCallButton;	// 0x370836f1
@end
