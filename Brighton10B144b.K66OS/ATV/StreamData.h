/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface StreamData : XXUnknownSuperclass {
	long long fileSize;	// 4 = 0x4
	NSString *fileID;	// 12 = 0xc
	long long creationTime;	// 16 = 0x10
	long long preroll;	// 24 = 0x18
	long long duration;	// 32 = 0x20
	long long wrapInterval;	// 40 = 0x28
	int alignmentOffset;	// 48 = 0x30
	long long toolsVersion;	// 52 = 0x34
}
- (id)initWithBuffer:(id)buffer;	// 0x4b3c41
- (void)dealloc;	// 0x4b3ec1
- (int)getAlignmentOffset;	// 0x4b3e99
- (long long)getCreationTime;	// 0x4b3e39
- (long long)getDuration;	// 0x4b3e69
- (id)getFileID;	// 0x4b3e29
- (int)getFileSize;	// 0x4b3e19
- (long long)getPreroll;	// 0x4b3e51
- (long long)getToolsVersion;	// 0x4b3ea9
- (long long)getWrapInterval;	// 0x4b3e81
@end
