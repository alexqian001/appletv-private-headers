/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIPopoverController, UIImageView, UIWindow, UILabel, NSAttributedString, NSMutableArray, UIImage, UIToolbar, NSString;
@protocol UIActionSheetDelegate;

@interface UIActionSheet : UIView {
	id<UIActionSheetDelegate> _delegate;	// 84 = 0x54
	UILabel *_titleLabel;	// 88 = 0x58
	NSAttributedString *_attributedTitleString;	// 92 = 0x5c
	UILabel *_subtitleLabel;	// 96 = 0x60
	UILabel *_bodyTextLabel;	// 100 = 0x64
	UILabel *_taglineTextLabel;	// 104 = 0x68
	float _startY;	// 108 = 0x6c
	id _context;	// 112 = 0x70
	int _cancelButton;	// 116 = 0x74
	int _defaultButton;	// 120 = 0x78
	int _firstOtherButton;	// 124 = 0x7c
	UIToolbar *_toolbar;	// 128 = 0x80
	UIWindow *_originalWindow;	// 132 = 0x84
	UIWindow *_dimWindow;	// 136 = 0x88
	int _suspendTag;	// 140 = 0x8c
	int _dismissButtonIndex;	// 144 = 0x90
	float _bodyTextHeight;	// 148 = 0x94
	NSMutableArray *_buttons;	// 152 = 0x98
	NSMutableArray *_buttonsInTable;	// 156 = 0x9c
	NSMutableArray *_textFields;	// 160 = 0xa0
	UIView *_keyboard;	// 164 = 0xa4
	UIView *_table;	// 168 = 0xa8
	UIView *_buttonTableView;	// 172 = 0xac
	UIView *_dimView;	// 176 = 0xb0
	UIPopoverController *_popoverController;	// 180 = 0xb4
	float _fontSizeInTableView;	// 184 = 0xb8
	float _iconOffset;	// 188 = 0xbc
	float _labelOffset;	// 192 = 0xc0
	float _labelWidth;	// 196 = 0xc4
	float _titleWidth;	// 200 = 0xc8
	BOOL _oldIgnoreTapsValue;	// 204 = 0xcc
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned sheetWasShown : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned popupFromPoint : 1;
		unsigned inPopover : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned twoColumnsLayoutMode : 7;
		unsigned threeColumnsLayoutMode : 7;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned useThreePartButtons : 1;
		unsigned useTwoPartButtons : 1;
		unsigned displaySelectedButtonGlyph : 1;
		unsigned indexOfSelectedButton : 7;
		unsigned useCustomSelectedButtonGlyph : 1;
	} _modalViewFlags;	// 205 = 0xcd
	int _actionSheetStyle;	// 216 = 0xd8
	UIImage *_selectedButtonGlyphImage;	// 220 = 0xdc
	UIImage *_selectedButtonGlyphHighlightedImage;	// 224 = 0xe0
	UIImageView *_shadowImageView;	// 228 = 0xe4
}
@property(assign, nonatomic) int actionSheetStyle;	// G=0x30c0a429; S=0x30a67bd5; 
@property(assign) int alertSheetStyle;	// G=0x30c07db5; S=0x30a67c09; converted property
@property(assign) BOOL blocksInteraction;	// G=0x30c07e4d; S=0x30c07e25; converted property
@property(retain) id bodyText;	// G=0x30c0249d; S=0x30c022f9; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x30a68749; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x30a6de21; S=0x30a6878d; 
@property(retain) id context;	// G=0x30c02cf9; S=0x30c02cb5; converted property
@property(retain) id defaultButton;	// G=0x30c02a15; S=0x30c029d5; converted property
@property(assign) int defaultButtonIndex;	// G=0x30c0a415; S=0x30c0a3f9; converted property
@property(assign, nonatomic) id<UIActionSheetDelegate> delegate;	// G=0x30c0a32d; S=0x30a67ff1; 
@property(retain) id destructiveButton;	// G=0x30c02a91; S=0x30c02a51; converted property
@property(assign, nonatomic) int destructiveButtonIndex;	// G=0x30c0a439; S=0x30c0a449; 
@property(assign) BOOL dimsBackground;	// G=0x30c07df1; S=0x30c07dc9; converted property
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;	// G=0x30a6875d; 
@property(readonly, retain) UIView *keyboard;	// G=0x30c02921; converted property
@property(retain) id message;	// G=0x30c0a34d; S=0x30c0a33d; converted property
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x30c0a3a9; 
@property(assign) int numberOfRows;	// G=0x30c07da1; S=0x30c07d89; converted property
@property(assign) BOOL runsModal;	// G=0x30c07e7d; S=0x30c07e65; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x30c03379; S=0x30c0335d; converted property
@property(retain) id subtitle;	// G=0x30c0247d; S=0x30c02401; converted property
@property(assign) int suspendTag;	// G=0x30c07e15; S=0x30c07e05; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x30c03171; S=0x30c03159; converted property
@property(assign) int threeColumnsLayoutMode;	// G=0x30c0a071; S=0x30c0a011; converted property
@property(copy, nonatomic) NSString *title;	// G=0x30a67ec5; S=0x30a67e35; 
@property(assign) int titleMaxLineCount;	// G=0x30c024c5; S=0x30a67d8d; converted property
@property(assign) int twoColumnsLayoutMode;	// G=0x30a6c295; S=0x30c09f65; converted property
@property(assign) BOOL useThreeColumnsButtonsLayout;	// G=0x30a6c1e5; S=0x30c09f9d; converted property
@property(assign) BOOL useTwoColumnsButtonsLayout;	// G=0x30a6c1c9; S=0x30c09ee5; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x30c0a3c9; 
+ (Class)_popoverControllerClass;	// 0x30c0af79
+ (id)_popupAlertBackground;	// 0x30c061d9
+ (CGSize)minimumSize;	// 0x30c01a09
- (id)initWithFrame:(CGRect)frame;	// 0x30a67ac5
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x30c01ab9
- (id)initWithTitle:(id)title delegate:(id)delegate cancelButtonTitle:(id)title3 destructiveButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x30a67961
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x30c0a1f9
- (void)_actionSheetHidingAnimationDidStop:(id)_actionSheetHidingAnimation finished:(id)finished;	// 0x30c05199
- (void)_actionSheetRepresentingAnimationDidStop:(id)_actionSheetRepresentingAnimation finished:(id)finished;	// 0x30c0565d
- (id)_addButtonWithTitle:(id)title;	// 0x30c02af1
- (id)_addButtonWithTitle:(id)title label:(id)label;	// 0x30c02b81
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x30a68225
- (id)_addMediaButtonWithTitle:(id)title iconView:(id)view andTableIconView:(id)view3;	// 0x30c02ba5
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x30a6d6e1
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x30c02845
- (void)_appSuspended:(id)suspended;	// 0x30c07b6d
- (id)_attributedTitleString;	// 0x30c022e9
- (float)_bottomVerticalInset;	// 0x30a6c23d
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x30c03ee9
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x30c03df1
- (id)_buttonAtIndex:(int)index;	// 0x30c02b61
- (void)_buttonClicked:(id)clicked;	// 0x30a6dbd1
- (float)_buttonHeight;	// 0x30a6c20d
- (BOOL)_canShowAlerts;	// 0x30c05d5d
- (void)_cancelAnimated:(BOOL)animated;	// 0x30c05e79
- (void)_cleanupAfterPopupAnimation;	// 0x30c02dd9
- (void)_createBodyTextLabelIfNeeded;	// 0x30c01ed1
- (void)_createSubtitleLabelIfNeeded;	// 0x30c01d21
- (void)_createTaglineTextLabelIfNeeded;	// 0x30c020b5
- (void)_createTitleLabelIfNeeded;	// 0x30a67ef1
- (int)_currentOrientation;	// 0x30c01c59
- (id)_dimView;	// 0x30c07005
- (id)_dimViewWithFrame:(CGRect)frame;	// 0x30a6d0d5
- (BOOL)_dimsBackground;	// 0x30c05d45
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x30c03cd9
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x30c0a091
- (void)_hideActionSheetInsidePopOverAnimated:(BOOL)animated;	// 0x30c05465
- (void)_hideHostingPopOverViewAnimated:(BOOL)animated;	// 0x30c04885
- (BOOL)_isAnimating;	// 0x30c03ef9
- (BOOL)_isHostedByPopOver;	// 0x30c05c9d
- (BOOL)_isInsidePopOverContent;	// 0x30c05c85
- (BOOL)_isSBAlert;	// 0x30c0a1f5
- (void)_keyboardWillHide:(id)_keyboard;	// 0x30c0b229
- (void)_keyboardWillShow:(id)_keyboard;	// 0x30c0af95
- (void)_layoutIfNeeded;	// 0x30c064fd
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x30c064b9
- (float)_maxHeight;	// 0x30c07ed9
- (CGSize)_maxSize;	// 0x30a6bcb9
- (BOOL)_needsKeyboard;	// 0x30c03281
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x30c04261
- (void)_performPopup:(BOOL)popup;	// 0x30c03391
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x30c03f0d
- (void)_popoverHiddingAnimationDidStop:(id)_popoverHiddingAnimation finished:(id)finished;	// 0x30c04579
- (void)_popoverRepresentationAnimationDidStop:(id)_popoverRepresentationAnimation finished:(id)finished;	// 0x30c04ad9
- (void)_presentFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;	// 0x30c0a459
- (void)_presentPopoverInCenterOfWindowForView:(id)view;	// 0x30c0aad1
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x30c067cd
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x30a6c369
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate inView:(id)view;	// 0x30c07061
- (void)_presentViaResponderChain:(id)chain asPopoverFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view withPreferredArrowDirections:(int)preferredArrowDirections passthroughViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;	// 0x30c0aa0d
- (void)_presentViaResponderChainFromYCoordinate:(float)ycoordinate;	// 0x30a6c2ad
- (id)_presentingViewForView:(id)view;	// 0x30a68905
- (id)_relinquishPopoverController;	// 0x30c02d5d
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x30a6e829
- (void)_repopup;	// 0x30c05d11
- (void)_repopupNoAnimation;	// 0x30c05cb5
- (void)_representActionSheetInsidePopOverAnimated:(BOOL)animated;	// 0x30c0569d
- (void)_representHostingPopOverViewAnimated:(BOOL)animated;	// 0x30c04b19
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x30c06215
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x30c01c99
- (void)_setAttributedTitleString:(id)string;	// 0x30c022a5
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x30a68771
- (void)_setupInitialFrame;	// 0x30c05f15
- (void)_setupTitleStyle;	// 0x30a6bde1
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x30c032ad
- (void)_slideSheetOut:(BOOL)anOut;	// 0x30a6e2c1
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x30c05d85
- (float)_titleHorizontalInset;	// 0x30a6c0b1
- (id)_titleLabel;	// 0x30c02c85
- (float)_titleVerticalBottomInset;	// 0x30a6c15d
- (float)_titleVerticalTopInset;	// 0x30a6c0e1
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x30c0813d
// declared property getter: - (int)actionSheetStyle;	// 0x30c0a429
- (int)addButtonWithTitle:(id)title;	// 0x30a681ed
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x30c02b11
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x30c02acd
- (id)addMediaButtonWithTitle:(id)title iconView:(id)view andTableIconView:(id)view3;	// 0x30c02b31
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x30c025a5
// converted property getter: - (int)alertSheetStyle;	// 0x30c07db5
- (CGSize)backgroundSize;	// 0x30c07b31
- (BOOL)becomeFirstResponder;	// 0x30a6d389
// converted property getter: - (BOOL)blocksInteraction;	// 0x30c07e4d
- (int)bodyMaxLineCount;	// 0x30c0258d
// converted property getter: - (id)bodyText;	// 0x30c0249d
- (id)buttonAtIndex:(int)index;	// 0x30c02b41
- (int)buttonCount;	// 0x30c02c95
- (id)buttonTitleAtIndex:(int)index;	// 0x30c0a361
// converted property getter: - (id)buttons;	// 0x30a68749
- (BOOL)canBecomeFirstResponder;	// 0x30a6d3cd
// declared property getter: - (int)cancelButtonIndex;	// 0x30a6de21
// converted property getter: - (id)context;	// 0x30c02cf9
- (void)dealloc;	// 0x30a6e9bd
// converted property getter: - (id)defaultButton;	// 0x30c02a15
// converted property getter: - (int)defaultButtonIndex;	// 0x30c0a415
// declared property getter: - (id)delegate;	// 0x30c0a32d
// converted property getter: - (id)destructiveButton;	// 0x30c02a91
// declared property getter: - (int)destructiveButtonIndex;	// 0x30c0a439
// converted property getter: - (BOOL)dimsBackground;	// 0x30c07df1
- (void)dismiss;	// 0x30c07ae9
- (void)dismissAnimated:(BOOL)animated;	// 0x30c07afd
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x30a6de35
- (void)drawRect:(CGRect)rect;	// 0x30a6d3d1
// declared property getter: - (int)firstOtherButtonIndex;	// 0x30a6875d
- (BOOL)isBodyTextTruncated;	// 0x30c064a1
// declared property getter: - (BOOL)isVisible;	// 0x30c0a3c9
// converted property getter: - (id)keyboard;	// 0x30c02921
- (void)layout;	// 0x30a68b79
- (void)layoutAnimated:(BOOL)animated;	// 0x30c06225
// converted property getter: - (id)message;	// 0x30c0a34d
- (CGSize)minimumSize;	// 0x30c01a55
// declared property getter: - (int)numberOfButtons;	// 0x30c0a3a9
- (int)numberOfLinesInTitle;	// 0x30c07fe9
// converted property getter: - (int)numberOfRows;	// 0x30c07da1
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30c02d09
- (void)popupAlertAnimated:(BOOL)animated;	// 0x30c067b5
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x30c06619
- (void)presentFromBarButtonItem:(id)barButtonItem direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;	// 0x30c0a97d
- (void)presentFromRect:(CGRect)rect inView:(id)view direction:(int)direction allowInteractionWithViews:(id)views backgroundStyle:(int)style animated:(BOOL)animated;	// 0x30c0a9c5
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x30c06aa5
- (void)presentSheetFromBehindView:(id)behindView;	// 0x30c06a91
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x30c09e29
- (void)presentSheetInContentView:(id)contentView;	// 0x30c06bd9
- (void)presentSheetInPopoverView:(id)popoverView;	// 0x30c06ab9
- (void)presentSheetInView:(id)view;	// 0x30a68971
- (void)presentSheetToAboveView:(id)aboveView;	// 0x30c06d51
- (void)removeFromSuperview;	// 0x30a6e7cd
- (BOOL)requiresPortraitOrientation;	// 0x30c01c1d
- (BOOL)resignFirstResponder;	// 0x30a6d1b9
// converted property getter: - (BOOL)runsModal;	// 0x30c07e7d
// declared property setter: - (void)setActionSheetStyle:(int)style;	// 0x30a67bd5
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x30a67c09
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x30c07e25
// converted property setter: - (void)setBodyText:(id)text;	// 0x30c022f9
- (void)setBodyTextMaxLineCount:(int)count;	// 0x30c024d9
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x30a6878d
// converted property setter: - (void)setContext:(id)context;	// 0x30c02cb5
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x30c029d5
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x30c0a3f9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30a67ff1
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x30c02a51
// declared property setter: - (void)setDestructiveButtonIndex:(int)index;	// 0x30c0a449
- (void)setDimView:(id)view;	// 0x30c06fc9
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x30c07dc9
- (void)setInPopover:(BOOL)popover;	// 0x30c09ec1
- (void)setIndexOfSelectedButton:(int)selectedButton;	// 0x30c0a115
// converted property setter: - (void)setMessage:(id)message;	// 0x30c0a33d
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x30c07d89
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x30c07e65
- (void)setSelectedButtonGlyphHighlightedImage:(id)image;	// 0x30c0a1b1
- (void)setSelectedButtonGlyphImage:(id)image;	// 0x30c0a14d
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x30c0335d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x30c02401
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x30c07e05
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x30c03159
- (void)setTaglineText:(id)text;	// 0x30c02385
// converted property setter: - (void)setThreeColumnsLayoutMode:(int)mode;	// 0x30c0a011
// declared property setter: - (void)setTitle:(id)title;	// 0x30a67e35
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x30a67d8d
// converted property setter: - (void)setTwoColumnsLayoutMode:(int)mode;	// 0x30c09f65
// converted property setter: - (void)setUseThreeColumnsButtonsLayout:(BOOL)layout;	// 0x30c09f9d
// converted property setter: - (void)setUseTwoColumnsButtonsLayout:(BOOL)layout;	// 0x30c09ee5
- (void)showFromBarButtonItem:(id)barButtonItem;	// 0x30c0af65
- (void)showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x30c0ad65
- (void)showFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x30c0ae6d
- (void)showFromTabBar:(id)tabBar;	// 0x30c0acb1
- (void)showFromToolbar:(id)toolbar;	// 0x30c0abfd
- (void)showInView:(id)view;	// 0x30a687ad
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x30c03379
// converted property getter: - (id)subtitle;	// 0x30c0247d
// converted property getter: - (int)suspendTag;	// 0x30c07e15
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x30c03171
- (id)tableView;	// 0x30c03189
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30c08381
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30c09dc1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30c08361
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x30c09861
- (id)textField;	// 0x30c02805
- (id)textFieldAtIndex:(int)index;	// 0x30c027b9
- (int)textFieldCount;	// 0x30c027dd
// converted property getter: - (int)threeColumnsLayoutMode;	// 0x30c0a071
// declared property getter: - (id)title;	// 0x30a67ec5
// converted property getter: - (int)titleMaxLineCount;	// 0x30c024c5
- (CGRect)titleRect;	// 0x30c07e91
// converted property getter: - (int)twoColumnsLayoutMode;	// 0x30a6c295
// converted property getter: - (BOOL)useThreeColumnsButtonsLayout;	// 0x30a6c1e5
// converted property getter: - (BOOL)useTwoColumnsButtonsLayout;	// 0x30a6c1c9
@end
