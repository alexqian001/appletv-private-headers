/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PCGrowthAlgorithm.h"
#import <NSObject.h> // Unknown library
#import "PersistentConnection-Structs.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {
@private
	double _currentKeepAliveInterval;	// 4 = 0x4
	double _minimumKeepAliveInterval;	// 12 = 0xc
	double _maximumKeepAliveInterval;	// 20 = 0x14
	double _lastKeepAliveInterval;	// 28 = 0x1c
	int _growthStage;	// 36 = 0x24
	double _highWatermark;	// 40 = 0x28
	double _initialGrowthStageHighWatermark;	// 48 = 0x30
	double _initialGrowthStageLastAttempt;	// 56 = 0x38
	NSDate *_leaveSteadyStateDate;	// 64 = 0x40
	NSString *_loggingIdentifier;	// 68 = 0x44
	NSString *_algorithmName;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x34e3b06d; @synthesize=_currentKeepAliveInterval
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x34e3b02d; @synthesize=_loggingIdentifier
@property(assign, nonatomic) double maximumKeepAliveInterval;	// G=0x34e3b03d; S=0x34e3b085; @synthesize=_maximumKeepAliveInterval
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x34e3b055; S=0x34e3b10d; @synthesize=_minimumKeepAliveInterval
+ (void)_loadDefaultValue:(double *)value forKey:(CFStringRef)key;	// 0x34e3ba99
+ (void)_loadDefaults;	// 0x34e3bb49
- (id)initWithKeepAliveInterval:(double)keepAliveInterval loggingIdentifier:(id)identifier algorithmName:(id)name;	// 0x34e3b9a9
- (void)_processBackoffAction:(int)action;	// 0x34e3b4ed
- (void)_processInitialGrowthAction:(int)action;	// 0x34e3be09
- (void)_processRefinedGrowthAction:(int)action;	// 0x34e3bc61
- (void)_processSteadyStateAction:(int)action;	// 0x34e3b559
- (void)_resetAlgorithmToInterval:(double)interval;	// 0x34e3b2a9
- (void)_setCurrentKeepAliveInterval:(double)interval;	// 0x34e3b195
- (double)_steadyStateTimeout;	// 0x34e3b825
- (id)_stringForAction:(int)action;	// 0x34e3afad
- (id)_stringForStage:(int)stage;	// 0x34e3afed
// declared property getter: - (double)currentKeepAliveInterval;	// 0x34e3b06d
- (void)dealloc;	// 0x34e3bfcd
- (id)description;	// 0x34e3bbad
// declared property getter: - (id)loggingIdentifier;	// 0x34e3b02d
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x34e3b03d
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x34e3b055
- (void)processNextAction:(int)action;	// 0x34e3b365
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x34e3b085
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x34e3b10d
@end
