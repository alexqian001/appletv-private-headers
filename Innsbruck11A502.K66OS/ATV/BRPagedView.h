/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class ATVImage, BRImageControl, CATransition, BRDotArrayControl;

__attribute__((visibility("hidden")))
@interface BRPagedView : BRControl <BRContainerViewCell> {
	id _delegate;	// 84 = 0x54
	id _dataSource;	// 88 = 0x58
	unsigned _currentPage;	// 92 = 0x5c
	BRControl *_contentPanel;	// 96 = 0x60
	BRControl *_content;	// 100 = 0x64
	ATVImage *_arrowImage;	// 104 = 0x68
	BRImageControl *_rightArrow;	// 108 = 0x6c
	BRImageControl *_leftArrow;	// 112 = 0x70
	BRDotArrayControl *_pageDots;	// 116 = 0x74
	CATransition *_prevPageTransition;	// 120 = 0x78
	CATransition *_nextPageTransition;	// 124 = 0x7c
	BOOL _showsArrows;	// 128 = 0x80
	BOOL _showsDots;	// 129 = 0x81
	id _loadCompletionBlock;	// 132 = 0x84
	BOOL _delegateRetained;	// 136 = 0x88
	BOOL _dataSourceRetained;	// 137 = 0x89
}
@property(readonly, assign) unsigned currentPage;	// G=0x411481; @synthesize=_currentPage
@property(assign) id dataSource;	// G=0x41140d; S=0x411421; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x4109e9; S=0x4109f9; 
@property(retain) CATransition *nextPageTransition;	// G=0x411439; S=0x41144d; @synthesize=_nextPageTransition
@property(retain) CATransition *prevPageTransition;	// G=0x41145d; S=0x411471; @synthesize=_prevPageTransition
@property(assign) BOOL showsArrows;	// G=0x410741; S=0x410751; 
@property(assign) BOOL showsDots;	// G=0x4107c5; S=0x4107d5; 
- (id)init;	// 0x41013d
- (BOOL)brEventAction:(id)action;	// 0x410d69
- (void)cancelContainerViewLoad;	// 0x410f65
- (void)controlWasDeactivated;	// 0x410681
// declared property getter: - (unsigned)currentPage;	// 0x411481
// declared property getter: - (id)dataSource;	// 0x41140d
- (void)dealloc;	// 0x41053d
// declared property getter: - (id)delegate;	// 0x4109e9
- (void)layoutSubcontrols;	// 0x41113d
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x410e4d
- (BOOL)nextPage;	// 0x410b79
// declared property getter: - (id)nextPageTransition;	// 0x411439
- (BOOL)prevPage;	// 0x410c85
// declared property getter: - (id)prevPageTransition;	// 0x41145d
- (void)reloadData;	// 0x410811
- (void)removeFromParent;	// 0x410ae1
// declared property setter: - (void)setDataSource:(id)source;	// 0x411421
- (void)setDatasource:(id)datasource;	// 0x41093d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4109f9
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x411025
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x411075
// declared property setter: - (void)setNextPageTransition:(id)transition;	// 0x41144d
// declared property setter: - (void)setPrevPageTransition:(id)transition;	// 0x411471
- (void)setReadyToDisplay;	// 0x410fd5
// declared property setter: - (void)setShowsArrows:(BOOL)arrows;	// 0x410751
// declared property setter: - (void)setShowsDots:(BOOL)dots;	// 0x4107d5
// declared property getter: - (BOOL)showsArrows;	// 0x410741
// declared property getter: - (BOOL)showsDots;	// 0x4107c5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x4110c9
- (void)windowMaxBoundsChanged;	// 0x4106f1
@end
