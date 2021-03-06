/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVChainedAnimationGroup;

__attribute__((visibility("hidden")))
@interface ATVCarouselViewUIOpContext : XXUnknownSuperclass {
	BOOL _previousCompletionException;	// 4 = 0x4
	double _previousCompletionTime;	// 8 = 0x8
	ATVCarouselViewItemsConfig _previousItemsConfig;	// 16 = 0x10
	double _startTime;	// 36 = 0x24
	BOOL _processed;	// 44 = 0x2c
	BOOL _completed;	// 45 = 0x2d
	int _type;	// 48 = 0x30
	id _typeInfo;	// 52 = 0x34
	int _direction;	// 56 = 0x38
	ATVChainedAnimationGroup *_chainedAnimationGroup;	// 60 = 0x3c
	ATVCarouselViewUIOpContext *_precedingContext;	// 64 = 0x40
	id _itemQueryHandler;	// 68 = 0x44
	id _preProcessingBlock;	// 72 = 0x48
	id _completionBlock;	// 76 = 0x4c
	id _cleanUpBlock;	// 80 = 0x50
	ATVCarouselViewItemsConfig _itemsConfig;	// 84 = 0x54
}
@property(retain, nonatomic) ATVChainedAnimationGroup *chainedAnimationGroup;	// G=0xfc685; S=0xfc181; @synthesize=_chainedAnimationGroup
@property(copy, nonatomic) id cleanUpBlock;	// G=0xfc741; S=0xfc755; @synthesize=_cleanUpBlock
@property(assign, nonatomic) BOOL completed;	// G=0xfc6e9; S=0xfbf19; @synthesize=_completed
@property(copy, nonatomic) id completionBlock;	// G=0xfc71d; S=0xfc731; @synthesize=_completionBlock
@property(assign, nonatomic) int direction;	// G=0xfc665; S=0xfc675; @synthesize=_direction
@property(readonly, assign, nonatomic) BOOL isWaitingForPreviousCompletion;	// G=0xfbe95; 
@property(copy, nonatomic) id itemQueryHandler;	// G=0xfc6a5; S=0xfc6b9; @synthesize=_itemQueryHandler
@property(assign, nonatomic) ATVCarouselViewItemsConfig itemsConfig;	// G=0xfc619; S=0xfc635; @synthesize=_itemsConfig
@property(copy, nonatomic) id preProcessingBlock;	// G=0xfc6f9; S=0xfc70d; @synthesize=_preProcessingBlock
@property(retain, nonatomic) ATVCarouselViewUIOpContext *precedingContext;	// G=0xfc695; S=0xfbf41; @synthesize=_precedingContext
@property(readonly, assign, nonatomic) ATVCarouselViewItemsConfig previousItemsConfig;	// G=0xfbefd; 
@property(assign, nonatomic) BOOL processed;	// G=0xfc6c9; S=0xfc6d9; @synthesize=_processed
@property(assign, nonatomic) int type;	// G=0xfc5d5; S=0xfc5e5; @synthesize=_type
@property(retain, nonatomic) id typeInfo;	// G=0xfc5f5; S=0xfc605; @synthesize=_typeInfo
- (void).cxx_destruct;	// 0xfc765
- (void)_setCompleted:(BOOL)completed preemptedDuration:(double)duration;	// 0xfc4b9
- (void)animationDidStart:(id)animation;	// 0xfc379
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0xfc3b9
// declared property getter: - (id)chainedAnimationGroup;	// 0xfc685
// declared property getter: - (id)cleanUpBlock;	// 0xfc741
// declared property getter: - (BOOL)completed;	// 0xfc6e9
// declared property getter: - (id)completionBlock;	// 0xfc71d
// declared property getter: - (int)direction;	// 0xfc665
- (void)invalidate;	// 0xfc249
// declared property getter: - (BOOL)isWaitingForPreviousCompletion;	// 0xfbe95
- (id)itemAtOffset:(int)offset;	// 0xfc1e1
// declared property getter: - (id)itemQueryHandler;	// 0xfc6a5
// declared property getter: - (ATVCarouselViewItemsConfig)itemsConfig;	// 0xfc619
// declared property getter: - (id)preProcessingBlock;	// 0xfc6f9
// declared property getter: - (id)precedingContext;	// 0xfc695
// declared property getter: - (ATVCarouselViewItemsConfig)previousItemsConfig;	// 0xfbefd
// declared property getter: - (BOOL)processed;	// 0xfc6c9
// declared property setter: - (void)setChainedAnimationGroup:(id)group;	// 0xfc181
// declared property setter: - (void)setCleanUpBlock:(id)block;	// 0xfc755
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0xfbf19
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0xfc731
// declared property setter: - (void)setDirection:(int)direction;	// 0xfc675
// declared property setter: - (void)setItemQueryHandler:(id)handler;	// 0xfc6b9
// declared property setter: - (void)setItemsConfig:(ATVCarouselViewItemsConfig)config;	// 0xfc635
// declared property setter: - (void)setPreProcessingBlock:(id)block;	// 0xfc70d
// declared property setter: - (void)setPrecedingContext:(id)context;	// 0xfbf41
// declared property setter: - (void)setProcessed:(BOOL)processed;	// 0xfc6d9
// declared property setter: - (void)setType:(int)type;	// 0xfc5e5
// declared property setter: - (void)setTypeInfo:(id)info;	// 0xfc605
// declared property getter: - (int)type;	// 0xfc5d5
// declared property getter: - (id)typeInfo;	// 0xfc5f5
@end

