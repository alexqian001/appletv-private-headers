/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"
#import "MCAnimationPathSupport.h"

@class NSMutableSet, NSMutableDictionary, NSString, NSSet, NSDictionary;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
	NSMutableDictionary *mAttributes;	// 12 = 0xc
	NSMutableSet *mAnimationPaths;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	NSString *mFilterID;	// 24 = 0x18
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x3251e849; 
@property(copy) NSDictionary *attributes;	// G=0x3251dd5d; S=0x3251de59; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x3251e999; 
@property(copy) NSString *filterID;	// G=0x3251e231; S=0x3251e245; @synthesize=mFilterID
@property(assign, nonatomic) unsigned index;	// G=0x3251e211; S=0x3251e221; @synthesize=mIndex
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x3251e255
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3251d819
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3251df69
- (void)addAnimationPath:(id)path;	// 0x3251ed6d
- (id)animationPathForKey:(id)key;	// 0x3251ea9d
// declared property getter: - (id)animationPaths;	// 0x3251e849
- (id)attributeForKey:(id)key;	// 0x3251dab1
// declared property getter: - (id)attributes;	// 0x3251dd5d
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x3251e999
- (void)demolish;	// 0x3251d911
- (void)demolishAnimationPaths;	// 0x3251e479
// declared property getter: - (id)filterID;	// 0x3251e231
- (id)imprint;	// 0x3251d999
- (id)imprintsForAnimationPaths;	// 0x3251e749
// declared property getter: - (unsigned)index;	// 0x3251e211
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3251da75
- (void)removeAllAnimationPaths;	// 0x3251f3a9
- (void)removeAnimationPathForKey:(id)key;	// 0x3251f03d
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x3251dbe9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3251de59
// declared property setter: - (void)setFilterID:(id)anId;	// 0x3251e245
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x3251e221
@end

