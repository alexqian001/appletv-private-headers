/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {
	BOOL _canPause;	// 4 = 0x4
	double _changeRate;	// 8 = 0x8
	long long _currentValue;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
	double _estimatedTimeRemaining;	// 28 = 0x1c
	long long _maxValue;	// 36 = 0x24
	long long _normalizedCurrentValue;	// 44 = 0x2c
	long long _normalizedMaxValue;	// 52 = 0x34
	int _operationType;	// 60 = 0x3c
	NSMutableArray *_snapshotTimes;	// 64 = 0x40
	NSMutableArray *_snapshotValues;	// 68 = 0x44
	int _units;	// 72 = 0x48
}
@property(assign) BOOL canPause;	// G=0x3129b7a5; S=0x3129bf91; 
@property(assign) double changeRate;	// G=0x3129b875; S=0x3129c011; 
@property(assign) long long currentValue;	// G=0x3129b965; S=0x3129c0a9; 
@property(assign) double estimatedTimeRemaining;	// G=0x3129ba49; S=0x3129c141; 
@property(assign) long long maxValue;	// G=0x3129bb3d; S=0x3129c1d9; 
@property(assign) long long normalizedCurrentValue;	// G=0x3129bc21; S=0x3129c271; 
@property(assign) long long normalizedMaxValue;	// G=0x3129bd1d; S=0x3129c309; 
@property(assign) int operationType;	// G=0x3129be19; S=0x3129c3a1; 
@property(assign) int units;	// G=0x3129c6a5; S=0x3129c421; 
- (id)init;	// 0x3129b4b9
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3129cb2d
- (void)_updateStatisticsFromSnapshots;	// 0x3129ccc9
// declared property getter: - (BOOL)canPause;	// 0x3129b7a5
// declared property getter: - (double)changeRate;	// 0x3129b875
- (id)copyWithZone:(NSZone *)zone;	// 0x3129b5d1
- (id)copyXPCEncoding;	// 0x3129c9dd
// declared property getter: - (long long)currentValue;	// 0x3129b965
- (void)dealloc;	// 0x3129b55d
- (id)description;	// 0x3129c771
// declared property getter: - (double)estimatedTimeRemaining;	// 0x3129ba49
// declared property getter: - (long long)maxValue;	// 0x3129bb3d
// declared property getter: - (long long)normalizedCurrentValue;	// 0x3129bc21
// declared property getter: - (long long)normalizedMaxValue;	// 0x3129bd1d
// declared property getter: - (int)operationType;	// 0x3129be19
- (void)resetSnapshots;	// 0x3129bee5
// declared property setter: - (void)setCanPause:(BOOL)pause;	// 0x3129bf91
// declared property setter: - (void)setChangeRate:(double)rate;	// 0x3129c011
// declared property setter: - (void)setCurrentValue:(long long)value;	// 0x3129c0a9
// declared property setter: - (void)setEstimatedTimeRemaining:(double)remaining;	// 0x3129c141
// declared property setter: - (void)setMaxValue:(long long)value;	// 0x3129c1d9
// declared property setter: - (void)setNormalizedCurrentValue:(long long)value;	// 0x3129c271
// declared property setter: - (void)setNormalizedMaxValue:(long long)value;	// 0x3129c309
// declared property setter: - (void)setOperationType:(int)type;	// 0x3129c3a1
// declared property setter: - (void)setUnits:(int)units;	// 0x3129c421
- (void)snapshot;	// 0x3129c4a1
// declared property getter: - (int)units;	// 0x3129c6a5
@end
