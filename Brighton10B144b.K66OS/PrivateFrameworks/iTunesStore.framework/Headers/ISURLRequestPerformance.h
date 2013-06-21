/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {
	double _finishTime;	// 4 = 0x4
	double _receivedResponseTime;	// 12 = 0xc
	double _renderBeginTime;	// 20 = 0x14
	double _renderEndTime;	// 28 = 0x1c
	double _startTime;	// 36 = 0x24
	NSURLResponse *_urlResponse;	// 44 = 0x2c
}
@property(copy, nonatomic) NSURLResponse *URLResponse;	// G=0x3689c115; S=0x3689c129; @synthesize=_urlResponse
@property(readonly, assign, nonatomic) double finishInterval;	// G=0x3689bfd9; 
@property(readonly, assign, nonatomic) double receivedResponseInterval;	// G=0x3689c009; 
@property(readonly, assign, nonatomic) double renderBeginInterval;	// G=0x3689c039; 
@property(readonly, assign, nonatomic) double renderEndInterval;	// G=0x3689c069; 
@property(assign, nonatomic) double startTime;	// G=0x3689c0e9; S=0x3689c101; @synthesize=_startTime
// declared property getter: - (id)URLResponse;	// 0x3689c115
- (void)dealloc;	// 0x3689bf8d
// declared property getter: - (double)finishInterval;	// 0x3689bfd9
// declared property getter: - (double)receivedResponseInterval;	// 0x3689c009
// declared property getter: - (double)renderBeginInterval;	// 0x3689c039
// declared property getter: - (double)renderEndInterval;	// 0x3689c069
- (void)setFinishTime:(double)time;	// 0x3689c099
- (void)setReceivedResponseTime:(double)time;	// 0x3689c0ad
- (void)setRenderBeginTime:(double)time;	// 0x3689c0c1
- (void)setRenderFinishTime:(double)time;	// 0x3689c0d5
// declared property setter: - (void)setStartTime:(double)time;	// 0x3689c101
// declared property setter: - (void)setURLResponse:(id)response;	// 0x3689c129
// declared property getter: - (double)startTime;	// 0x3689c0e9
@end
