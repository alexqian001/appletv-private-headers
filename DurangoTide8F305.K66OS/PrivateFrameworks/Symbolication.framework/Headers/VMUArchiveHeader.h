/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSMutableArray, NSString;

@interface VMUArchiveHeader : VMUHeader {
	NSMutableArray *_headers;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *headers;	// G=0x31184465; converted property
+ (id)archiveHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x311845f5
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x31184641
- (id)architecture;	// 0x311844d9
- (void)dealloc;	// 0x31184581
- (id)description;	// 0x31184475
// converted property getter: - (id)headers;	// 0x31184465
- (BOOL)isArchive;	// 0x31184461
@end

