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
	double _startTime;	// 4 = 0x4
	double _endTime;	// 12 = 0xc
	NSArray *_subtitleLines;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) double endTime;	// G=0x21fb4d; @synthesize=_endTime
@property(readonly, assign, nonatomic) double startTime;	// G=0x21fb35; @synthesize=_startTime
@property(readonly, assign, nonatomic) NSArray *subtitleLines;	// G=0x21fb65; @synthesize=_subtitleLines
- (id)initWithStartTime:(double)startTime endTime:(double)time lines:(id)lines;	// 0x21fa65
- (void)dealloc;	// 0x21fae9
// declared property getter: - (double)endTime;	// 0x21fb4d
// declared property getter: - (double)startTime;	// 0x21fb35
// declared property getter: - (id)subtitleLines;	// 0x21fb65
@end

