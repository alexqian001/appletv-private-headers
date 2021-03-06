/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableIndexSet;

@interface MPWeighter : NSObject {
	int _totalWeight;	// 4 = 0x4
	NSMutableArray *_weights;	// 8 = 0x8
	NSMutableArray *_items;	// 12 = 0xc
	NSMutableArray *_constraints;	// 16 = 0x10
	NSMutableArray *_usageCount;	// 20 = 0x14
	NSMutableIndexSet *_ignoreIndices;	// 24 = 0x18
	BOOL _evenlyPickByID;	// 28 = 0x1c
	BOOL _ignoreBreaks;	// 29 = 0x1d
}
- (id)init;	// 0x320ae79d
- (void)addIndexToIgnore:(int)ignore;	// 0x320b0bb5
- (void)addItem:(id)item withWeight:(int)weight andContraints:(id)contraints;	// 0x320ae96d
- (id)allConstraints;	// 0x320b0be5
- (id)allItems;	// 0x320b0bd5
- (id)allUsageCounts;	// 0x320b0bf5
- (void)clearAllItems;	// 0x320b0c91
- (void)clearIgnoreIndices;	// 0x320b0b95
- (id)constraintsForItem:(id)item;	// 0x320b0c05
- (int)count;	// 0x320b0c71
- (void)dealloc;	// 0x320ae8ad
- (int)getRandomIndex;	// 0x320affc9
- (int)getRandomIndexInSubset:(id)subset;	// 0x320afa05
- (int)getRandomIndexInSubset:(id)subset withPreviousTags:(id)previousTags;	// 0x320afb91
- (int)getRandomIndexMeetingContraints:(id)contraints;	// 0x320aea29
- (int)getRandomIndexMeetingContraints:(id)contraints oneMatch:(BOOL)match;	// 0x320aea3d
- (int)getRandomIndexWithNoBreaksForImageCount:(int)imageCount;	// 0x320aec19
- (id)getRandomItemMeetingNumberOfFaceLandscapes:(int)faceLandscapes facePortraits:(int)portraits imageLandscapes:(int)landscapes imagePortraits:(int)portraits4 vBreaks:(int)breaks hBreaks:(int)breaks6 movies:(int)movies fitsInExtraWide:(int)extraWide aspectRatios:(id)ratios previousTags:(id)tags;	// 0x320aee11
- (void)ignoreIndex:(int)index;	// 0x320b0b15
- (void)ignoreIndices:(id)indices;	// 0x320b0b55
- (id)ignoredIndices;	// 0x320b0b05
- (id)imageCounts;	// 0x320b0a01
- (void)increaseUsageCountOfObjectAtIndex:(int)index;	// 0x320b0645
- (id)indicesEqualingConstraints:(id)constraints;	// 0x320b0749
- (id)indicesMeetingConstraints:(id)constraints;	// 0x320b06b9
- (BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints;	// 0x320b02fd
- (BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints oneMatch:(BOOL)match;	// 0x320b0321
- (int)numberOfItemsWithImageCount:(int)imageCount;	// 0x320b092d
- (void)setEvenlyPickByID:(BOOL)anId;	// 0x320b091d
- (void)setIgnoreBreaks:(BOOL)breaks;	// 0x320b0af5
@end

