/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;	// G=0x33e8ca15; S=0x33ea0e7d; 
@property(assign, getter=isCumulative) BOOL cumulative;	// G=0x33e8ca2d; S=0x33f11859; 
@property(copy) NSString *keyPath;	// G=0x33e8b6bd; S=0x33e8ad11; 
@property(retain) CAValueFunction *valueFunction;	// G=0x33e8ca45; S=0x33ea1235; 
+ (id)animationWithKeyPath:(id)keyPath;	// 0x33e8acc1
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x33e8b9fd
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x33e8c54d
- (BOOL)additive;	// 0x33f11841
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x33f115cd
- (BOOL)cumulative;	// 0x33f11829
// declared property getter: - (BOOL)isAdditive;	// 0x33e8ca15
// declared property getter: - (BOOL)isCumulative;	// 0x33e8ca2d
// declared property getter: - (id)keyPath;	// 0x33e8b6bd
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x33ea0e7d
// declared property setter: - (void)setCumulative:(BOOL)cumulative;	// 0x33f11859
// declared property setter: - (void)setKeyPath:(id)path;	// 0x33e8ad11
// declared property setter: - (void)setValueFunction:(id)function;	// 0x33ea1235
// declared property getter: - (id)valueFunction;	// 0x33e8ca45
@end
