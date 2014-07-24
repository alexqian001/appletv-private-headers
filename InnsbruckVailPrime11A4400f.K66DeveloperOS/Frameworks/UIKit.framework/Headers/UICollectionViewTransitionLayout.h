/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UICollectionViewLayout.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {
	UICollectionViewLayout *_fromLayout;	// 68 = 0x44
	UICollectionViewLayout *_toLayout;	// 72 = 0x48
	CGRect _fromVisibleBounds;	// 76 = 0x4c
	CGRect _toVisibleBounds;	// 92 = 0x5c
	BOOL _haveValidInfos;	// 108 = 0x6c
	float _transitionProgress;	// 112 = 0x70
	NSMutableDictionary *_transitionInformationsDict;	// 116 = 0x74
	NSMutableDictionary *_currentLayoutInfos;	// 120 = 0x78
	NSArray *_fromLayoutAttributes;	// 124 = 0x7c
	NSArray *_toLayoutAttributes;	// 128 = 0x80
	BOOL _layoutIsValid;	// 132 = 0x84
	NSMutableArray *_disappearingLayoutAttributes;	// 136 = 0x88
	NSMutableArray *_appearingLayoutAttributes;	// 140 = 0x8c
	float _accuracy;	// 144 = 0x90
}
@property(readonly, assign, nonatomic) UICollectionViewLayout *currentLayout;	// G=0x2f95f549; @synthesize=_fromLayout
@property(readonly, retain) NSArray *fromLayoutAttributes;	// G=0x2f95e87d; converted property
@property(readonly, assign, nonatomic) UICollectionViewLayout *nextLayout;	// G=0x2f95f559; @synthesize=_toLayout
@property(readonly, retain) NSArray *toLayoutAttributes;	// G=0x2f95e88d; converted property
@property(assign, nonatomic) float transitionProgress;	// G=0x2f95f569; S=0x2f95e6a9; @synthesize=_transitionProgress
- (id)initWithCurrentLayout:(id)currentLayout nextLayout:(id)layout;	// 0x2f95ce49
- (CGRect)_newVisibleBounds;	// 0x2f95e635
- (CGRect)_oldVisibleBounds;	// 0x2f95e61d
- (void)_setCollectionView:(id)view;	// 0x2f95cee1
- (CGSize)collectionViewContentSize;	// 0x2f95e82d
// declared property getter: - (id)currentLayout;	// 0x2f95f549
- (void)dealloc;	// 0x2f95f495
// converted property getter: - (id)fromLayoutAttributes;	// 0x2f95e87d
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)layoutAttributes toLayoutAttributes:(id)layoutAttributes2 progress:(float)progress;	// 0x2f95e89d
- (void)invalidateLayout;	// 0x2f95cfa5
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f95f1dd
- (id)layoutAttributesForElementsInRect:(CGRect)rect;	// 0x2f95f329
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x2f95ee95
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f95f031
// declared property getter: - (id)nextLayout;	// 0x2f95f559
- (void)prepareLayout;	// 0x2f95cfd1
// declared property setter: - (void)setTransitionProgress:(float)progress;	// 0x2f95e6a9
// converted property getter: - (id)toLayoutAttributes;	// 0x2f95e88d
// declared property getter: - (float)transitionProgress;	// 0x2f95f569
- (void)updateValue:(float)value forAnimatedKey:(id)animatedKey;	// 0x2f95e64d
- (float)valueForAnimatedKey:(id)animatedKey;	// 0x2f95e67d
@end
