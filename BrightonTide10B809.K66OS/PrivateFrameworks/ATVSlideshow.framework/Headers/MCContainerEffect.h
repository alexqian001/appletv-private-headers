/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"
#import "MCActionSupport.h"

@class NSMutableDictionary, NSString, NSArray, NSMutableArray, NSSet, NSDictionary;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
	NSMutableArray *mSlides;	// 28 = 0x1c
	NSMutableArray *mTexts;	// 32 = 0x20
	NSMutableDictionary *mActions;	// 36 = 0x24
	NSMutableDictionary *mEffectAttributes;	// 40 = 0x28
	NSString *mEffectID;	// 44 = 0x2c
	BOOL mIsLive;	// 48 = 0x30
}
@property(readonly, assign) NSDictionary *actions;	// G=0x33254325; 
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x33254475; 
@property(readonly, assign, nonatomic) unsigned countOfSlides;	// G=0x3324fe9d; 
@property(readonly, assign, nonatomic) unsigned countOfTexts;	// G=0x33251f91; 
@property(copy) NSDictionary *effectAttributes;	// G=0x33253c9d; S=0x33253d75; 
@property(copy) NSString *effectID;	// G=0x33253e85; S=0x33253e99; @synthesize=mEffectID
@property(assign, nonatomic) BOOL isLive;	// G=0x33253ea9; S=0x33253eb9; @synthesize=mIsLive
@property(readonly, assign, nonatomic) unsigned nextAvailableSlideIndex;	// G=0x3324ff69; 
@property(readonly, assign, nonatomic) unsigned nextAvailableTextIndex;	// G=0x3325205d; 
@property(readonly, assign) NSArray *orderedSlides;	// G=0x3324fcc5; 
@property(readonly, assign) NSArray *orderedTexts;	// G=0x33251ddd; 
@property(readonly, assign) NSSet *slides;	// G=0x3324fb99; 
@property(readonly, assign) NSSet *texts;	// G=0x33251cb1; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3324efbd
- (void)initActionsWithImprints:(id)imprints;	// 0x33253ec9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3324f079
- (id)actionForKey:(id)key;	// 0x33254579
// declared property getter: - (id)actions;	// 0x33254325
- (void)addEffectAttributes:(id)attributes;	// 0x33253b31
- (id)addSlide;	// 0x332503e5
- (id)addSlideForAsset:(id)asset;	// 0x33250b49
- (id)addSlideForContainer:(id)container;	// 0x3325114d
- (id)addSlides:(int)slides;	// 0x33250411
- (id)addSlidesForAssets:(id)assets;	// 0x33250bd9
- (id)addTextForAsset:(id)asset andKey:(id)key;	// 0x33252571
- (id)addTextForAttributedString:(id)attributedString;	// 0x332524d9
- (id)addTextsForAssets:(id)assets andKey:(id)key;	// 0x332525dd
- (id)addTextsForAttributedStrings:(id)attributedStrings;	// 0x3325253d
// declared property getter: - (unsigned)countOfActions;	// 0x33254475
// declared property getter: - (unsigned)countOfSlides;	// 0x3324fe9d
// declared property getter: - (unsigned)countOfTexts;	// 0x33251f91
- (void)demolish;	// 0x3324f481
- (void)demolishActions;	// 0x33254025
- (id)effectAttributeForKey:(id)key;	// 0x332538c1
// declared property getter: - (id)effectAttributes;	// 0x33253c9d
// declared property getter: - (id)effectID;	// 0x33253e85
- (id)imprint;	// 0x3324f841
- (id)imprintsForActions;	// 0x3325420d
- (id)insertSlideAtIndex:(int)index;	// 0x33250779
- (id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;	// 0x33250c0d
- (id)insertSlideForContainer:(id)container atIndex:(unsigned)index;	// 0x33251181
- (id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;	// 0x33250c8d
- (id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;	// 0x33252b99
- (id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;	// 0x33252619
- (id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;	// 0x33252bf1
- (id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;	// 0x33252669
// declared property getter: - (BOOL)isLive;	// 0x33253ea9
- (void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;	// 0x332519dd
- (void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x332535f1
// declared property getter: - (unsigned)nextAvailableSlideIndex;	// 0x3324ff69
// declared property getter: - (unsigned)nextAvailableTextIndex;	// 0x3325205d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3324fb21
// declared property getter: - (id)orderedSlides;	// 0x3324fcc5
// declared property getter: - (id)orderedTexts;	// 0x33251ddd
- (void)removeActionForKey:(id)key;	// 0x33254821
- (void)removeAllActions;	// 0x33254931
- (void)removeAllSlides;	// 0x33251989
- (void)removeAllTexts;	// 0x3325359d
- (void)removeSlidesAtIndices:(id)indices;	// 0x33251599
- (void)removeTextsAtIndices:(id)indices;	// 0x3325313d
- (void)setAction:(id)action forKey:(id)key;	// 0x332546ad
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x332539bd
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x33253d75
// declared property setter: - (void)setEffectID:(id)anId;	// 0x33253e99
// declared property setter: - (void)setIsLive:(BOOL)live;	// 0x33253eb9
- (id)slideAtIndex:(unsigned)index;	// 0x332501a5
// declared property getter: - (id)slides;	// 0x3324fb99
- (id)textAtIndex:(unsigned)index;	// 0x33252299
// declared property getter: - (id)texts;	// 0x33251cb1
@end
