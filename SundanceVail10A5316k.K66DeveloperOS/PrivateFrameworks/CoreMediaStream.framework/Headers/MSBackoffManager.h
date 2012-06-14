/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSDate;
@protocol MSBackoffManagerDelegate;

@interface MSBackoffManager : NSObject <NSCoding> {
@private
	id<MSBackoffManagerDelegate> _delegate;	// 4 = 0x4
	double _initialInterval;	// 8 = 0x8
	double _backoffFactor;	// 16 = 0x10
	double _randomizeFactor;	// 24 = 0x18
	double _maxBackoffInterval;	// 32 = 0x20
	double _currentInterval;	// 40 = 0x28
	NSDate *_nextExpiryDate;	// 48 = 0x30
	NSDate *_retryAfterDate;	// 52 = 0x34
}
@property(assign, nonatomic) double backoffFactor;	// G=0x339ab8ad; S=0x339ab8c5; @synthesize=_backoffFactor
@property(assign, nonatomic) double currentInterval;	// G=0x339ab931; S=0x339aaf4d; @synthesize=_currentInterval
@property(assign, nonatomic) id<MSBackoffManagerDelegate> delegate;	// G=0x339ab861; S=0x339ab871; @synthesize=_delegate
@property(assign, nonatomic) double initialInterval;	// G=0x339ab881; S=0x339ab899; @synthesize=_initialInterval
@property(assign, nonatomic) double maxBackoffInterval;	// G=0x339ab905; S=0x339ab91d; @synthesize=_maxBackoffInterval
@property(retain, nonatomic) NSDate *nextExpiryDate;	// G=0x339ab009; S=0x339ab949; @synthesize=_nextExpiryDate
@property(assign, nonatomic) double randomizeFactor;	// G=0x339ab8d9; S=0x339ab8f1; @synthesize=_randomizeFactor
@property(retain, nonatomic) NSDate *retryAfterDate;	// G=0x339ab971; S=0x339ab981; @synthesize=_retryAfterDate
- (id)initWithCoder:(id)coder;	// 0x339ab521
- (id)initWithInitialInterval:(double)initialInterval backoffFactor:(double)factor randomizeFactor:(double)factor3 maxBackoffInterval:(double)interval retryAfterDate:(id)date;	// 0x339aae69
- (void).cxx_destruct;	// 0x339ab9a9
- (void)_complainAboutMissingKeyInArchive:(id)archive;	// 0x339ab4e5
- (void)backoff;	// 0x339ab209
// declared property getter: - (double)backoffFactor;	// 0x339ab8ad
// declared property getter: - (double)currentInterval;	// 0x339ab931
// declared property getter: - (id)delegate;	// 0x339ab861
- (void)didReceiveRetryAfterDate:(id)date;	// 0x339ab0b5
- (void)encodeWithCoder:(id)coder;	// 0x339ab379
// declared property getter: - (double)initialInterval;	// 0x339ab881
// declared property getter: - (double)maxBackoffInterval;	// 0x339ab905
// declared property getter: - (id)nextExpiryDate;	// 0x339ab009
// declared property getter: - (double)randomizeFactor;	// 0x339ab8d9
- (void)reset;	// 0x339ab189
// declared property getter: - (id)retryAfterDate;	// 0x339ab971
// declared property setter: - (void)setBackoffFactor:(double)factor;	// 0x339ab8c5
// declared property setter: - (void)setCurrentInterval:(double)interval;	// 0x339aaf4d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339ab871
// declared property setter: - (void)setInitialInterval:(double)interval;	// 0x339ab899
// declared property setter: - (void)setMaxBackoffInterval:(double)interval;	// 0x339ab91d
// declared property setter: - (void)setNextExpiryDate:(id)date;	// 0x339ab949
// declared property setter: - (void)setRandomizeFactor:(double)factor;	// 0x339ab8f1
// declared property setter: - (void)setRetryAfterDate:(id)date;	// 0x339ab981
@end
