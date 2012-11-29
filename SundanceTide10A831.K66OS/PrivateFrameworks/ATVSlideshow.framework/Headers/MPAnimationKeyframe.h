/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, MCAnimationKeyframe, MPAnimationPath;

@interface MPAnimationKeyframe : NSObject <NSCoding, NSCopying> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	MPAnimationPath *_parentPath;	// 8 = 0x8
	MCAnimationKeyframe *_keyframe;	// 12 = 0xc
	double _time;	// 16 = 0x10
	int _offsetType;	// 24 = 0x18
	double _preControl;	// 28 = 0x1c
	double _postControl;	// 36 = 0x24
}
@property(assign, nonatomic) int offsetType;	// G=0x338f495d; S=0x338f4801; @synthesize=_offsetType
@property(retain) MPAnimationPath *parentPath;	// G=0x338f47b1; S=0x338f7129; converted property
@property(assign, nonatomic) double postControl;	// G=0x338f48c1; S=0x338f4901; @synthesize=_postControl
@property(assign, nonatomic) double preControl;	// G=0x338f4839; S=0x338f4879; @synthesize=_preControl
@property(assign, nonatomic) double time;	// G=0x338f4945; S=0x338f47c1; @synthesize=_time
- (id)init;	// 0x338f42b1
- (id)initWithCoder:(id)coder;	// 0x338f4531
- (void)copyVars:(id)vars;	// 0x338f72a9
- (id)copyWithZone:(NSZone *)zone;	// 0x338f46e9
- (void)dealloc;	// 0x338f4741
- (void)dump;	// 0x338f7081
- (void)encodeWithCoder:(id)coder;	// 0x338f4365
- (id)fullDebugLog;	// 0x338f70a9
// declared property getter: - (int)offsetType;	// 0x338f495d
- (id)parentDocument;	// 0x338f7189
// converted property getter: - (id)parentPath;	// 0x338f47b1
// declared property getter: - (double)postControl;	// 0x338f48c1
// declared property getter: - (double)preControl;	// 0x338f4839
- (int)relativeTimeCompare:(id)compare;	// 0x338f7025
- (void)setKeyframe:(id)keyframe;	// 0x338f71a9
// declared property setter: - (void)setOffsetType:(int)type;	// 0x338f4801
// converted property setter: - (void)setParentPath:(id)path;	// 0x338f7129
// declared property setter: - (void)setPostControl:(double)control;	// 0x338f4901
// declared property setter: - (void)setPreControl:(double)control;	// 0x338f4879
// declared property setter: - (void)setTime:(double)time;	// 0x338f47c1
// declared property getter: - (double)time;	// 0x338f4945
@end
