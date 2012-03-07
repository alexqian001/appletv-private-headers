/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"
#import "MCActionSupport.h"

@class NSDictionary, NSSet, NSArray, NSMutableSet, NSString, NSMutableDictionary;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
	NSMutableSet *mSlides;	// 28 = 0x1c
	NSArray *mCachedOrderedSlides;	// 32 = 0x20
	NSMutableSet *mTexts;	// 36 = 0x24
	NSArray *mCachedOrderedTexts;	// 40 = 0x28
	NSMutableDictionary *mActions;	// 44 = 0x2c
	NSString *mEffectID;	// 48 = 0x30
	NSMutableDictionary *mEffectAttributes;	// 52 = 0x34
}
@property(readonly, assign) NSDictionary *actions;	// G=0x31542e0d; 
@property(readonly, assign) unsigned countOfActions;	// G=0x31542f59; 
@property(readonly, assign) unsigned countOfSlides;	// G=0x3153f8e5; 
@property(readonly, assign) unsigned countOfTexts;	// G=0x31541055; 
@property(copy) NSDictionary *effectAttributes;	// G=0x315427b1; S=0x315428a1; 
@property(copy) NSString *effectID;	// G=0x315429e1; S=0x315429f9; @synthesize=mEffectID
@property(readonly, assign) NSArray *orderedSlides;	// G=0x3153f6f9; 
@property(readonly, assign) NSArray *orderedTexts;	// G=0x31540e69; 
@property(readonly, assign) NSSet *slides;	// G=0x3153f5ad; 
@property(readonly, assign) NSSet *texts;	// G=0x31540d1d; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3153e8e9
- (id)init;	// 0x3153e99d
- (void)initActionsWithImprints:(id)imprints;	// 0x31542a25
- (id)initFromScratchWithMontage:(id)montage;	// 0x3153ea5d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3153ead1
- (void)_setAction:(id)action forKey:(id)key;	// 0x31543151
- (id)actionForKey:(id)key;	// 0x31543039
// declared property getter: - (id)actions;	// 0x31542e0d
- (id)addSlide;	// 0x3153fbd5
- (id)addSlideForAsset:(id)asset;	// 0x315401d5
- (id)addSlides:(int)slides;	// 0x3153fbfd
- (id)addSlidesForAssets:(id)assets;	// 0x31540239
- (id)addTextForAsset:(id)asset andKey:(id)key;	// 0x315413d5
- (id)addTextForAttributedString:(id)attributedString;	// 0x31541345
- (id)addTextsForAssets:(id)assets andKey:(id)key;	// 0x3154143d
- (id)addTextsForAttributedStrings:(id)attributedStrings;	// 0x315413a9
// declared property getter: - (unsigned)countOfActions;	// 0x31542f59
// declared property getter: - (unsigned)countOfSlides;	// 0x3153f8e5
// declared property getter: - (unsigned)countOfTexts;	// 0x31541055
- (void)demolish;	// 0x3153ee1d
- (void)demolishActions;	// 0x31542b3d
- (id)effectAttributeForKey:(id)key;	// 0x315424f9
// declared property getter: - (id)effectAttributes;	// 0x315427b1
// declared property getter: - (id)effectID;	// 0x315429e1
- (id)imprint;	// 0x3153f251
- (id)imprintsForActions;	// 0x31542d01
- (id)insertSlideAtIndex:(int)index;	// 0x3153fec1
- (id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;	// 0x31540265
- (id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;	// 0x315402ad
- (id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;	// 0x31541959
- (id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;	// 0x31541481
- (id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;	// 0x315419a9
- (id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;	// 0x315414c9
- (void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;	// 0x31540a4d
- (void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x31542229
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3153f545
// declared property getter: - (id)orderedSlides;	// 0x3153f6f9
// declared property getter: - (id)orderedTexts;	// 0x31540e69
- (void)removeActionForKey:(id)key;	// 0x315432b9
- (void)removeAllSlides;	// 0x31540a05
- (void)removeAllTexts;	// 0x315421e1
- (void)removeSlidesAtIndices:(id)indices;	// 0x315406d1
- (void)removeTextsAtIndices:(id)indices;	// 0x31541e51
- (id)setActionGroupForKey:(id)key;	// 0x315435c1
- (id)setAnimationTriggerForTargetPlugObjectID:(id)targetPlugObjectID withAnimationKey:(id)animationKey forKey:(id)key;	// 0x31543481
- (id)setConditionalActionWithPredicate:(id)predicate forKey:(id)key;	// 0x31543631
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x31542611
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x315428a1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x315429f9
- (id)setGenericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes forKey:(id)key;	// 0x31543521
- (id)setTransitionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID forKey:(id)key;	// 0x315433e1
- (id)slideAtIndex:(unsigned)index;	// 0x3153f9c5
// declared property getter: - (id)slides;	// 0x3153f5ad
- (id)textAtIndex:(unsigned)index;	// 0x31541135
// declared property getter: - (id)texts;	// 0x31540d1d
@end
