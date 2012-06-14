/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRResponder.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "BRFocusContainer.h"

@class NSMutableArray, CALayer, NSArray;
@protocol BREventDelegate;

@interface BRControl : NSObject <BRFocusContainer, BRResponder> {
@private
	CALayer *_backing;	// 4 = 0x4
	BRControl *_defaultFocus;	// 8 = 0x8
	BRControl *_focusedControl;	// 12 = 0xc
	BRControl *_previousFocus;	// 16 = 0x10
	BRControl *_keyEventTargetControl;	// 20 = 0x14
	unsigned _autoresizing;	// 24 = 0x18
	NSMutableArray *_subControls;	// 28 = 0x1c
	BOOL _dontAutoresizeSubviews;	// 32 = 0x20
	BOOL _acceptsFocus;	// 33 = 0x21
	BOOL _focused;	// 34 = 0x22
	BOOL _controlActive;	// 35 = 0x23
	BOOL _inhibitsFocusForChildren;	// 36 = 0x24
	BOOL _inhibitsScrollFocusForChildren;	// 37 = 0x25
	NSObject<BREventDelegate> *_brEventDelegate;	// 40 = 0x28
	BOOL _focusByDirectionEnabled;	// 44 = 0x2c
	BOOL _ignoreDirectionalInfoForFocus;	// 45 = 0x2d
}
@property(assign) BOOL acceptsFocus;	// G=0x36639ac5; S=0x36639a85; converted property
@property(assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x3663df19; S=0x3663df6d; 
@property(retain) id actions;	// G=0x36639cf9; S=0x36639cd9; converted property
@property(assign) CGAffineTransform affineTransform;	// G=0x36638791; S=0x3663874d; converted property
@property(assign) CGPoint anchorPoint;	// G=0x3663871d; S=0x366386fd; converted property
@property(assign) unsigned autoresizingMask;	// G=0x366389d9; S=0x366389c9; converted property
@property(assign) BOOL avoidsCursor;	// G=0x36639b9d; S=0x36639b59; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x36639321; S=0x36639301; converted property
@property(assign) CGColorRef borderColor;	// G=0x366396b9; S=0x36639699; converted property
@property(assign) float borderWidth;	// G=0x366396f9; S=0x366396d9; converted property
@property(assign) CGRect bounds;	// G=0x366386c9; S=0x36638601; converted property
@property(assign) int contentMode;	// G=0x366394b9; S=0x366393c5; converted property
@property(retain) id controls;	// G=0x366391a5; S=0x36638fc1; converted property
@property(retain) BRControl *defaultFocus;	// G=0x36639a25; S=0x36639991; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x3663845d; S=0x36638471; @synthesize=_brEventDelegate
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x36639b49; converted property
@property(retain) BRControl *focusedControl;	// G=0x36639981; S=0x366398a1; converted property
@property(assign) CGRect frame;	// G=0x3663857d; S=0x366384b5; converted property
@property(assign, getter=isHidden) BOOL hidden;	// G=0x366393a1; S=0x36639381; converted property
@property(retain) id identifier;	// G=0x36637f49; S=0x36637f21; converted property
@property(assign, nonatomic) BOOL ignoreDirectionalInfoForFocus;	// G=0x36638495; S=0x366384a5; @synthesize=_ignoreDirectionalInfoForFocus
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x36639b09; S=0x36639ad5; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x36639b31; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x3663844d; S=0x366383b5; converted property
@property(assign) BOOL masksToBounds;	// G=0x366392dd; S=0x366392bd; converted property
@property(retain) id name;	// G=0x36638dd1; S=0x36638db1; converted property
@property(retain) id object;	// G=0x36637ef9; S=0x36637ed1; converted property
@property(assign) float opacity;	// G=0x36639361; S=0x36639341; converted property
@property(assign) CGPoint position;	// G=0x366385d1; S=0x366385b1; converted property
@property(retain) id selectionHandler;	// G=0x36639c0d; S=0x36639bf1; converted property
@property(copy, nonatomic) NSArray *subcontrols;	// G=0x36638f79; S=0x36638fb1; 
+ (id)control;	// 0x36637bd5
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x36710929
+ (Class)layerClass;	// 0x36637c1d
- (id)init;	// 0x36637c39
- (id)initWithLayout:(id)layout;	// 0x36637a71
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x3663e045
- (id)_axSubviews;	// 0x3663e1a1
- (id)_axSuperviews;	// 0x3663dfa9
- (BOOL)_changeFocusTo:(id)to;	// 0x3663a619
- (void)_dumpControlTree;	// 0x3663acc1
- (void)_dumpFocusTree;	// 0x3663aab5
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x3663a521
- (BOOL)_focusControlTreeWithDefaults;	// 0x3663a4b9
- (id)_focusedLeafControl;	// 0x3663a8d9
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x3663a3a9
- (id)_initialFocus;	// 0x3663a94d
- (void)_insertSingleControl:(id)control atIndex:(long)index;	// 0x36639d19
- (id)_parentScrollControl;	// 0x366bd299
- (void)_reevaluateFocusTree;	// 0x3663a8f9
- (void)_removeAllControls;	// 0x3663a009
- (void)_removeControl:(id)control;	// 0x36639ee9
- (void)_resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x3663a079
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x3663a141
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x366bd31d
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x366bd34d
- (void)_scrollingCompleted;	// 0x366bd161
- (void)_scrollingInitiated;	// 0x366bd1ad
- (void)_setControlFocused:(BOOL)focused;	// 0x3663a839
- (void)_setFocus:(id)focus;	// 0x3663a6b5
- (CGRect)_visibleRectOfControl:(id)control;	// 0x366bd2c1
- (void)_visibleScrollRectChanged;	// 0x366bd38d
// converted property getter: - (BOOL)acceptsFocus;	// 0x36639ac5
- (id)accessibilityAncestor:(Class)ancestor;	// 0x3663de55
- (id)accessibilityControls;	// 0x3663ddf9
- (BOOL)accessibilityElementIsHidden;	// 0x3663de9d
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x3663de09
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x3663df19
- (id)actionForKey:(id)key;	// 0x36639cb9
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x3663836d
// converted property getter: - (id)actions;	// 0x36639cf9
- (BOOL)active;	// 0x36638d19
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x36639c39
- (void)addControl:(id)control;	// 0x36638e29
// converted property getter: - (CGAffineTransform)affineTransform;	// 0x36638791
// converted property getter: - (CGPoint)anchorPoint;	// 0x3663871d
- (id)animationForKey:(id)key;	// 0x36639c59
// converted property getter: - (unsigned)autoresizingMask;	// 0x366389d9
// converted property getter: - (BOOL)avoidsCursor;	// 0x36639b9d
// converted property getter: - (CGColorRef)backgroundColor;	// 0x36639321
- (id)badge;	// 0x36685d49
// converted property getter: - (CGColorRef)borderColor;	// 0x366396b9
// converted property getter: - (float)borderWidth;	// 0x366396f9
// converted property getter: - (CGRect)bounds;	// 0x366386c9
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x3663a9e5
- (BOOL)brEventAction:(id)action;	// 0x36637f71
- (BOOL)brKeyEvent:(id)event;	// 0x366381cd
// converted property getter: - (int)contentMode;	// 0x366394b9
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x366387c1
- (long)controlCount;	// 0x366391d1
- (void)controlDidDisplayAsModalDialog;	// 0x36726465
- (id)controlForPoint:(CGPoint)point;	// 0x36639c31
- (void)controlWasActivated;	// 0x36638d29
- (void)controlWasDeactivated;	// 0x36638d6d
- (void)controlWasFocused;	// 0x36639b41
- (void)controlWasUnfocused;	// 0x36639b45
// converted property getter: - (id)controls;	// 0x366391a5
- (CGPoint)convertPoint:(CGPoint)point fromControl:(id)control;	// 0x36638b1d
- (CGPoint)convertPoint:(CGPoint)point toControl:(id)control;	// 0x36638b79
- (CGRect)convertRect:(CGRect)rect fromControl:(id)control;	// 0x36638bd5
- (CGRect)convertRect:(CGRect)rect toControl:(id)control;	// 0x36638c39
- (void)dealloc;	// 0x36637cc9
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x3663aab1
// converted property getter: - (id)defaultFocus;	// 0x36639a25
- (void)drawInContext:(CGContextRef)context;	// 0x366392b9
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x36638359
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x3663aa31
// declared property getter: - (id)eventDelegate;	// 0x3663845d
- (id)firstControlNamed:(id)named;	// 0x36638df1
- (id)focusCandidates;	// 0x3663a9a1
- (CGRect)focusCursorFrame;	// 0x36639bcd
- (id)focusObjectForCandidate:(id)candidate;	// 0x3663aa1d
// converted property getter: - (id)focusedControl;	// 0x36639981
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x36639a35
// converted property getter: - (CGRect)frame;	// 0x3663857d
- (BOOL)handlePlayButton:(id)button;	// 0x3658e27d
// converted property getter: - (id)identifier;	// 0x36637f49
// declared property getter: - (BOOL)ignoreDirectionalInfoForFocus;	// 0x36638495
- (id)inheritedValueForKey:(id)key;	// 0x3663823d
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x36639b09
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x36639b31
- (id)initialFocus;	// 0x366397c9
- (void)insertControl:(id)control above:(id)above;	// 0x36638ead
- (void)insertControl:(id)control atIndex:(long)index;	// 0x36638e6d
- (void)insertControl:(id)control below:(id)below;	// 0x36638f21
// converted property getter: - (BOOL)isFocused;	// 0x36639b49
// converted property getter: - (BOOL)isHidden;	// 0x366393a1
// converted property getter: - (id)keyEventTargetControl;	// 0x3663844d
- (id)layer;	// 0x36637ec1
- (id)layerForBacking;	// 0x36637e69
- (void)layoutSubcontrols;	// 0x36639259
- (void)layoutSublayersOfLayer:(id)layer;	// 0x36638381
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x3657bb21
// converted property getter: - (BOOL)masksToBounds;	// 0x366392dd
// converted property getter: - (id)name;	// 0x36638dd1
// converted property getter: - (id)object;	// 0x36637ef9
// converted property getter: - (float)opacity;	// 0x36639361
- (id)parent;	// 0x36638ce1
- (id)parentScrollControl;	// 0x366bd275
// converted property getter: - (CGPoint)position;	// 0x366385d1
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x3663a9c1
- (id)preferredActionForKey:(id)key;	// 0x36639c35
- (float)preferredCursorRadius;	// 0x36685d45
- (void)removeAllAnimations;	// 0x36639c99
- (void)removeAnimationForKey:(id)key;	// 0x36639c79
- (void)removeFromParent;	// 0x36639209
- (id)root;	// 0x36638c9d
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x366bd28d
- (void)scrollPoint:(CGPoint)point;	// 0x366bd1f9
- (void)scrollRectToVisible:(CGRect)visible;	// 0x366bd215
- (void)scrollingCompleted;	// 0x366bd285
- (void)scrollingInitiated;	// 0x366bd289
// converted property getter: - (id)selectionHandler;	// 0x36639c0d
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x36639a85
// declared property setter: - (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x3663df6d
// converted property setter: - (void)setActions:(id)actions;	// 0x36639cd9
// converted property setter: - (void)setAffineTransform:(CGAffineTransform)transform;	// 0x3663874d
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x366386fd
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x366389c9
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x36639b59
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x36639301
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x36639699
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x366396d9
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x36638601
// converted property setter: - (void)setContentMode:(int)mode;	// 0x366393c5
// converted property setter: - (void)setControls:(id)controls;	// 0x36638fc1
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x36639991
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x36639c2d
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x36638471
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3678d56d
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x366398a1
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x366384b5
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x36639381
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x36637f21
// declared property setter: - (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x366384a5
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x36639ad5
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x36639b19
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x366383b5
// converted property setter: - (void)setMasksToBounds:(BOOL)bounds;	// 0x366392bd
// converted property setter: - (void)setName:(id)name;	// 0x36638db1
- (void)setNeedsDisplay;	// 0x3663925d
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3663927d
- (void)setNeedsLayout;	// 0x36639239
// converted property setter: - (void)setObject:(id)object;	// 0x36637ed1
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x36639341
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x366385b1
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x36639bf1
// declared property setter: - (void)setSubcontrols:(id)subcontrols;	// 0x36638fb1
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x36638285
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x3663821d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x366389e9
- (void)sizeToFit;	// 0x36638a21
// declared property getter: - (id)subcontrols;	// 0x36638f79
- (int)touchSensitivity;	// 0x36639c29
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x366381fd
- (CGRect)visibleScrollRect;	// 0x366bd24d
- (void)visibleScrollRectChanged;	// 0x366bd23d
- (void)windowMaxBoundsChanged;	// 0x36639719
@end
