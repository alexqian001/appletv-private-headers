/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayout.h"

@class NSMutableDictionary, UIKeyboardSublayout;

@interface UIKeyboardLayoutRoman : UIKeyboardLayout {
	NSMutableDictionary *m_keyedSublayouts;	// 64 = 0x40
	UIKeyboardSublayout *m_activeSublayout;	// 68 = 0x44
	UIKeyboardSublayout *m_deactivatingSublayout;	// 72 = 0x48
	id m_activeSublayoutKey;	// 76 = 0x4c
	int m_activeKeyIndex;	// 80 = 0x50
	UIView *m_activeKeyView;	// 84 = 0x54
	UIView *m_accentedKeyView;	// 88 = 0x58
	int m_returnKeyIndex;	// 92 = 0x5c
	UIView *m_enabledReturnKeyView;	// 96 = 0x60
	UIView *m_disabledReturnKeyView;	// 100 = 0x64
	UIView *m_pressedReturnKeyView;	// 104 = 0x68
	CGPoint m_dragPoint;	// 108 = 0x6c
	int m_preferredTrackingChangeCount;	// 116 = 0x74
	USet *m_accentInfo;	// 120 = 0x78
	USet *m_hasAccents;	// 124 = 0x7c
	id m_spaceTarget;	// 128 = 0x80
	SEL m_spaceAction;	// 132 = 0x84
	SEL m_spaceLongAction;	// 136 = 0x88
	id m_returnTarget;	// 140 = 0x8c
	SEL m_returnAction;	// 144 = 0x90
	SEL m_returnLongAction;	// 148 = 0x94
	id m_deleteTarget;	// 152 = 0x98
	SEL m_deleteAction;	// 156 = 0x9c
	SEL m_deleteLongAction;	// 160 = 0xa0
	BOOL m_shift;	// 164 = 0xa4
	BOOL m_built;	// 165 = 0xa5
	BOOL m_dragged;	// 166 = 0xa6
	BOOL m_dragChangedKey;	// 167 = 0xa7
	BOOL m_mouseDownInMoreKey;	// 168 = 0xa8
	BOOL m_didLongPress;	// 169 = 0xa9
}
@property(readonly, retain) UIKeyboardSublayout *activeSublayout;	// G=0x30244ff1; converted property
@property(readonly, retain) id activeSublayoutKey;	// G=0x30244fe1; converted property
+ (id)availableTopLevelDomains;	// 0x30249cad
+ (id)inputModesPreferringEuroToDollar;	// 0x30245fa5
- (id)initWithFrame:(CGRect)frame;	// 0x30246b81
- (void)activateCompositeKey:(XXStruct_K4qLnD *)key;	// 0x3024ab69
- (void)activateFirstKeyOfType:(unsigned)type;	// 0x302453f5
- (void)activateKey:(XXStruct_K4qLnD *)key;	// 0x302454f5
- (void)activateKeyWithIndex:(unsigned)index;	// 0x30245489
- (XXStruct_K4qLnD *)activeKey;	// 0x302456b5
// converted property getter: - (id)activeSublayout;	// 0x30244ff1
// converted property getter: - (id)activeSublayoutKey;	// 0x30244fe1
- (void)addLocalizedCurrencyKeysToSublayout:(id)sublayout keyboardType:(id)type;	// 0x30244f05
- (void)addSublayout:(id)sublayout forKey:(id)key;	// 0x302459d1
- (id)alternateSublayoutKey:(id)key;	// 0x30245009
- (void)build;	// 0x30244f09
- (id)buildSublayoutForKey:(id)key;	// 0x30245bd1
- (id)buildUIKeyboardLayoutAlphabet;	// 0x30244f0d
- (id)buildUIKeyboardLayoutAlphabetTransparent;	// 0x30245b95
- (id)buildUIKeyboardLayoutAlternate;	// 0x30245ba9
- (id)buildUIKeyboardLayoutEmailAddress;	// 0x30245a55
- (id)buildUIKeyboardLayoutEmailAddressAlt;	// 0x30245a41
- (id)buildUIKeyboardLayoutEmailAddressAltTransparent;	// 0x30245a19
- (id)buildUIKeyboardLayoutEmailAddressTransparent;	// 0x30245a2d
- (id)buildUIKeyboardLayoutMain;	// 0x30245bbd
- (id)buildUIKeyboardLayoutNumberPad;	// 0x30245b1d
- (id)buildUIKeyboardLayoutNumberPadTransparent;	// 0x30245b09
- (id)buildUIKeyboardLayoutNumbers;	// 0x30244f11
- (id)buildUIKeyboardLayoutNumbersTransparent;	// 0x30245b81
- (id)buildUIKeyboardLayoutPhonePad;	// 0x30245b6d
- (id)buildUIKeyboardLayoutPhonePadAlt;	// 0x30245b59
- (id)buildUIKeyboardLayoutPhonePadAltTransparent;	// 0x30245b31
- (id)buildUIKeyboardLayoutPhonePadTransparent;	// 0x30245b45
- (id)buildUIKeyboardLayoutSMSAddressing;	// 0x30245aa5
- (id)buildUIKeyboardLayoutSMSAddressingAlt;	// 0x30245a91
- (id)buildUIKeyboardLayoutSMSAddressingAltTransparent;	// 0x30245a69
- (id)buildUIKeyboardLayoutSMSAddressingTransparent;	// 0x30245a7d
- (id)buildUIKeyboardLayoutURL;	// 0x30245af5
- (id)buildUIKeyboardLayoutURLAlt;	// 0x30245ae1
- (id)buildUIKeyboardLayoutURLAltTransparent;	// 0x30245ab9
- (id)buildUIKeyboardLayoutURLTransparent;	// 0x30245acd
- (id)cacheKeyForKey:(XXStruct_K4qLnD *)key;	// 0x302452b9
- (XXStruct_K4qLnD *)closestKeyWithoutCharging:(CGPoint)charging;	// 0x30249bdd
- (CGRect)compositeFGLongPressFrameForKey:(XXStruct_K4qLnD *)key orientation:(int)orientation;	// 0x30249a85
- (void)confirmAction;	// 0x302460e5
- (void)deactivateActiveKeys;	// 0x3024b36d
- (void)dealloc;	// 0x302497e1
- (void)deleteAction;	// 0x302460a5
- (void)didRotate;	// 0x302451f1
- (BOOL)doesKeyCharging;	// 0x30244e01
- (unsigned)downActionFlagsForKey:(XXStruct_K4qLnD *)key;	// 0x3024984d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3024a82d
- (XXStruct_K4qLnD *)inputKeyboardKeyForKey:(XXStruct_K4qLnD *)key;	// 0x3024a041
- (id)inputStringForKey:(XXStruct_K4qLnD *)key;	// 0x30247c95
- (BOOL)isLongPressedKey:(XXStruct_K4qLnD *)key;	// 0x302452cd
- (BOOL)isShiftKeyBeingHeld;	// 0x30246955
- (BOOL)isShiftKeyPlaneChooser;	// 0x30246931
- (XXStruct_K4qLnD *)keyForPoint:(CGPoint)point;	// 0x302453ad
- (unsigned)keyHitTest:(CGPoint)test;	// 0x3024a8fd
- (int)keyHitTestUniversal:(CGPoint)universal touchStage:(int)stage atTime:(double)time withTouch:(id)touch;	// 0x3024a6d9
- (id)layoutKeyForKeyboardType:(int)keyboardType withAppearance:(int)appearance;	// 0x30244f15
- (void)layoutSubview:(id)subview selectedString:(id)string;	// 0x30245319
- (void)longPressAction;	// 0x302464a1
- (void)nextCandidatesAction;	// 0x30246111
- (id)overlayImageForKey:(XXStruct_K4qLnD *)key;	// 0x30245001
- (BOOL)performReturnAction;	// 0x3024646d
- (void)restoreDefaultsForAllKeys;	// 0x3024613d
- (void)restoreDefaultsForKey:(id)key;	// 0x30246199
- (void)sendStringAction:(id)action forKey:(XXStruct_K4qLnD *)key;	// 0x30249b4d
- (void)setAction:(SEL)action forKey:(id)key;	// 0x30244e5d
- (void)setLabel:(id)label forKey:(id)key;	// 0x30246271
- (void)setLongPressAction:(SEL)action forKey:(id)key;	// 0x30244eb1
- (void)setShift:(BOOL)shift;	// 0x30246675
- (void)setTarget:(id)target forKey:(id)key;	// 0x30244e09
- (BOOL)shouldCacheViewForKey:(XXStruct_K4qLnD *)key;	// 0x30245005
- (BOOL)shouldShowIndicator;	// 0x302469a5
- (void)showKeyboardType:(int)type withAppearance:(int)appearance;	// 0x30246b59
- (void)showKeyboardTypeForKey:(id)key;	// 0x30245731
- (void)showPopupVariantsForKey:(XXStruct_K4qLnD *)key;	// 0x30249cf1
- (Class)sublayoutClassForKeyboardType:(id)keyboardType;	// 0x3024635d
- (id)sublayoutForKey:(id)key;	// 0x30245711
- (void)touchDown:(id)down;	// 0x302490a5
- (void)touchDownWithKey:(XXStruct_K4qLnD *)key atPoint:(CGPoint)point;	// 0x3024a205
- (void)touchDragged:(id)dragged;	// 0x30248c09
- (void)touchUp:(id)up;	// 0x30248451
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30245219
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30245269
- (unsigned)typeForKey:(XXStruct_K4qLnD *)key;	// 0x30244e05
- (unsigned)upActionFlagsForKey:(XXStruct_K4qLnD *)key;	// 0x302463d1
- (void)updateLocalizedKeys;	// 0x302491e9
- (void)updateReturnKey;	// 0x302469c9
- (BOOL)usesAutoShift;	// 0x30246981
- (void)willRotate;	// 0x30245205
@end
