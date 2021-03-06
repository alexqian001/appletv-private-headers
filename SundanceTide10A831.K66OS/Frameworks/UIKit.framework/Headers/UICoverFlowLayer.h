/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <__objc_empty_cache.h> // Unknown library


@interface UICoverFlowLayer : __objc_empty_cache {
	void *_private;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame numberOfCovers:(unsigned)covers numberOfPlaceholders:(unsigned)placeholders;	// 0x31e00911
- (unsigned)_coverAtScreenPosition:(CGPoint)screenPosition;	// 0x31e02bd9
- (void)_notifySelectionDidChange;	// 0x31e01c41
- (void)_prefetch:(unsigned)prefetch atIndex:(unsigned)index;	// 0x31e018c5
- (void)_recycleLayer:(int)layer to:(int)to;	// 0x31e02ed9
- (void)_requestBatch;	// 0x31e01915
- (void)_requestImageAtIndex:(int)index;	// 0x31e01a89
- (void)_requestImageAtIndex:(int)index quality:(unsigned)quality;	// 0x31e01a1d
- (void)_setNewSelectedIndex:(int)index;	// 0x31e03105
- (void)_setupFlippedCoverLayer:(id)layer;	// 0x31e06b81
- (void)_updateTick;	// 0x31e03681
- (void)benchmarkHeartbeatLongScrub;	// 0x31e076bd
- (void)benchmarkHeartbeatScrubAndWait;	// 0x31e07835
- (void)benchmarkHeartbeatShortScrub;	// 0x31e07749
- (BOOL)benchmarkImageManager:(void *)manager;	// 0x31e07fbd
- (void)benchmarkImageMode:(int)mode;	// 0x31e085b5
- (BOOL)benchmarkLoadScrub;	// 0x31e07e31
- (void)benchmarkLongScrubSpeed:(float)speed;	// 0x31e0867d
- (void)benchmarkMode:(int)mode;	// 0x31e084e5
- (void)benchmarkPerformanceLog:(BOOL)log;	// 0x31e08609
- (void)benchmarkSetEnv;	// 0x31e081c1
- (void)benchmarkSkipImageLoad:(BOOL)load;	// 0x31e086b9
- (int)benchmarkTick;	// 0x31e07535
- (void)benchmarkTickMode:(int)mode;	// 0x31e08575
- (void)benchmarkTightLoop;	// 0x31e0797d
- (void)benchmarkTightLoopScrub;	// 0x31e07a29
- (void)benchmarkTightLoopTime:(unsigned)time;	// 0x31e08649
- (unsigned)coverIndexAtPosition:(float)position;	// 0x31e06b79
- (void)dealloc;	// 0x31e013f5
- (void)displayTick;	// 0x31e05ead
- (void)dragFlow:(unsigned)flow atPoint:(CGPoint)point;	// 0x31e060e1
- (void)flipSelectedCover;	// 0x31e0742d
- (unsigned)indexOfSelectedCover;	// 0x31e02bc5
- (unsigned)numberOfCovers;	// 0x31e013cd
- (unsigned)numberOfPlaceholders;	// 0x31e013e1
- (void)selectCoverAtIndex:(unsigned)index;	// 0x31e06ae9
- (void)selectCoverAtOffset:(int)offset;	// 0x31e06b55
- (void)setDelegate:(id)delegate;	// 0x31e014ed
- (void)setDisplayedOrientation:(int)orientation animate:(BOOL)animate;	// 0x31e024ed
- (void)setImage:(void *)image atIndex:(unsigned)index;	// 0x31e02b45
- (void)setImage:(void *)image atIndex:(unsigned)index type:(unsigned)type;	// 0x31e02769
- (void)setImage:(void *)image atIndex:(unsigned)index type:(unsigned)type imageSubRect:(CGRect)rect;	// 0x31e027b5
- (void)setInfoLayer:(id)layer;	// 0x31e02619
- (void)setPlaceholderImage:(void *)image atPlaceholderIndex:(unsigned)placeholderIndex;	// 0x31e017b9
- (void)setPlaceholderImage:(void *)image atPlaceholderIndex:(unsigned)placeholderIndex imageSubRect:(CGRect)rect;	// 0x31e017f9
- (void)setPlaceholderIndicesForCovers:(unsigned *)covers;	// 0x31e0188d
- (void)transition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;	// 0x31e01cf1
- (void)transitionIn:(float)anIn;	// 0x31e01c8d
- (void)transitionIn:(float)anIn fromFrame:(CGRect)frame;	// 0x31e0248d
- (void)transitionOut:(float)anOut;	// 0x31e01cbd
- (void)transitionOut:(float)anOut toFrame:(CGRect)frame;	// 0x31e024bd
@end

