/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixTopHeader : XXUnknownSuperclass {
	int startOffset;	// 4 = 0x4
	unsigned short version;	// 8 = 0x8
	unsigned short headerObjectPID;	// 10 = 0xa
	unsigned char drm;	// 12 = 0xc
	unsigned crc;	// 16 = 0x10
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x50fa45
- (void)dealloc;	// 0x50fbf5
- (unsigned)getCrc;	// 0x50fbe5
- (unsigned char)getDrm;	// 0x50fbd5
- (unsigned short)getHeaderObjectPID;	// 0x50fbc5
- (int)getStartOffset;	// 0x50fba5
- (unsigned short)getVersion;	// 0x50fbb5
@end

