/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

@interface DRMData : XXUnknownSuperclass {
	NSString *drmSystemID;	// 4 = 0x4
	NSData *data;	// 8 = 0x8
}
+ (void)initialize;	// 0x491a89
+ (id)netflixKeyEnvelopeID;	// 0x491b79
+ (id)playReadyID;	// 0x491b69
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x491b89
- (void)dealloc;	// 0x491c75
- (id)getDRMSystemID;	// 0x491c55
- (id)getData;	// 0x491c65
@end

