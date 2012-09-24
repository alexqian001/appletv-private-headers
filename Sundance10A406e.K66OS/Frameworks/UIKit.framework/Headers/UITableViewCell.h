/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIView.h"

@class NSIndexPath, UIImageView, UILabel, UIButton, UITableView, UILongPressGestureRecognizer, NSTimer, UIColor, UIImage, UITextField, _UITableViewCellOldEditingData, NSString;

@interface UITableViewCell : UIView <NSCoding, UIGestureRecognizerDelegate> {
	UITableView *_tableView;	// 84 = 0x54
	id _layoutManager;	// 88 = 0x58
	id _target;	// 92 = 0x5c
	SEL _editAction;	// 96 = 0x60
	SEL _accessoryAction;	// 100 = 0x64
	id _oldEditingData;	// 104 = 0x68
	id _editingData;	// 108 = 0x6c
	float _rightMargin;	// 112 = 0x70
	int _indentationLevel;	// 116 = 0x74
	float _indentationWidth;	// 120 = 0x78
	NSString *_reuseIdentifier;	// 124 = 0x7c
	UIView *_contentView;	// 128 = 0x80
	UIImageView *_imageView;	// 132 = 0x84
	UILabel *_textLabel;	// 136 = 0x88
	UILabel *_detailTextLabel;	// 140 = 0x8c
	UIView *_backgroundView;	// 144 = 0x90
	UIView *_selectedBackgroundView;	// 148 = 0x94
	UIView *_multipleSelectionBackgroundView;	// 152 = 0x98
	UIView *_selectedOverlayView;	// 156 = 0x9c
	float _selectionFadeDuration;	// 160 = 0xa0
	UIColor *_backgroundColor;	// 164 = 0xa4
	UIColor *_separatorColor;	// 168 = 0xa8
	UIColor *_topShadowColor;	// 172 = 0xac
	UIColor *_bottomShadowColor;	// 176 = 0xb0
	UIColor *_sectionBorderColor;	// 180 = 0xb4
	UIView *_floatingSeparatorView;	// 184 = 0xb8
	UIView *_topShadowAnimationView;	// 188 = 0xbc
	UIView *_bottomShadowAnimationView;	// 192 = 0xc0
	id _badge;	// 196 = 0xc4
	CFDictionaryRef _unhighlightedStates;	// 200 = 0xc8
	id _selectionSegueTemplate;	// 204 = 0xcc
	id _accessoryActionSegueTemplate;	// 208 = 0xd0
	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selectionFadeFraction : 11;
		unsigned editing : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsAccessoryWhenEditing : 1;
		unsigned showsReorderControl : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned disclosureClickable : 1;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 1;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned showingMenu : 1;
		unsigned clipsContents : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned dontDrawTopShadow : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned layoutLoopCounter : 2;
	} _tableCellFlags;	// 212 = 0xd4
	UIButton *_accessoryView;	// 224 = 0xe0
	UIButton *_editingAccessoryView;	// 228 = 0xe4
	UIView *_customAccessoryView;	// 232 = 0xe8
	UIView *_customEditingAccessoryView;	// 236 = 0xec
	UIView *_separatorView;	// 240 = 0xf0
	UIView *_topSeparatorView;	// 244 = 0xf4
	UIView *_topShadowView;	// 248 = 0xf8
	UITextField *_editableTextField;	// 252 = 0xfc
	double _lastSelectionTime;	// 256 = 0x100
	NSTimer *_deselectTimer;	// 264 = 0x108
	float _textFieldOffset;	// 268 = 0x10c
	SEL _returnAction;	// 272 = 0x110
	UIColor *_selectionTintColor;	// 276 = 0x114
	UIColor *_accessoryTintColor;	// 280 = 0x118
	UIImage *_reorderControlImage;	// 284 = 0x11c
	UILongPressGestureRecognizer *_menuGesture;	// 288 = 0x120
	id _highlightingSupport;	// 292 = 0x124
	NSIndexPath *_representedIndexPath;	// 296 = 0x128
}
@property(assign) SEL accessoryAction;	// G=0x30b25369; S=0x30b2527d; converted property
@property(retain) id accessoryActionSegueTemplate;	// G=0x30b228c9; S=0x30b22885; converted property
@property(assign, nonatomic) int accessoryType;	// G=0x308f8c09; S=0x308f962d; 
@property(retain, nonatomic) UIView *accessoryView;	// G=0x30985541; S=0x309760f5; 
@property(retain) UIColor *backgroundColor;	// G=0x308feeb1; S=0x308fa32d; converted property
@property(retain, nonatomic) UIView *backgroundView;	// G=0x3098c029; S=0x3098bec1; 
@property(retain) UIColor *bottomShadowColor;	// G=0x3098d539; S=0x308fe9c5; converted property
@property(assign) BOOL clipsContents;	// G=0x30b23ffd; S=0x30b23fc5; converted property
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x308f93c1; 
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x3097b3e1; 
@property(assign) BOOL drawingEnabled;	// G=0x30a6f375; S=0x30b23459; converted property
@property(assign, nonatomic, getter=_drawsTopShadow, setter=_setDrawsTopShadow:) BOOL drawsTopShadow;	// G=0x3098b489; S=0x308fe485; 
@property(assign) SEL editAction;	// G=0x30b2526d; S=0x30b2525d; converted property
@property(readonly, assign, nonatomic) UITextField *editableTextField;	// G=0x30a5b0fd; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x308e7519; S=0x30b24015; 
@property(assign, nonatomic) int editingAccessoryType;	// G=0x308f9a29; S=0x3096f1a9; 
@property(retain, nonatomic) UIView *editingAccessoryView;	// G=0x30b23f25; S=0x309f3dc5; 
@property(readonly, assign, nonatomic) int editingStyle;	// G=0x3096f2e5; 
@property(retain) id font;	// G=0x30b2374d; S=0x30b23739; converted property
@property(assign) BOOL hidesAccessoryWhenEditing;	// G=0x30b23fa9; S=0x30b23f5d; converted property
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x30955271; S=0x308ff1a5; 
@property(retain) id image;	// G=0x30b2397d; S=0x30b23951; converted property
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x3092bf01; 
@property(assign, nonatomic) int indentationLevel;	// G=0x308fdc39; S=0x30a08d91; 
@property(assign, nonatomic) float indentationWidth;	// G=0x308fdc49; S=0x30a08db9; 
@property(retain) id layoutManager;	// G=0x308f80d5; S=0x308f8091; converted property
@property(assign) int lineBreakMode;	// G=0x30b23869; S=0x30b23825; converted property
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;	// G=0x30b23a7d; S=0x30b23ab5; 
@property(assign, nonatomic, getter=_needsSetup, setter=_setNeedsSetup:) BOOL needsSetup;	// G=0x3093f6f1; S=0x308e78fd; 
@property(retain, nonatomic) _UITableViewCellOldEditingData *oldEditingData;	// G=0x30b2180d; S=0x30b2185d; 
@property(assign) SEL returnAction;	// G=0x30b261c5; S=0x30b261b5; converted property
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;	// G=0x3093fec1; 
@property(retain) UIColor *sectionBorderColor;	// G=0x3098c261; S=0x308feab1; converted property
@property(assign) int sectionLocation;	// G=0x308f88b5; S=0x30b25575; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3092bec5; S=0x308fef01; 
@property(retain, nonatomic) UIView *selectedBackgroundView;	// G=0x30976239; S=0x3092bb69; 
@property(retain) id selectedImage;	// G=0x30b239d1; S=0x30b239a5; converted property
@property(readonly, retain) UIView *selectedOverlayView;	// G=0x30b23d75; converted property
@property(retain) id selectedTextColor;	// G=0x30b23929; S=0x30b238fd; converted property
@property(assign) float selectionFadeDuration;	// G=0x309f552d; S=0x308f7f1d; converted property
@property(retain) id selectionSegueTemplate;	// G=0x309f133d; S=0x30b22901; converted property
@property(assign, nonatomic) int selectionStyle;	// G=0x3098cf59; S=0x308e7535; 
@property(retain) UIColor *selectionTintColor;	// G=0x309eeb01; S=0x30b23cc5; converted property
@property(retain) UIColor *separatorColor;	// G=0x3098cfb9; S=0x308fe2c5; converted property
@property(assign) int separatorStyle;	// G=0x3093ed75; S=0x308deb0d; converted property
@property(assign, nonatomic) BOOL shouldIndentWhileEditing;	// G=0x3098ab1d; S=0x30b23de9; 
@property(readonly, assign, nonatomic) BOOL showingDeleteConfirmation;	// G=0x308fbea1; 
@property(assign, nonatomic) BOOL showsReorderControl;	// G=0x3092c3a5; S=0x3097b091; 
@property(retain) id tableBackgroundColor;	// G=0x3098d41d; S=0x30b23c1d; converted property
@property(assign) int tableViewStyle;	// G=0x308f84bd; S=0x308fa0bd; converted property
@property(retain) id target;	// G=0x30b2524d; S=0x30b25165; converted property
@property(retain) id text;	// G=0x30b236a9; S=0x30b235f1; converted property
@property(assign) int textAlignment;	// G=0x30b237fd; S=0x30b237d1; converted property
@property(retain) id textColor;	// G=0x30b238d5; S=0x30b23891; converted property
@property(assign, nonatomic, setter=setTextFieldOffset:) float textFieldOffset;	// G=0x30a5c065; S=0x30a5b635; 
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x3097b0e9; 
@property(retain) UIColor *topShadowColor;	// G=0x3098c199; S=0x308fe3c1; converted property
@property(assign, nonatomic) BOOL wasSwiped;	// G=0x3092c38d; S=0x308e77ed; 
+ (id)_defaultTopShadowColor;	// 0x309f3959
- (id)init;	// 0x30b22945
- (id)initWithCoder:(id)coder;	// 0x30b229a1
- (id)initWithFrame:(CGRect)frame;	// 0x30b22975
- (id)initWithFrame:(CGRect)frame reuseIdentifier:(id)identifier;	// 0x30a33a71
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x308f7a75
- (SEL)_accessoryAction;	// 0x30b25cb9
- (id)_accessoryTintColor;	// 0x30b23ee9
- (id)_accessoryView:(BOOL)view;	// 0x308f88ed
- (void)_animateFloatingSeparatorForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x3093e931
- (void)_animateInnerShadowForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x3093ed89
- (BOOL)_backgroundColorSet;	// 0x308fa191
- (float)_backgroundInset;	// 0x308f87e9
- (id)_backgroundView:(BOOL)view;	// 0x308fc001
- (id)_badge;	// 0x309961bd
- (id)_badge:(BOOL)badge;	// 0x308fbeb9
- (id)_badgeText;	// 0x30996191
- (BOOL)_canDrawContent;	// 0x308f7d8d
- (void)_cancelInternalPerformRequests;	// 0x309eeb3d
- (void)_clearOpaqueViewState:(id)state;	// 0x309f1035
- (id)_contentBackgroundColor;	// 0x3097b351
- (id)_createRemoveControlForStyle:(int)style;	// 0x30b21fd1
- (void)_createReorderControlIfNeeded;	// 0x30b218a1
- (id)_currentAccessoryView:(BOOL)view;	// 0x30b21d79
- (id)_customAccessoryView:(BOOL)view;	// 0x308fd049
- (id)_customEditingAccessoryView:(BOOL)view;	// 0x308fdaf1
- (id)_defaultAccessoryView;	// 0x308f8925
- (id)_defaultFont;	// 0x30b224a5
- (void)_delayedDeselect;	// 0x30b23cd9
- (CGRect)_delegateConfirmationRect;	// 0x30b241d5
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x309f1129
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x309f0fd1
- (void)_deselectAnimationFinished;	// 0x309f6685
- (id)_detailTextLabel;	// 0x3097b3f5
- (id)_detailTextLabel:(BOOL)label;	// 0x308fdcdd
- (void)_didCreateContentView;	// 0x30b23451
- (id)_disclosureImage:(BOOL)image;	// 0x308f9a41
- (id)_disclosurePressedImage:(BOOL)image;	// 0x308f9db5
- (void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x30b23d6d
- (void)_drawSeparatorInRect:(CGRect)rect;	// 0x30955151
- (BOOL)_drawsTopSeparatorDuringReordering;	// 0x30a581c1
// declared property getter: - (BOOL)_drawsTopShadow;	// 0x3098b489
- (id)_editableTextField;	// 0x30a5b111
- (id)_editableTextField:(BOOL)field;	// 0x30a5bd51
- (id)_editingAccessoryView:(BOOL)view;	// 0x308fc685
- (float)_editingButtonOffset;	// 0x30b25a9d
- (void)_editingTransitionAnimationDidStop:(id)_editingTransitionAnimation finished:(id)finished context:(void *)context;	// 0x30a57d05
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x30b21bd9
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x30b2250d
- (void)_grabberBeganReorder:(id)reorder;	// 0x30a57de1
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x30b25659
- (void)_grabberReleased:(id)released;	// 0x30a59399
- (BOOL)_hasAccessoryView;	// 0x30a1b61d
- (BOOL)_hasEditingAccessoryView;	// 0x30a5796d
- (CGSize)_imageInsetSize;	// 0x30b224fd
- (id)_imageView;	// 0x3092bf15
- (id)_imageView:(BOOL)view;	// 0x308fdc5d
- (id)_indexPath;	// 0x30b26109
- (BOOL)_isCurrentlyConsideredHighlighted;	// 0x308fa6dd
- (BOOL)_isHighlighted;	// 0x3097b3b1
- (BOOL)_isReorderable;	// 0x30b25a71
- (BOOL)_isUsingOldStyleMultiselection;	// 0x30b260d5
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x30b22131
- (void)_longPressGestureRecognized:(id)recognized;	// 0x30b22559
- (void)_menuDismissed:(id)dismissed;	// 0x30b22709
- (id)_multiselectBackgroundColor;	// 0x309ef0c9
- (void)_multiselectColorChanged;	// 0x30b25f91
// declared property getter: - (BOOL)_needsSetup;	// 0x3093f6f1
- (void)_performAction:(SEL)action sender:(id)sender;	// 0x30b25589
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30b23031
- (void)_releaseRemoveControl;	// 0x30b2208d
- (void)_releaseReorderingControl;	// 0x30b21a49
- (id)_removeControl;	// 0x308dec39
- (void)_removeFloatingSeparator;	// 0x3093fba1
- (void)_removeInnerShadow;	// 0x3093fbe1
- (void)_removeRemoveControl;	// 0x3094060d
- (id)_reorderControlImage;	// 0x30a57cc1
- (id)_reorderingControl;	// 0x30b219cd
- (id)_reorderingSeparatorView;	// 0x30b21a09
- (void)_resetSelectionTimer;	// 0x309405b5
- (void)_saveOpaqueViewState:(id)state;	// 0x309ef269
- (id)_scriptingInfo;	// 0x30b25e21
- (id)_selectedBackgroundView:(BOOL)view;	// 0x308fc011
- (void)_setAccessoryAction:(SEL)action;	// 0x30b25bcd
- (void)_setAccessoryTintColor:(id)color;	// 0x30b23e61
- (void)_setBadgeText:(id)text;	// 0x30b239f9
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x30940549
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)reordering;	// 0x30b2284d
// declared property setter: - (void)_setDrawsTopShadow:(BOOL)shadow;	// 0x308fe485
- (void)_setEditingStyle:(int)style;	// 0x308e7761
- (void)_setFont:(id)font layout:(BOOL)layout;	// 0x30b236d5
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x30b21b11
- (void)_setHiddenForReuse:(BOOL)reuse;	// 0x308decc9
- (void)_setIndexPath:(id)path;	// 0x30b26141
- (void)_setMultiselecting:(BOOL)multiselecting;	// 0x308e7825
// declared property setter: - (void)_setNeedsSetup:(BOOL)setup;	// 0x308e78fd
- (void)_setOpaque:(BOOL)opaque forSubview:(id)subview;	// 0x309ef669
- (void)_setReorderControlImage:(id)image;	// 0x30b25615
- (void)_setReordering:(BOOL)reordering;	// 0x30a584cd
- (void)_setSelectionStyle:(int)style selectionTintColor:(id)color;	// 0x308e754d
- (void)_setShouldIndentWhileEditing:(BOOL)_set;	// 0x308e7779
- (void)_setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x308e7809
- (void)_setShowsReorderControl:(BOOL)control;	// 0x308e7795
- (void)_setTableBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x308fe1e1
- (void)_setTableView:(id)view;	// 0x30b25605
- (void)_setTarget:(id)target;	// 0x30b25ad5
- (void)_setupMenuGesture;	// 0x308f8ca9
- (void)_setupSelectedBackgroundView;	// 0x30976285
- (void)_setupTableViewCellCommon;	// 0x308f7f05
- (BOOL)_shouldSaveOpaqueStateForView:(id)view;	// 0x30b25fd1
- (void)_showReorderControl;	// 0x30b221f5
- (void)_startToEditTextField;	// 0x30b25f55
- (void)_syncAccessoryViewsIfNecessary;	// 0x308f990d
- (id)_tableView;	// 0x308f8845
- (id)_target;	// 0x30b25bbd
- (CGSize)_textInsetSize;	// 0x30b224ed
- (id)_textLabel;	// 0x3097b0f9
- (id)_textLabel:(BOOL)label;	// 0x308fdc89
- (id)_tintedDisclosureImagePressed:(BOOL)pressed;	// 0x30b21be9
- (id)_titleForDeleteConfirmationButton;	// 0x30a75535
- (void)_topShadowDidFadeOut;	// 0x30b226cd
- (id)_topShadowView:(BOOL)view;	// 0x308fdcb5
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x30b257e1
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)highlightIgnoringSelection;	// 0x309ef201
- (void)_updateContentClip;	// 0x308fa711
- (void)_updateHighlightColors;	// 0x30940781
- (void)_updateHighlightColorsForAnimationHalfwayPoint;	// 0x309f553d
- (void)_updateHighlightColorsForView:(id)view highlighted:(BOOL)highlighted;	// 0x308f9b01
- (void)_updateSeparatorContent;	// 0x308fdd0d
- (void)_updateTopShadowView:(BOOL)view;	// 0x308fe4c9
- (void)_willBeDeleted;	// 0x30b25811
// converted property getter: - (SEL)accessoryAction;	// 0x30b25369
// converted property getter: - (id)accessoryActionSegueTemplate;	// 0x30b228c9
- (CGRect)accessoryRectForBounds:(CGRect)bounds;	// 0x30b24df5
// declared property getter: - (int)accessoryType;	// 0x308f8c09
// declared property getter: - (id)accessoryView;	// 0x30985541
// converted property getter: - (id)backgroundColor;	// 0x308feeb1
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x30b2427d
// declared property getter: - (id)backgroundView;	// 0x3098c029
// converted property getter: - (id)bottomShadowColor;	// 0x3098d539
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30b227b1
// converted property getter: - (BOOL)clipsContents;	// 0x30b23ffd
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x30b24331
- (CGRect)contentRectForState:(unsigned)state;	// 0x30b25379
// declared property getter: - (id)contentView;	// 0x308f93c1
- (void)copy:(id)copy;	// 0x30b22825
- (unsigned)currentStateMask;	// 0x3093d2b1
- (void)cut:(id)cut;	// 0x30b22811
- (void)dealloc;	// 0x309f5631
- (void)deleteConfirmationControlWasCancelled:(id)cancelled;	// 0x30b259b9
- (void)deleteConfirmationControlWasClicked:(id)clicked;	// 0x30a76551
// declared property getter: - (id)detailTextLabel;	// 0x3097b3e1
- (void)didMoveToSuperview;	// 0x308fedfd
- (void)didTransitionToState:(unsigned)state;	// 0x309f4ea5
// converted property getter: - (BOOL)drawingEnabled;	// 0x30a6f375
// converted property getter: - (SEL)editAction;	// 0x30b2526d
- (void)editControlWasClicked:(id)clicked;	// 0x30b25939
- (CGRect)editRectForBounds:(CGRect)bounds;	// 0x30b24db5
// declared property getter: - (id)editableTextField;	// 0x30a5b0fd
// declared property getter: - (int)editingAccessoryType;	// 0x308f9a29
// declared property getter: - (id)editingAccessoryView;	// 0x30b23f25
- (id)editingData:(BOOL)data;	// 0x308fbee5
// declared property getter: - (int)editingStyle;	// 0x3096f2e5
- (void)encodeWithCoder:(id)coder;	// 0x30b230b9
// converted property getter: - (id)font;	// 0x30b2374d
// converted property getter: - (BOOL)hidesAccessoryWhenEditing;	// 0x30b23fa9
// converted property getter: - (id)image;	// 0x30b2397d
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x30b24c29
// declared property getter: - (id)imageView;	// 0x3092bf01
// declared property getter: - (int)indentationLevel;	// 0x308fdc39
// declared property getter: - (float)indentationWidth;	// 0x308fdc49
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x30b25879
- (BOOL)isAtLeastHalfSelected;	// 0x30b23d19
// declared property getter: - (BOOL)isEditing;	// 0x308e7519
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x30b4aa65
// declared property getter: - (BOOL)isHighlighted;	// 0x30955271
// declared property getter: - (BOOL)isSelected;	// 0x3092bec5
// converted property getter: - (id)layoutManager;	// 0x308f80d5
- (void)layoutSubviews;	// 0x308fa931
// converted property getter: - (int)lineBreakMode;	// 0x30b23869
// declared property getter: - (id)multipleSelectionBackgroundView;	// 0x30b23a7d
// declared property getter: - (id)oldEditingData;	// 0x30b2180d
- (void)paste:(id)paste;	// 0x30b22839
- (void)prepareForReuse;	// 0x30940309
- (CGRect)removeControl:(id)control endFrameForTarget:(id)target;	// 0x30b25d6d
- (CGRect)removeControl:(id)control startFrameForTarget:(id)target;	// 0x30b25ccd
- (void)removeControl:(id)control wasCanceledForTarget:(id)target;	// 0x30b25dd9
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x30b25839
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x30b258a9
- (void)removeEditingData;	// 0x30940661
- (void)removeFromSuperview;	// 0x309ea199
- (CGRect)reorderRectForBounds:(CGRect)bounds;	// 0x30b2505d
// converted property getter: - (SEL)returnAction;	// 0x30b261c5
// declared property getter: - (id)reuseIdentifier;	// 0x3093fec1
// converted property getter: - (id)sectionBorderColor;	// 0x3098c261
// converted property getter: - (int)sectionLocation;	// 0x308f88b5
// declared property getter: - (id)selectedBackgroundView;	// 0x30976239
- (void)selectedBackgroundViewChange:(id)change finished:(id)finished context:(id)context;	// 0x30b23a49
// converted property getter: - (id)selectedImage;	// 0x30b239d1
// converted property getter: - (id)selectedOverlayView;	// 0x30b23d75
// converted property getter: - (id)selectedTextColor;	// 0x30b23929
// converted property getter: - (float)selectionFadeDuration;	// 0x309f552d
- (float)selectionPercent;	// 0x30b23d3d
// converted property getter: - (id)selectionSegueTemplate;	// 0x309f133d
// declared property getter: - (int)selectionStyle;	// 0x3098cf59
// converted property getter: - (id)selectionTintColor;	// 0x309eeb01
// converted property getter: - (id)separatorColor;	// 0x3098cfb9
// converted property getter: - (int)separatorStyle;	// 0x3093ed75
// converted property setter: - (void)setAccessoryAction:(SEL)action;	// 0x30b2527d
// converted property setter: - (void)setAccessoryActionSegueTemplate:(id)aTemplate;	// 0x30b22885
// declared property setter: - (void)setAccessoryType:(int)type;	// 0x308f962d
// declared property setter: - (void)setAccessoryView:(id)view;	// 0x309760f5
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x308fa32d
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x3098bec1
// converted property setter: - (void)setBottomShadowColor:(id)color;	// 0x308fe9c5
// converted property setter: - (void)setClipsContents:(BOOL)contents;	// 0x30b23fc5
// converted property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x30b23459
// converted property setter: - (void)setEditAction:(SEL)action;	// 0x30b2525d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x30b24015
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x308e7051
// declared property setter: - (void)setEditingAccessoryType:(int)type;	// 0x3096f1a9
// declared property setter: - (void)setEditingAccessoryView:(id)view;	// 0x309f3dc5
- (void)setEditingStyle:(int)style;	// 0x30b23d85
// converted property setter: - (void)setFont:(id)font;	// 0x30b23739
- (void)setFrame:(CGRect)frame;	// 0x308f7dd9
// converted property setter: - (void)setHidesAccessoryWhenEditing:(BOOL)editing;	// 0x30b23f5d
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x308ff1a5
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x308ff1bd
// converted property setter: - (void)setImage:(id)image;	// 0x30b23951
// declared property setter: - (void)setIndentationLevel:(int)level;	// 0x30a08d91
// declared property setter: - (void)setIndentationWidth:(float)width;	// 0x30a08db9
// converted property setter: - (void)setLayoutManager:(id)manager;	// 0x308f8091
// converted property setter: - (void)setLineBreakMode:(int)mode;	// 0x30b23825
// declared property setter: - (void)setMultipleSelectionBackgroundView:(id)view;	// 0x30b23ab5
// declared property setter: - (void)setOldEditingData:(id)data;	// 0x30b2185d
- (void)setPlaceHolderValue:(id)value;	// 0x30b26185
// converted property setter: - (void)setReturnAction:(SEL)action;	// 0x30b261b5
- (void)setReuseIdentifier:(id)identifier;	// 0x30b23c7d
// converted property setter: - (void)setSectionBorderColor:(id)color;	// 0x308feab1
// converted property setter: - (void)setSectionLocation:(int)location;	// 0x30b25575
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x308e7ba1
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x308fef01
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x308fef19
// declared property setter: - (void)setSelectedBackgroundView:(id)view;	// 0x3092bb69
- (void)setSelectedBackgroundView:(id)view animated:(BOOL)animated;	// 0x3092bb81
// converted property setter: - (void)setSelectedImage:(id)image;	// 0x30b239a5
// converted property setter: - (void)setSelectedTextColor:(id)color;	// 0x30b238fd
// converted property setter: - (void)setSelectionFadeDuration:(float)duration;	// 0x308f7f1d
// converted property setter: - (void)setSelectionSegueTemplate:(id)aTemplate;	// 0x30b22901
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x308e7535
// converted property setter: - (void)setSelectionTintColor:(id)color;	// 0x30b23cc5
// converted property setter: - (void)setSeparatorColor:(id)color;	// 0x308fe2c5
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x308deb0d
// declared property setter: - (void)setShouldIndentWhileEditing:(BOOL)indentWhileEditing;	// 0x30b23de9
- (void)setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x30b24029
// declared property setter: - (void)setShowsReorderControl:(BOOL)control;	// 0x3097b091
// converted property setter: - (void)setTableBackgroundColor:(id)color;	// 0x30b23c1d
// converted property setter: - (void)setTableViewStyle:(int)style;	// 0x308fa0bd
// converted property setter: - (void)setTarget:(id)target;	// 0x30b25165
// converted property setter: - (void)setText:(id)text;	// 0x30b235f1
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x30b237d1
// converted property setter: - (void)setTextColor:(id)color;	// 0x30b23891
// declared property setter: - (void)setTextFieldOffset:(float)offset;	// 0x30a5b635
// converted property setter: - (void)setTopShadowColor:(id)color;	// 0x308fe3c1
// declared property setter: - (void)setWasSwiped:(BOOL)swiped;	// 0x308e77ed
// declared property getter: - (BOOL)shouldIndentWhileEditing;	// 0x3098ab1d
- (void)showSelectedBackgroundView:(BOOL)view animated:(BOOL)animated;	// 0x309eeb81
// declared property getter: - (BOOL)showingDeleteConfirmation;	// 0x308fbea1
// declared property getter: - (BOOL)showsReorderControl;	// 0x3092c3a5
- (int)style;	// 0x308fdcc5
// converted property getter: - (id)tableBackgroundColor;	// 0x3098d41d
// converted property getter: - (int)tableViewStyle;	// 0x308f84bd
// converted property getter: - (id)target;	// 0x30b2524d
// converted property getter: - (id)text;	// 0x30b236a9
// converted property getter: - (int)textAlignment;	// 0x30b237fd
// converted property getter: - (id)textColor;	// 0x30b238d5
- (void)textFieldDidBecomeFirstResponder:(id)textField;	// 0x30b261b1
// declared property getter: - (float)textFieldOffset;	// 0x30a5c065
// declared property getter: - (id)textLabel;	// 0x3097b0e9
- (CGRect)textRectForContentRect:(CGRect)contentRect;	// 0x30b24745
// converted property getter: - (id)topShadowColor;	// 0x3098c199
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x309ed8fd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30b25515
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x309efed5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30b253c9
// declared property getter: - (BOOL)wasSwiped;	// 0x3092c38d
- (void)willMoveToSuperview:(id)superview;	// 0x308feb31
- (void)willTransitionToState:(unsigned)state;	// 0x309f4261
@end
