/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class NSMutableDictionary, UIImageView, NSArray, UIKeyboardCandidateScrollViewController, UIKeyboardCandidateSortControl, NSString, UIKeyboardCandidateGridHeader;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
	UIImageView *_backgroundView;	// 84 = 0x54
	UIView *_topBarShadow;	// 88 = 0x58
	UIView *_bottomBarShadow;	// 92 = 0x5c
	UIKeyboardCandidateSortControl *_sortBar;	// 96 = 0x60
	UIKeyboardCandidateGridHeader *_gridHeader;	// 100 = 0x64
	BOOL _drawTopShadow;	// 104 = 0x68
	BOOL _drawBottomShadow;	// 105 = 0x69
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 108 = 0x6c
	NSArray *_candidates;	// 112 = 0x70
	unsigned _selectedCandidateIndex;	// 116 = 0x74
	NSArray *_sorts;	// 120 = 0x78
	NSMutableDictionary *_scrollViewControllers;	// 124 = 0x7c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 128 = 0x80
	unsigned _numberOfColumns;	// 132 = 0x84
	id<UIScrollViewDelegate> _scrollViewDelegate;	// 136 = 0x88
	int _visualStyle;	// 140 = 0x8c
	NSString *_inlineText;	// 144 = 0x90
	NSArray *_sortedCandidates;	// 148 = 0x94
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x32e9e389; S=0x32e9e399; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x32e9e3a9; S=0x32e9d999; @synthesize=_candidates
@property(assign, nonatomic) BOOL drawBottomShadow;	// G=0x32e9e379; S=0x32e9d1ad; @synthesize=_drawBottomShadow
@property(assign, nonatomic) BOOL drawTopShadow;	// G=0x32e9e369; S=0x32e9d169; @synthesize=_drawTopShadow
@property(assign, nonatomic) UIKeyboardCandidateGridHeader *gridHeader;	// G=0x32e9e409; S=0x32e9e419; @synthesize=_gridHeader
@property(retain, nonatomic) NSString *inlineText;	// G=0x32e9e489; S=0x32e9d5d5; @synthesize=_inlineText
@property(assign, nonatomic) unsigned numberOfColumns;	// G=0x32e9e429; S=0x32e9e439; @synthesize=_numberOfColumns
@property(retain, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x32e9e3d9; S=0x32e9e3e9; @synthesize=_scrollViewController
@property(readonly, assign, nonatomic) NSMutableDictionary *scrollViewControllers;	// G=0x32e9dd29; @synthesize=_scrollViewControllers
@property(assign, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;	// G=0x32e9e449; S=0x32e9e459; @synthesize=_scrollViewDelegate
@property(assign, nonatomic) unsigned selectedCandidateIndex;	// G=0x32e9d319; S=0x32e9d341; @synthesize=_selectedCandidateIndex
@property(assign, nonatomic) UIKeyboardCandidateSortControl *sortBar;	// G=0x32e9e3f9; S=0x32e9ddb9; @synthesize=_sortBar
@property(retain, nonatomic) NSArray *sortedCandidates;	// G=0x32e9e499; S=0x32e9e4a9; @synthesize=_sortedCandidates
@property(retain, nonatomic) NSArray *sorts;	// G=0x32e9e3b9; S=0x32e9e3c9; @synthesize=_sorts
@property(assign, nonatomic) int visualStyle;	// G=0x32e9e469; S=0x32e9e479; @synthesize=_visualStyle
- (id)initWithFrame:(CGRect)frame;	// 0x32e9c801
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x32e9d4b5
- (id)candidateAtIndex:(unsigned)index;	// 0x32e9d489
- (id)candidateGroupsForSortIndex:(int)sortIndex;	// 0x32e9d855
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x32e9d765
// declared property getter: - (id)candidateListDelegate;	// 0x32e9e389
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x32e9d7b5
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x32e9d805
// declared property getter: - (id)candidates;	// 0x32e9e3a9
- (void)candidatesDidChange;	// 0x32e9d509
- (BOOL)candidatesForSortIndexShowAlternativeText:(int)sortIndexShowAlternativeText;	// 0x32e9d8ad
- (void)clearViews;	// 0x32e9cd95
- (void)configureKeyboard:(id)keyboard;	// 0x32e9d68d
- (unsigned)count;	// 0x32e9d4e1
- (id)currentCandidate;	// 0x32e9d439
- (unsigned)currentIndex;	// 0x32e9d461
- (void)dealloc;	// 0x32e9cca1
// declared property getter: - (BOOL)drawBottomShadow;	// 0x32e9e379
// declared property getter: - (BOOL)drawTopShadow;	// 0x32e9e369
// declared property getter: - (id)gridHeader;	// 0x32e9e409
- (BOOL)handleNumberKey:(unsigned)key;	// 0x32e9d6b9
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x32e9d6e5
- (BOOL)hasNextPage;	// 0x32e9d411
- (BOOL)hasPreviousPage;	// 0x32e9d3e9
- (id)indexTitlesForGroupTitles:(id)groupTitles;	// 0x32e9e295
// declared property getter: - (id)inlineText;	// 0x32e9e489
- (void)layout;	// 0x32e9d06d
- (void)layoutSubviews;	// 0x32e9cecd
// declared property getter: - (unsigned)numberOfColumns;	// 0x32e9e429
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x32e9e365
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x32e9e361
// declared property getter: - (id)scrollViewController;	// 0x32e9e3d9
// declared property getter: - (id)scrollViewControllers;	// 0x32e9dd29
// declared property getter: - (id)scrollViewDelegate;	// 0x32e9e449
- (void)selectCandidate:(id)candidate;	// 0x32e9d1f5
// declared property getter: - (unsigned)selectedCandidateIndex;	// 0x32e9d319
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x32e9e399
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x32e9d999
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32e9d55d
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32e9d591
// declared property setter: - (void)setDrawBottomShadow:(BOOL)shadow;	// 0x32e9d1ad
// declared property setter: - (void)setDrawTopShadow:(BOOL)shadow;	// 0x32e9d169
// declared property setter: - (void)setGridHeader:(id)header;	// 0x32e9e419
// declared property setter: - (void)setInlineText:(id)text;	// 0x32e9d5d5
// declared property setter: - (void)setNumberOfColumns:(unsigned)columns;	// 0x32e9e439
// declared property setter: - (void)setScrollViewController:(id)controller;	// 0x32e9e3e9
// declared property setter: - (void)setScrollViewDelegate:(id)delegate;	// 0x32e9e459
// declared property setter: - (void)setSelectedCandidateIndex:(unsigned)index;	// 0x32e9d341
// declared property setter: - (void)setSortBar:(id)bar;	// 0x32e9ddb9
// declared property setter: - (void)setSortedCandidates:(id)candidates;	// 0x32e9e4a9
// declared property setter: - (void)setSorts:(id)sorts;	// 0x32e9e3c9
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x32e9d601
// declared property setter: - (void)setVisualStyle:(int)style;	// 0x32e9e479
- (void)showArrowButton:(BOOL)button;	// 0x32e9d221
- (void)showCandidate:(id)candidate;	// 0x32e9d29d
- (void)showCandidateAtIndex:(unsigned)index;	// 0x32e9d271
- (void)showNextCandidate;	// 0x32e9d2c9
- (void)showNextPage;	// 0x32e9d399
- (void)showPageAtIndex:(unsigned)index;	// 0x32e9d36d
- (void)showPreviousCandidate;	// 0x32e9d2f1
- (void)showPreviousPage;	// 0x32e9d3c1
// declared property getter: - (id)sortBar;	// 0x32e9e3f9
- (void)sortSelectionBarAction:(id)action;	// 0x32e9de4d
// declared property getter: - (id)sortedCandidates;	// 0x32e9e499
// declared property getter: - (id)sorts;	// 0x32e9e3b9
- (void)statusBarFrameWillChange:(id)statusBarFrame;	// 0x32e9d1f1
// declared property getter: - (int)visualStyle;	// 0x32e9e469
@end

