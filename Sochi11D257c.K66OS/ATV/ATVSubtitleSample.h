/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVSubtitleSample : XXUnknownSuperclass {
	NSArray *_subtitleLines;	// 4 = 0x4
	double _startTime;	// 8 = 0x8
	double _endTime;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) double endTime;	// G=0x2429cd; @synthesize=_endTime
@property(readonly, assign, nonatomic) double startTime;	// G=0x2429b5; @synthesize=_startTime
@property(readonly, assign, nonatomic) NSArray *subtitleLines;	// G=0x2429e5; @synthesize=_subtitleLines
- (id)initWithStartTime:(double)startTime endTime:(double)time lines:(id)lines;	// 0x2428e5
- (void)dealloc;	// 0x242969
// declared property getter: - (double)endTime;	// 0x2429cd
// declared property getter: - (double)startTime;	// 0x2429b5
// declared property getter: - (id)subtitleLines;	// 0x2429e5
@end
