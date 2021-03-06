/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIView.h> // Unknown library

@class NSMutableSet, QLPageNumberView, NSMutableDictionary, QLThumbnailView, NSMutableArray, NSOperationQueue;
@protocol QLScrubViewDataSource;

@interface QLScrubView : UIView {
	id<QLScrubViewDataSource> _dataSource;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	BOOL _runOnMainThread;	// 92 = 0x5c
	BOOL _needsThumbLayout;	// 93 = 0x5d
	float _thumbOrigin;	// 96 = 0x60
	float _thumbEnd;	// 100 = 0x64
	float _thumbHeight;	// 104 = 0x68
	int _pageCount;	// 108 = 0x6c
	int _selectedPage;	// 112 = 0x70
	NSOperationQueue *_queue;	// 116 = 0x74
	NSMutableSet *_operations;	// 120 = 0x78
	NSMutableDictionary *_thumbViews;	// 124 = 0x7c
	NSMutableArray *_visibleThumbIndexes;	// 128 = 0x80
	QLThumbnailView *_selectedThumbnailView;	// 132 = 0x84
	QLPageNumberView *_pageNumberLabel;	// 136 = 0x88
}
@property(assign) id<QLScrubViewDataSource> dataSource;	// G=0x32be96c9; S=0x32be96dd; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x32be96f5; S=0x32be9709; @synthesize=_delegate
@property(assign) BOOL runOnMainThread;	// G=0x32be7e85; S=0x32be7db9; 
+ (float)defaultWidth;	// 0x32be8441
- (id)initWithFrame:(CGRect)frame;	// 0x32be7a99
- (void)_cancelAllOperations;	// 0x32be7be5
- (void)_handleSwipAtLocation:(CGPoint)location;	// 0x32be81d1
- (void)_hidePageLabel;	// 0x32be87f1
- (void)_notifyPageChanged;	// 0x32be8131
- (void)_notifyScrubingEnded;	// 0x32be8189
- (void)_notifyScrubingStarted;	// 0x32be80e9
- (void)_removeThumbviews;	// 0x32be7e95
- (void)_showPageLabel;	// 0x32be8611
- (CGRect)_thumbnailFrameForPageAtIndex:(int)index;	// 0x32be8491
- (void)_updateSelectedThumbnailView;	// 0x32be8f99
// declared property getter: - (id)dataSource;	// 0x32be96c9
- (void)dealloc;	// 0x32be7ce1
// declared property getter: - (id)delegate;	// 0x32be96f5
- (void)didReceiveMemoryWarning;	// 0x32be7da9
- (void)drawRect:(CGRect)rect;	// 0x32be94f1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32be8085
- (void)layoutSubviews;	// 0x32be8811
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32be9419
- (void)reloadThumbnails;	// 0x32be7f91
// declared property getter: - (BOOL)runOnMainThread;	// 0x32be7e85
- (void)selectPageNumber:(int)number;	// 0x32be804d
// declared property setter: - (void)setDataSource:(id)source;	// 0x32be96dd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32be9709
- (void)setFrame:(CGRect)frame;	// 0x32be8449
// declared property setter: - (void)setRunOnMainThread:(BOOL)thread;	// 0x32be7db9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32be8315
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32be8411
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32be83e1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32be838d
@end

