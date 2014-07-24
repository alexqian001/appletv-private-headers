/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRFocusContainer.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRResponder.h"

@class NSObject;
@protocol BREventDelegate;

__attribute__((visibility("hidden")))
@interface BRControl : XXUnknownSuperclass <BRFocusContainer, BRResponder> {
	BOOL _useUIViewAnimations;	// 50 = 0x32
	BRControl *_defaultFocus;	// 52 = 0x34
	BRControl *_focusedControl;	// 56 = 0x38
	BRControl *_keyEventTargetControl;	// 60 = 0x3c
	BOOL _acceptsFocus;	// 64 = 0x40
	BOOL _focused;	// 65 = 0x41
	BOOL _controlActive;	// 66 = 0x42
	BOOL _inhibitsFocusForChildren;	// 67 = 0x43
	BOOL _inhibitsScrollFocusForChildren;	// 68 = 0x44
	NSObject<BREventDelegate> *_brEventDelegate;	// 72 = 0x48
	BOOL _focusByDirectionEnabled;	// 76 = 0x4c
	XXStruct_qlg9jA _focusCursorHaloAdjustment;	// 80 = 0x50
	BOOL _ignoreDirectionalInfoForFocus;	// 84 = 0x54
	id _eventHandlerBlock;	// 88 = 0x58
	BRControl *__previousFocus;	// 92 = 0x5c
}
@property(retain, nonatomic) BRControl *_previousFocus;	// G=0x2cc745; S=0x2cc755; @synthesize=__previousFocus
@property(assign) BOOL acceptsFocus;	// G=0x2cd74d; S=0x2cd709; converted property
@property(assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x2d6555; S=0x2d65a9; 
@property(assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x2d64c5; S=0x2d6519; 
@property(retain) id actions;	// G=0x2cdaa9; S=0x2cda7d; converted property
@property(assign) CGPoint anchorPoint;	// G=0x2cc795; S=0x2cc765; converted property
@property(assign) BOOL avoidsCursor;	// G=0x2cd81d; S=0x2cd7d9; converted property
@property(assign) CGColorRef borderColor;	// G=0x2cd2e1; S=0x2cd2b5; converted property
@property(assign) float borderWidth;	// G=0x2cd335; S=0x2cd309; converted property
@property(retain) BRControl *defaultFocus;	// G=0x2cd69d; S=0x2cd60d; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x2cc6dd; S=0x2cc6f1; @synthesize=_brEventDelegate
@property(copy, nonatomic) id eventHandlerBlock;	// G=0x2cc721; S=0x2cc735; @synthesize=_eventHandlerBlock
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x2cd7c9; converted property
@property(retain) BRControl *focusedControl;	// G=0x2cd5fd; S=0x2cd535; converted property
@property(retain) id identifier;	// G=0x2cc139; S=0x2cc101; converted property
@property(assign, nonatomic) BOOL ignoreDirectionalInfoForFocus;	// G=0x2cc701; S=0x2cc711; @synthesize=_ignoreDirectionalInfoForFocus
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x2cd789; S=0x2cd75d; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x2cd7b1; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x2cc68d; S=0x2cc5f9; converted property
@property(retain) id name;	// G=0x2ccc09; S=0x2ccbdd; converted property
@property(retain) id object;	// G=0x2cc0cd; S=0x2cc095; converted property
@property(retain) id selectionHandler;	// G=0x2cd8b9; S=0x2cd89d; converted property
+ (CGSize)computeSizeThatFitsControlFrames:(id)frames;	// 0x2cd071
+ (id)control;	// 0x2cbee5
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x3b496d
+ (Class)layerClass;	// 0x2cbf2d
+ (void)layoutSubcontrolsWithControlFrames:(id)controlFrames;	// 0x2cd195
- (id)init;	// 0x2cbf49
- (id)initWithLayout:(id)layout;	// 0x2cbd81
- (void)_addChainedAnimation:(id)animation preemptedAnimation:(id)animation2 timeOffset:(double)offset forKey:(id)key;	// 0xef749
- (void)_addChainedAnimation:(id)animation preemptedDuration:(double)duration forKey:(id)key;	// 0xefa21
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x2d6685
- (id)_axSubviews;	// 0x2d67fd
- (id)_axSuperviews;	// 0x2d65e5
- (BOOL)_changeFocusTo:(id)to;	// 0x2cde99
- (void)_didRemoveSubcontrol:(id)subcontrol;	// 0x2cdad1
- (void)_dumpFocusTree;	// 0x2ce329
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x2cdd01
- (BOOL)_focusControlTreeWithDefaults;	// 0x2cdc99
- (id)_focusedLeafControl;	// 0x2ce141
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x2cdb85
- (id)_initialFocus;	// 0x2ce1b9
- (id)_parentScrollControl;	// 0x3584ad
// declared property getter: - (id)_previousFocus;	// 0x2cc745
- (void)_reevaluateFocusTree;	// 0x2ce161
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x358531
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x358561
- (void)_scrollingCompleted;	// 0x358385
- (void)_scrollingInitiated;	// 0x3583d1
- (void)_setControlFocused:(BOOL)focused;	// 0x2ce0bd
- (void)_setFocus:(id)focus;	// 0x2cdf35
- (double)_timeOffsetForExistingAnimationForKey:(id)key preemptedAnimation:(id *)animation;	// 0xef529
- (CGRect)_visibleRectOfControl:(id)control;	// 0x3584d5
- (void)_visibleScrollRectChanged;	// 0x3585a1
// converted property getter: - (BOOL)acceptsFocus;	// 0x2cd74d
- (id)accessibilityAncestor:(Class)ancestor;	// 0x2d60d5
- (id)accessibilityControls;	// 0x2d6049
- (BOOL)accessibilityElementIsHidden;	// 0x2d6129
- (CGRect)accessibilityFrame;	// 0x2d5f91
- (BOOL)accessibilityIgnoresControlReload;	// 0x2d6045
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x2d6081
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x2d6555
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x2d64c5
- (unsigned long long)accessibilityTraits;	// 0x2d61a9
- (id)actionForKey:(id)key;	// 0x2cda51
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x2cc56d
// converted property getter: - (id)actions;	// 0x2cdaa9
- (BOOL)active;	// 0x2cca6d
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x2cd9a1
// converted property getter: - (CGPoint)anchorPoint;	// 0x2cc795
- (id)animationForKey:(id)key;	// 0x2cd9d1
// converted property getter: - (BOOL)avoidsCursor;	// 0x2cd81d
- (id)badge;	// 0x3206a9
// converted property getter: - (CGColorRef)borderColor;	// 0x2cd2e1
// converted property getter: - (float)borderWidth;	// 0x2cd335
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x2ce255
- (BOOL)brEventAction:(id)action;	// 0x2cc16d
- (BOOL)brKeyEvent:(id)event;	// 0x2cc3a1
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x2cc7d1
- (long)controlCount;	// 0x2ccf85
- (void)controlDidDisplayAsModalDialog;	// 0x3d7c09
- (id)controlForPoint:(CGPoint)point;	// 0x2cd8dd
- (id)controlSearchOrderInProximityToControl:(id)control;	// 0x3d6355
- (void)controlWasActivated;	// 0x2cca7d
- (void)controlWasDeactivated;	// 0x2ccb2d
- (void)controlWasFocused;	// 0x2cd7c1
- (void)controlWasUnfocused;	// 0x2cd7c5
- (void)dealloc;	// 0x2cbfc5
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x2ce325
// converted property getter: - (id)defaultFocus;	// 0x2cd69d
- (id)description;	// 0x2cd8e1
- (void)didAddSubview:(id)subview;	// 0x2ccccd
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x2ce2a5
// declared property getter: - (id)eventDelegate;	// 0x2cc6dd
// declared property getter: - (id)eventHandlerBlock;	// 0x2cc721
- (id)firstControlNamed:(id)named;	// 0x2ccc31
- (id)focusCandidates;	// 0x2ce209
- (CGRect)focusCursorFrame;	// 0x2cd84d
- (XXStruct_qlg9jA)focusCursorHaloAdjutment;	// 0x2cd881
- (id)focusObjectForCandidate:(id)candidate;	// 0x2ce291
// converted property getter: - (id)focusedControl;	// 0x2cd5fd
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x2cd6ad
- (BOOL)handlePlayButton:(id)button;	// 0x1ca365
// converted property getter: - (id)identifier;	// 0x2cc139
// declared property getter: - (BOOL)ignoreDirectionalInfoForFocus;	// 0x2cc701
- (id)inheritedValueForKey:(id)key;	// 0x2cc42d
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x2cd789
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x2cd7b1
- (id)initialFocus;	// 0x2cd439
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x2ccc6d
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x2ccc9d
// converted property getter: - (BOOL)isFocused;	// 0x2cd7c9
- (BOOL)isRandomNavigationCandidate;	// 0x2cc6d9
// converted property getter: - (id)keyEventTargetControl;	// 0x2cc68d
- (void)layoutSubcontrols;	// 0x2cd06d
- (void)layoutSubviews;	// 0x2cc5c1
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x1b7ecd
// converted property getter: - (id)name;	// 0x2ccc09
// converted property getter: - (id)object;	// 0x2cc0cd
- (id)parent;	// 0x2cca1d
- (id)parentScrollControl;	// 0x358495
- (id)photoCarouselUIDelegateCenterBadge;	// 0x4a3409
- (id)photoCarouselUIDelegateLeftShadow;	// 0x4a3411
- (id)photoCarouselUIDelegateRightShadow;	// 0x4a3415
- (id)photoCarouselUIDelegateShourd;	// 0x4a340d
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x2ce231
- (id)preferredActionForKey:(id)key;	// 0x2cd99d
- (float)preferredCursorRadius;	// 0x3206a5
- (id)randomNavigationLabel;	// 0x2cc69d
- (void)removeAllAnimations;	// 0x2cda29
- (void)removeAnimationForKey:(id)key;	// 0x2cd9fd
- (void)removeFromSuperview;	// 0x2ccfbd
- (id)root;	// 0x2cc9f1
- (void)scrollPoint:(CGPoint)point;	// 0x35841d
- (void)scrollRectToVisible:(CGRect)visible;	// 0x358439
- (void)scrollingCompleted;	// 0x3584a5
- (void)scrollingInitiated;	// 0x3584a9
// converted property getter: - (id)selectionHandler;	// 0x2cd8b9
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x2cd709
// declared property setter: - (void)setAccessibilityOutputsRange:(BOOL)range;	// 0x2d65a9
// declared property setter: - (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x2d6519
// converted property setter: - (void)setActions:(id)actions;	// 0x2cda7d
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x2cc765
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x2cd7d9
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x2cd2b5
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x2cd309
- (void)setControls:(id)controls;	// 0x2ccd91
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x2cd60d
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x2cd8d9
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x2cc6f1
// declared property setter: - (void)setEventHandlerBlock:(id)block;	// 0x2cc735
- (void)setFocusCursorHaloAdjustment:(XXStruct_qlg9jA)adjustment;	// 0x2cd871
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x372a15
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x2cd535
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x2cc101
// declared property setter: - (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x2cc711
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x2cd75d
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x2cd799
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x2cc5f9
// converted property setter: - (void)setName:(id)name;	// 0x2ccbdd
// converted property setter: - (void)setObject:(id)object;	// 0x2cc095
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x2cd89d
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x2cc47d
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x2cc3fd
// declared property setter: - (void)set_previousFocus:(id)focus;	// 0x2cc755
- (int)touchSensitivity;	// 0x2cd8d5
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x2cc3d1
- (CGRect)visibleScrollRect;	// 0x358471
- (void)visibleScrollRectChanged;	// 0x358461
- (void)windowMaxBoundsChanged;	// 0x2cd35d
@end
