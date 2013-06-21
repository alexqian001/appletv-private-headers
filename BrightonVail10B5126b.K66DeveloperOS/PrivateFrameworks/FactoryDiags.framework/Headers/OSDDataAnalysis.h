/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library


@interface OSDDataAnalysis : NSObject {
}
+ (void)initialize;	// 0x33ef2f79
+ (id)sharedInstance;	// 0x33ef2fd1
- (id)init;	// 0x33ef2fe1
- (double)average:(double *)average size:(unsigned)size;	// 0x33ef30e9
- (double)interpolate:(double)interpolate vx:(double *)vx vy:(double *)vy size:(unsigned)size;	// 0x33ef3039
- (double)stdev:(double *)stdev size:(unsigned)size;	// 0x33ef3181
- (double)variance:(double *)variance size:(unsigned)size;	// 0x33ef3121
@end
