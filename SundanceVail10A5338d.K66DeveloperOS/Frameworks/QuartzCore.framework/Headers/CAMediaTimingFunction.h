/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"
#import "NSCoding.h"


@interface CAMediaTimingFunction : NSObject <NSCoding> {
	CAMediaTimingFunctionPrivate *_priv;	// 4 = 0x4
}
+ (id)functionWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x32072311
+ (id)functionWithName:(id)name;	// 0x32069519
- (id)initWithCoder:(id)coder;	// 0x321060a5
- (id)initWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x32055d8d
- (void)_getPoints:(double *)points;	// 0x32105e41
- (float)_solveForInput:(float)input;	// 0x32074199
- (void)dealloc;	// 0x32055ed1
- (id)description;	// 0x32105f4d
- (void)encodeWithCoder:(id)coder;	// 0x32105fd9
- (void)getControlPointAtIndex:(unsigned long)index values:(float [2])values;	// 0x32105e89
@end
