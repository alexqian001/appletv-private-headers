/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSArray, NSDate, NSString;

@interface VMUFatHeader : VMUHeader {
	NSDate *_timestamp;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSArray *_fatArchs;	// 12 = 0xc
}
@property(readonly, retain) NSArray *fatArchs;	// G=0x32c9b391; converted property
@property(readonly, retain) NSString *path;	// G=0x32c9b371; converted property
@property(readonly, retain) NSDate *timestamp;	// G=0x32c9b381; converted property
+ (id)fatHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x32c9b565
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x32c9b3a1
- (void)dealloc;	// 0x32c9b5b9
- (id)fatArchMatchingArchitecture:(id)architecture;	// 0x32c9b64d
// converted property getter: - (id)fatArchs;	// 0x32c9b391
- (BOOL)isFat;	// 0x32c9b36d
// converted property getter: - (id)path;	// 0x32c9b371
// converted property getter: - (id)timestamp;	// 0x32c9b381
@end

