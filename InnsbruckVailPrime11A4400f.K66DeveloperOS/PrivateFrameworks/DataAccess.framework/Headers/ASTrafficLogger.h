/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import </libobjc.A.h>

@class NSString, NSFileHandle;

@interface ASTrafficLogger : NSObject {
	NSFileHandle *_lookasideFileHandle;	// 4 = 0x4
	NSString *_lookasideFilePath;	// 8 = 0x8
	BOOL _isOutgoingTraffic;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL isOutgoingTraffic;	// G=0x30832b75; S=0x30832b85; @synthesize=_isOutgoingTraffic
+ (id)_logQueue;	// 0x30832369
- (void)_moveLogFileContentsAtPath:(id)path;	// 0x3083258d
- (void)_openLookasideFile;	// 0x30832395
- (void)dealloc;	// 0x3083289d
// declared property getter: - (BOOL)isOutgoingTraffic;	// 0x30832b75
- (void)logPlainTextData:(id)data;	// 0x30832aa9
- (void)logWBXMLData:(id)data;	// 0x30832915
// declared property setter: - (void)setIsOutgoingTraffic:(BOOL)traffic;	// 0x30832b85
@end
