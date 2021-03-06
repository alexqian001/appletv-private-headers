/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSMutableSet, NSArray, NSSet;

@interface MCContainerSerializer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSArray *mCachedOrderedPlugs;	// 32 = 0x20
	double mCachedDuration;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned countOfPlugs;	// G=0x3340a379; 
@property(readonly, assign) double duration;	// G=0x33409fe9; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0x3340b321; 
@property(readonly, assign) NSSet *plugs;	// G=0x3340a249; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x334098d9
- (id)init;	// 0x33409959
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x334099d9
- (id)addPlugForContainer:(id)container;	// 0x3340a651
- (id)addPlugsForContainers:(id)containers;	// 0x3340a6e1
// declared property getter: - (unsigned)countOfPlugs;	// 0x3340a379
- (void)demolish;	// 0x33409b95
// declared property getter: - (double)duration;	// 0x33409fe9
- (id)imprint;	// 0x33409df9
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0x3340a715
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0x3340a795
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3340afe9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33409f45
// declared property getter: - (id)orderedPlugs;	// 0x3340b321
- (id)plugAtIndex:(unsigned)index;	// 0x3340a445
// declared property getter: - (id)plugs;	// 0x3340a249
- (void)removeAllPlugs;	// 0x3340b2cd
- (void)removePlugsAtIndices:(id)indices;	// 0x3340ac4d
- (double)timeInForPlug:(id)plug;	// 0x3340b511
@end

