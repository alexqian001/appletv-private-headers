/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import </libobjc.A.h>

@class NSMutableDictionary;

@interface MPFrameManager : NSObject {
	NSMutableDictionary *mFrames;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
}
+ (void)loadFrameManagerWithPaths:(id)paths;	// 0x2fbb10a9
+ (void)releaseSharedManager;	// 0x2fbb08d1
+ (id)sharedManager;	// 0x2fbb07dd
- (id)initWithPaths:(id)paths;	// 0x2fbb1629
- (id)allCategoryIDs;	// 0x2fbb0a35
- (id)allFrameIDs;	// 0x2fbb0a15
- (id)attributesForFrameID:(id)frameID andPresetID:(id)anId;	// 0x2fbb0f5d
- (id)categoryIDsForFrameID:(id)frameID;	// 0x2fbb0d9d
- (id)constraintsForFramesMatchingList:(id)framesMatchingList andCriteria:(id)criteria;	// 0x2fbb1331
- (void)dealloc;	// 0x2fbb099d
- (id)descriptionForFrameID:(id)frameID;	// 0x2fbb0f3d
- (id)framesForCategoryID:(id)categoryID;	// 0x2fbb0df5
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x2fbb0c85
- (id)localizedFrameNameForFrameID:(id)frameID;	// 0x2fbb0c41
- (id)randomFrameFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x2fbb1105
- (id)versionOfFrameID:(id)frameID;	// 0x2fbb0c09
@end
