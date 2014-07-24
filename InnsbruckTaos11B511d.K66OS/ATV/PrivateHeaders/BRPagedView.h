/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"

@class BRImageControl, ATVImage, BRDotArrayControl, CATransition;

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
@property(readonly, assign) unsigned currentPage;	// G=0x4169c1; @synthesize=_currentPage
@property(assign) id dataSource;	// G=0x41694d; S=0x416961; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x415f29; S=0x415f39; 
@property(retain) CATransition *nextPageTransition;	// G=0x416979; S=0x41698d; @synthesize=_nextPageTransition
@property(retain) CATransition *prevPageTransition;	// G=0x41699d; S=0x4169b1; @synthesize=_prevPageTransition
@property(assign) BOOL showsArrows;	// G=0x415c81; S=0x415c91; 
@property(assign) BOOL showsDots;	// G=0x415d05; S=0x415d15; 
- (id)init;	// 0x41567d
- (BOOL)brEventAction:(id)action;	// 0x4162a9
- (void)cancelContainerViewLoad;	// 0x4164a5
- (void)controlWasDeactivated;	// 0x415bc1
// declared property getter: - (unsigned)currentPage;	// 0x4169c1
// declared property getter: - (id)dataSource;	// 0x41694d
- (void)dealloc;	// 0x415a7d
// declared property getter: - (id)delegate;	// 0x415f29
- (void)layoutSubcontrols;	// 0x41667d
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x41638d
- (BOOL)nextPage;	// 0x4160b9
// declared property getter: - (id)nextPageTransition;	// 0x416979
- (BOOL)prevPage;	// 0x4161c5
// declared property getter: - (id)prevPageTransition;	// 0x41699d
- (void)reloadData;	// 0x415d51
- (void)removeFromParent;	// 0x416021
// declared property setter: - (void)setDataSource:(id)source;	// 0x416961
- (void)setDatasource:(id)datasource;	// 0x415e7d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x415f39
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x416565
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x4165b5
// declared property setter: - (void)setNextPageTransition:(id)transition;	// 0x41698d
// declared property setter: - (void)setPrevPageTransition:(id)transition;	// 0x4169b1
- (void)setReadyToDisplay;	// 0x416515
// declared property setter: - (void)setShowsArrows:(BOOL)arrows;	// 0x415c91
// declared property setter: - (void)setShowsDots:(BOOL)dots;	// 0x415d15
// declared property getter: - (BOOL)showsArrows;	// 0x415c81
// declared property getter: - (BOOL)showsDots;	// 0x415d05
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x416609
- (void)windowMaxBoundsChanged;	// 0x415c31
@end
