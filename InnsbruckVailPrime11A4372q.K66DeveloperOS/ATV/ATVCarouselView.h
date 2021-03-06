/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, NSTimer, ATVCarouselViewUIOpContext;
@protocol ATVCarouselViewDelegate, ATVCarouselViewDataSource, ATVCarouselViewUIDelegate;

__attribute__((visibility("hidden")))
@interface ATVCarouselView : BRControl {
	BOOL _swipeControlsCursor;	// 84 = 0x54
	BOOL _subfocusChangeTriggersRelayout;	// 85 = 0x55
	BOOL _cyclesItems;	// 86 = 0x56
	BOOL _autoAnimates;	// 87 = 0x57
	BOOL _editing;	// 88 = 0x58
	BOOL __isAutoAnimating;	// 89 = 0x59
	BOOL __goingForward;	// 90 = 0x5a
	XXStruct_qlg9jA _preferredHeight;	// 92 = 0x5c
	XXStruct_qlg9jA _preferredWidth;	// 96 = 0x60
	id<ATVCarouselViewDataSource> _dataSource;	// 100 = 0x64
	id<ATVCarouselViewDelegate> _delegate;	// 104 = 0x68
	id<ATVCarouselViewUIDelegate> _uiDelegate;	// 108 = 0x6c
	int __currentIndex;	// 112 = 0x70
	NSArray *__presentedItems;	// 116 = 0x74
	NSTimer *__delayedAnimationTimer;	// 120 = 0x78
	ATVCarouselViewUIOpContext *__uiOpContext;	// 124 = 0x7c
	NSRange __presentedItemsRange;	// 128 = 0x80
	NSRange __focusableRange;	// 136 = 0x88
}
@property(assign, nonatomic) int _currentIndex;	// G=0xf8875; S=0xf8885; @synthesize=__currentIndex
@property(assign, nonatomic, setter=_setDelayedAnimationTimer:) NSTimer *_delayedAnimationTimer;	// G=0xf88b5; S=0xf5f11; @synthesize=__delayedAnimationTimer
@property(assign, nonatomic) NSRange _focusableRange;	// G=0xf8849; S=0xf8861; @synthesize=__focusableRange
@property(assign, nonatomic) BOOL _goingForward;	// G=0xf87fd; S=0xf880d; @synthesize=__goingForward
@property(assign, nonatomic) BOOL _isAutoAnimating;	// G=0xf87dd; S=0xf87ed; @synthesize=__isAutoAnimating
@property(retain, nonatomic) NSArray *_presentedItems;	// G=0xf8895; S=0xf88a5; @synthesize=__presentedItems
@property(assign, nonatomic) NSRange _presentedItemsRange;	// G=0xf881d; S=0xf8835; @synthesize=__presentedItemsRange
@property(retain, nonatomic, setter=_setUIOpContext:) ATVCarouselViewUIOpContext *_uiOpContext;	// G=0xf88c5; S=0xf5f55; @synthesize=__uiOpContext
@property(assign, nonatomic) BOOL autoAnimates;	// G=0xf8715; S=0xf4801; @synthesize=_autoAnimates
@property(assign, nonatomic) BOOL cyclesItems;	// G=0xf8705; S=0xf47d5; @synthesize=_cyclesItems
@property(assign, nonatomic) id<ATVCarouselViewDataSource> dataSource;	// G=0xf879d; S=0xf4749; @synthesize=_dataSource
@property(assign, nonatomic) id<ATVCarouselViewDelegate> delegate;	// G=0xf87ad; S=0xf87bd; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0xf877d; S=0xf878d; @synthesize=_editing
@property(assign, nonatomic) XXStruct_qlg9jA preferredHeight;	// G=0xf8725; S=0xf8741; @synthesize=_preferredHeight
@property(assign, nonatomic) XXStruct_qlg9jA preferredWidth;	// G=0xf8751; S=0xf876d; @synthesize=_preferredWidth
@property(assign, nonatomic) int selectedIndex;	// G=0xf48c9; S=0xf48b9; 
@property(readonly, assign, nonatomic) BRControl *selectedItem;	// G=0xf491d; 
@property(assign, nonatomic) BOOL subfocusChangeTriggersRelayout;	// G=0xf86e5; S=0xf86f5; @synthesize=_subfocusChangeTriggersRelayout
@property(assign, nonatomic) BOOL swipeControlsCursor;	// G=0xf86c5; S=0xf86d5; @synthesize=_swipeControlsCursor
@property(assign, nonatomic, setter=setUIDelegate:) id<ATVCarouselViewUIDelegate> uiDelegate;	// G=0xf87cd; S=0xf4789; @synthesize=_uiDelegate
- (id)init;	// 0xf4619
- (void)_beginEditing;	// 0xf70a1
- (void)_bringCurrentIndexWithinFocusableRange;	// 0xf8309
- (BOOL)_canEditSelectedItem;	// 0xf6f01
- (BOOL)_canGoBackward;	// 0xf7031
- (BOOL)_canGoForward;	// 0xf6f91
- (id)_controlAtIndex:(unsigned)index;	// 0xf5e5d
// declared property getter: - (int)_currentIndex;	// 0xf8875
// declared property getter: - (id)_delayedAnimationTimer;	// 0xf88b5
- (void)_endEditingWithItemRemoved:(BOOL)itemRemoved;	// 0xf7235
- (void)_focusChanged:(id)changed;	// 0xf8451
// declared property getter: - (NSRange)_focusableRange;	// 0xf8849
// declared property getter: - (BOOL)_goingForward;	// 0xf87fd
- (BOOL)_handleEvent:(id)event;	// 0xf73d5
- (BOOL)_handleRearrangeEvent:(id)event;	// 0xf7ce1
// declared property getter: - (BOOL)_isAutoAnimating;	// 0xf87dd
- (id)_makeUIOpContextWithType:(int)type;	// 0xf604d
- (int)_mapPresentedItemsIndex:(int)index;	// 0xf6e8d
- (void)_moveControlAtIndex:(int)index toIndex:(int)index2;	// 0xf8051
- (CGRect)_preferredItemBounds;	// 0xf5d75
// declared property getter: - (id)_presentedItems;	// 0xf8895
// declared property getter: - (NSRange)_presentedItemsRange;	// 0xf881d
- (void)_processUIOpForItems:(id)items startingAtPositionIndex:(unsigned)positionIndex context:(id)context waitingForCompletion:(BOOL *)completion;	// 0xf6251
- (void)_scheduleRefreshWithType:(int)type;	// 0xf6149
// declared property setter: - (void)_setDelayedAnimationTimer:(id)timer;	// 0xf5f11
- (BOOL)_setSelectedIndex:(int)index;	// 0xf81a5
// declared property setter: - (void)_setUIOpContext:(id)context;	// 0xf5f55
- (void)_startAnimation;	// 0xf6d01
- (void)_stopAnimation;	// 0xf6e05
- (int)_targetIndexForMoveFromIndex:(int)index toProposedIndex:(int)proposedIndex;	// 0xf7fd9
- (void)_trickleAnimation:(id)animation;	// 0xf69f9
// declared property getter: - (id)_uiOpContext;	// 0xf88c5
- (BOOL)accessibilityOutputsRangeForChildren;	// 0xf5cd5
- (id)accessibilityRangeString;	// 0xf5cd9
// declared property getter: - (BOOL)autoAnimates;	// 0xf8715
- (BOOL)beginEditing;	// 0xf4c05
- (BOOL)brEventAction:(id)action;	// 0xf5c51
- (void)controlWasActivated;	// 0xf50f5
- (void)controlWasDeactivated;	// 0xf514d
- (void)controlWasFocused;	// 0xf51f5
- (void)controlWasUnfocused;	// 0xf5275
// declared property getter: - (BOOL)cyclesItems;	// 0xf8705
// declared property getter: - (id)dataSource;	// 0xf879d
- (void)dealloc;	// 0xf46c5
// declared property getter: - (id)delegate;	// 0xf87ad
- (void)endEditing;	// 0xf4c59
- (void)focusDirectlyOnControl:(id)control;	// 0xf859d
// declared property getter: - (BOOL)isEditing;	// 0xf877d
- (void)layoutSubcontrols;	// 0xf54c1
// declared property getter: - (XXStruct_qlg9jA)preferredHeight;	// 0xf8725
// declared property getter: - (XXStruct_qlg9jA)preferredWidth;	// 0xf8751
- (void)reload;	// 0xf49a5
- (void)removeItemAtIndex:(int)index;	// 0xf4c91
// declared property getter: - (int)selectedIndex;	// 0xf48c9
// declared property getter: - (id)selectedItem;	// 0xf491d
// declared property setter: - (void)setAutoAnimates:(BOOL)animates;	// 0xf4801
// declared property setter: - (void)setCyclesItems:(BOOL)items;	// 0xf47d5
// declared property setter: - (void)setDataSource:(id)source;	// 0xf4749
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xf87bd
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0xf878d
// declared property setter: - (void)setPreferredHeight:(XXStruct_qlg9jA)height;	// 0xf8741
// declared property setter: - (void)setPreferredWidth:(XXStruct_qlg9jA)width;	// 0xf876d
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0xf48b9
- (void)setSelectedIndexSimulatingEvent:(int)event;	// 0xf486d
// declared property setter: - (void)setSubfocusChangeTriggersRelayout:(BOOL)relayout;	// 0xf86f5
// declared property setter: - (void)setSwipeControlsCursor:(BOOL)cursor;	// 0xf86d5
// declared property setter: - (void)setUIDelegate:(id)delegate;	// 0xf4789
// declared property setter: - (void)set_currentIndex:(int)index;	// 0xf8885
// declared property setter: - (void)set_focusableRange:(NSRange)range;	// 0xf8861
// declared property setter: - (void)set_goingForward:(BOOL)forward;	// 0xf880d
// declared property setter: - (void)set_isAutoAnimating:(BOOL)animating;	// 0xf87ed
// declared property setter: - (void)set_presentedItems:(id)items;	// 0xf88a5
// declared property setter: - (void)set_presentedItemsRange:(NSRange)range;	// 0xf8835
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xf5419
// declared property getter: - (BOOL)subfocusChangeTriggersRelayout;	// 0xf86e5
// declared property getter: - (BOOL)swipeControlsCursor;	// 0xf86c5
// declared property getter: - (id)uiDelegate;	// 0xf87cd
- (void)windowMaxBoundsChanged;	// 0xf530d
@end

