/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MFPartialNetworkData : NSObject {
	NSMutableData *_rawData;	// 4 = 0x4
	NSMutableData *_unixData;	// 8 = 0x8
}
@property(retain) NSMutableData *rawData;	// G=0x3441d581; S=0x3441d4f9; converted property
- (void)appendRawData:(id)data;	// 0x3441d3d9
- (id)copyDataWithUnixLineEndings;	// 0x3441d609
- (id)dataWithUnixLineEndings;	// 0x3441d5e1
- (void)dealloc;	// 0x3441d691
- (void)purgeCaches;	// 0x3441d6f5
// converted property getter: - (id)rawData;	// 0x3441d581
- (unsigned)rawDataLength;	// 0x3441d591
// converted property setter: - (void)setRawData:(id)data;	// 0x3441d4f9
@end
